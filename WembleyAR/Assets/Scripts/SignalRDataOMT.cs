using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.AspNetCore.SignalR.Client;
using System;
using System.Threading.Tasks;
using Newtonsoft.Json;
using TMPro;

using UnityEngine.UI;
using System.Linq;

public class SignalRDataOMT : MonoBehaviour
{
    public GameObject alarmScript;

    public GameObject[] inputCheckS1;
    public GameObject[] outputCheckS1;
    public GameObject[] inputCheckS2;
    public GameObject[] outputCheckS2;
    public GameObject[] inputCheckS3;
    public GameObject[] outputCheckS3;
    public TMP_Text[] productionDataS1;
    public TMP_Text[] productionDataS2;

    public TMP_Text[] productionDataS3;

    public TMP_Text[] visionProcessingValuesS1;
    public TMP_Text[] visionProcessingValuesS2;
    public TMP_Text[] enableValuesS1;
    public TMP_Text[] enableValuesS2;
    public GameObject[] enableFrameS1;
    public GameObject[] enableFrameS2;
    public TMP_Text[] enableValuesS3;
    public TMP_Text[] visionProcessingValuesS3;
    public GameObject[] enableFrameS3;
    public TMP_Text[] ChemicalDetectionValue;
    public GameObject[] ChemicalDetectionFrameValue;
    public GameObject[] listMachineStatusS1;
    private Dictionary<string, Action<DataSignalR>> dataHandlers;

    void Start()
    {
        InitializeDataHandlers();
        StartConnectWebApi();
        Debug.Log("StartConnectWebApi");
    }

    void OnDestroy()
    {
        GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", new List<string> { });
        GlobalVariable.hubConnection.StopAsync();
    }

    private void InitializeDataHandlers()
    {
        dataHandlers = new Dictionary<string, Action<DataSignalR>>
        {
            // Populate with handlers for different stations and tag IDs
            { "IE-F3-BLO06", HandleStationS1 },
            { "IE-F3-BLO01", HandleStationS2 },
            { "IE-F3-BLO02", HandleStationS3 }
        };
    }

    private async void StartConnectWebApi()
    {
        if (GlobalVariable.hubConnection == null)
        {
            GlobalVariable.hubConnection = new HubConnectionBuilder().WithUrl(GlobalVariable.url).Build();
            GlobalVariable.isConnecting = true;
        }

        GlobalVariable.hubConnection.On<string>("OnTagChanged", (str) =>
        {
            var data = JsonConvert.DeserializeObject<DataSignalR>(str);
            Debug.Log("$$" + str);
            if (data != null && dataHandlers.TryGetValue(data.StationId, out var handler))
            {
                handler(data);
            }
        });

        GlobalVariable.hubConnection.On<string>("LogInfoMessage", async (str) =>
        {
            if (str.Contains("Connected"))
            {
                UpdateTopics(GlobalVariable.subscribedTopics);
                GlobalVariable.isConnecting = false;
                GlobalVariable.serverConnected = true;
                var listInitialData = await GetBufferList();
                foreach (var data in listInitialData)
                {
                    if (dataHandlers.TryGetValue(data.StationId, out var handler))
                    {
                        handler(data);
                    }
                }
            }
        });

        try
        {
            await GlobalVariable.hubConnection.StartAsync().ContinueWith(task =>
            {
                if (task.IsFaulted)
                {
                    Debug.Log("Error opening the GlobalVariable.hubConnection: " + task.Exception.GetBaseException());
                    GlobalVariable.errorServerConnected = true;
                    GlobalVariable.isConnecting = false;
                }
            });
        }
        catch (Exception e)
        {
            Debug.Log(e);
            throw;
        }
    }

    public void PublishStationIndex(int index)
    {
        GlobalVariable.hubConnection.InvokeAsync("SelectStation", index);
    }

    public void UpdateTopics(List<string> topics)
    {
        GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", topics);
    }

    void HandleStationS1(DataSignalR data)
    {
        UpdateMachineStatus(data, listMachineStatusS1);
        UpdateIO(data, "S1", inputCheckS1, outputCheckS1);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO06, visionProcessingValuesS1);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO06, enableValuesS1, enableFrameS1);
        UpdateProductionData(data, GlobalVariable.productionDataBLO06, productionDataS1);
        UpdateChemicalDetection(data, "S1_FS_CURRENT_", ChemicalDetectionValue, ChemicalDetectionFrameValue);
        UpdateListError(data, "S1");
    }

    void HandleStationS2(DataSignalR data)
    {
        UpdateIO(data, "S2", inputCheckS2, outputCheckS2);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO01, visionProcessingValuesS2);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO01, enableValuesS2, enableFrameS2);
        UpdateProductionData(data, GlobalVariable.productionDataBLO01, productionDataS2);

    }

    void HandleStationS3(DataSignalR data)
    {
        UpdateIO(data, "S3", inputCheckS3, outputCheckS3);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO02, visionProcessingValuesS3);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO02, enableValuesS3, enableFrameS3);
        UpdateProductionData(data, GlobalVariable.productionDataBLO02, productionDataS3);

    }

    void UpdateIO(DataSignalR data, string stationPrefix, GameObject[] inputChecks, GameObject[] outputChecks)
    {
        if (data.TagId.Contains($"{stationPrefix}/in/"))
        {
            int index = int.Parse(data.TagId.Substring($"{stationPrefix}/in/".Length));
            bool value = data.TagValue == "1";
            inputChecks[index].SetActive(value);
        }
        if (data.TagId.Contains($"{stationPrefix}/out/"))
        {
            int index = int.Parse(data.TagId.Substring($"{stationPrefix}/out/".Length));
            bool value = data.TagValue == "1";
            outputChecks[index].SetActive(value);
        }
    }

    void UpdateVisionProcessing(DataSignalR data, List<string> visionProcessingTags, TMP_Text[] visionProcessingValues)
    {
        int index = visionProcessingTags.IndexOf(data.TagId);
        if (index >= 0)
        {
            visionProcessingValues[index].text = data.TagValue;
        }
    }

    void UpdateEnableValues(DataSignalR data, List<string> enableTags, TMP_Text[] enableValues, GameObject[] enableFrames)
    {
        int index = enableTags.IndexOf(data.TagId);
        if (index >= 0)
        {
            if (enableTags[index].Contains("DISABLE"))
            {
                bool isDisabled = data.TagValue == "1";
                enableValues[index].text = isDisabled ? "Nonuse" : "use";
                enableFrames[index].GetComponent<Image>().color = isDisabled ? new Color32(0xBC, 0xBC, 0xBC, 255) : Color.green;

            }
            else if (enableTags[index].Contains("Enable"))
            {
                bool isEnabled = data.TagValue == "1";
                enableValues[index].text = isEnabled ? "Use" : "Nonuse";
                enableFrames[index].GetComponent<Image>().color = isEnabled ? Color.green : new Color32(0xBC, 0xBC, 0xBC, 255);
            }

        }
    }

    void UpdateMachineStatus(DataSignalR data, GameObject[] listMachineStatus)
    {
        Color32[] colors = new Color32[]
        {
        new Color32(0xFF, 0x01, 0xA8, 0xD7), // case "0"
        Color.green,                         // case "1"
        Color.red,                           // case "2"
        new Color32(0xFF, 0xC0, 0x00, 0xFF), // case "3"
        new Color32(0xFF, 0x9A, 0x39, 0xFB), // case "4"
        Color.grey                           // case "5"
        };

        if (int.TryParse(data.TagValue, out int index) && index >= 0 && index < listMachineStatus.Length)
        {
            listMachineStatus[index].GetComponent<Image>().color = colors[index];
        }
    }


    void UpdateProductionData(DataSignalR data, List<string> productionDataTags, TMP_Text[] productionDataValues)
    {
        int index = productionDataTags.IndexOf(data.TagId);
        if (index >= 0)
        {
            productionDataValues[index].text = data.TagValue;
        }
    }

    void UpdateChemicalDetection(DataSignalR data, string prefix, TMP_Text[] chemicalValues, GameObject[] chemicalFrames)
    {
        if (data.TagId.StartsWith(prefix))
        {
            string remaining = data.TagId.Substring(prefix.Length);
            string[] parts = remaining.Split('_');
            string concatenated = string.Join("", parts);
            int index = int.Parse(concatenated);
            chemicalValues[index].text = data.TagValue;
            int value = int.Parse(data.TagValue);
            chemicalFrames[index].gameObject.GetComponent<Image>().color = (value > 20 && value < 70) ? Color.green : Color.red;

        }
    }

    void UpdateListError(DataSignalR data, string stationPrefix)
    {
        if (data.TagId == "errorStatus" && data.TagValue != "Wifi disconnected" &&
            !GlobalVariable.errorInfors.Any(x => x.errorName == data.TagValue))
        {
            Debug.Log(data.TagValue);
            var errorInfor = new ErrorInfor
            {
                errorName = data.TagValue,
                time = data.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy")
            };
            GlobalVariable.errorInfors.Add(errorInfor);
            UpdateStationErrorList(stationPrefix);
        }
        else if (data.TagId == "endErrorStatus")
        {
            GlobalVariable.errorInfors.RemoveAll(x => x.errorName == data.TagValue);
            UpdateStationErrorList(stationPrefix);
        }
    }

    void UpdateStationErrorList(string stationPrefix)
    {
        if (stationPrefix.Contains("S1"))
        {
            alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors1);
        }
        else if (stationPrefix.Contains("S2"))
        {
            alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors2);
        }
        else if (stationPrefix.Contains("S3"))
        {
            alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors3);
        }
    }

    public async Task GetBuffer(string tagId)
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
        var filteredList = tags.Where(data => data.TagId == tagId);
        foreach (var tag in filteredList)
        {
            if (tag.TagValue != "Wifi disconnected")
            {
                Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy"));
            }
        }
    }

    public async Task<List<DataSignalR>> GetBufferList()
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        return JsonConvert.DeserializeObject<List<DataSignalR>>(response) ?? new List<DataSignalR>();
    }
}
