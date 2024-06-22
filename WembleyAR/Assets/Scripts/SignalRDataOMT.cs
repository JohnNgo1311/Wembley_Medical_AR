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
    public GameObject alarmScriptS1;
    public GameObject alarmScriptS2;
    public GameObject alarmScriptS3;

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
    public GameObject[] listMachineStatusS2;
    public GameObject[] listMachineStatusS3;

    public TMP_Text[] connectionStatusValueS1;
    public TMP_Text[] connectionStatusValueS2;
    public TMP_Text[] connectionStatusValueS3;
    public GameObject[] connectionStatusFrameS1;
    public GameObject[] connectionStatusFrameS2;
    public GameObject[] connectionStatusFrameS3;
    public TMP_Text[] settingValuesS2;
    public TMP_Text[] settingValuesS3;

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
                /*   foreach (var data in listInitialData)
                   {
                       UpdateMachineStatus(data, listMachineStatusS1);
                       UpdateListError(data, "S1");
                       UpdateConnectionStatus(data, connectionStatusFrameS1, connectionStatusValueS1);
                       UpdateIO(data, "S1", inputCheckS1, outputCheckS1);
                       UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO06, visionProcessingValuesS1);
                       UpdateEnableValues(data, GlobalVariable.enableStationBLO06, enableValuesS1, enableFrameS1);
                       UpdateProductionData(data, GlobalVariable.productionDataBLO06, productionDataS1);
                       UpdateChemicalDetection(data, "S1_FS_CURRENT_", ChemicalDetectionValue, ChemicalDetectionFrameValue);

                       UpdateMachineStatus(data, listMachineStatusS2);
                       UpdateConnectionStatus(data, connectionStatusFrameS2, connectionStatusValueS2);
                       UpdateListError(data, "S2");
                       UpdateIO(data, "S2", inputCheckS2, outputCheckS2);
                       UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO01, visionProcessingValuesS2);
                       UpdateEnableValues(data, GlobalVariable.enableStationBLO01, enableValuesS2, enableFrameS2);
                       UpdateProductionData(data, GlobalVariable.productionDataBLO01, productionDataS2);
                       UpdateSetting(data, "S2", GlobalVariable.settingValuesBLO01, settingValuesS2);

                       UpdateMachineStatus(data, listMachineStatusS3);
                       UpdateConnectionStatus(data, connectionStatusFrameS3, connectionStatusValueS3);
                       UpdateListError(data, "S3");
                       UpdateSetting(data, "S3", GlobalVariable.settingValuesBLO02, settingValuesS3);
                       UpdateIO(data, "S3", inputCheckS3, outputCheckS3);
                       UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO02, visionProcessingValuesS3);
                       UpdateEnableValues(data, GlobalVariable.enableStationBLO02, enableValuesS3, enableFrameS3);
                       UpdateProductionData(data, GlobalVariable.productionDataBLO02, productionDataS3);
                       // if (dataHandlers.TryGetValue(data.StationId, out var handler))
                       // {
                       //    handler(data);
                       // }
                   }*/
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
        UpdateListError(data, "S1");
        UpdateConnectionStatus(data, connectionStatusFrameS1, connectionStatusValueS1);
        UpdateIO(data, "S1", inputCheckS1, outputCheckS1);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO06, visionProcessingValuesS1);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO06, enableValuesS1, enableFrameS1);
        UpdateProductionData(data, GlobalVariable.productionDataBLO06, productionDataS1);
        UpdateChemicalDetection(data, "S1_FS_CURRENT_", ChemicalDetectionValue, ChemicalDetectionFrameValue);

    }

    void HandleStationS2(DataSignalR data)
    {
        UpdateMachineStatus(data, listMachineStatusS2);
        UpdateConnectionStatus(data, connectionStatusFrameS2, connectionStatusValueS2);
        UpdateListError(data, "S2");
        UpdateIO(data, "S2", inputCheckS2, outputCheckS2);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO01, visionProcessingValuesS2);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO01, enableValuesS2, enableFrameS2);
        UpdateProductionData(data, GlobalVariable.productionDataBLO01, productionDataS2);
        UpdateSetting(data, "S2", GlobalVariable.settingValuesBLO01, settingValuesS2);
    }

    void HandleStationS3(DataSignalR data)
    {
        UpdateMachineStatus(data, listMachineStatusS3);
        UpdateConnectionStatus(data, connectionStatusFrameS3, connectionStatusValueS3);
        UpdateListError(data, "S3");
        UpdateSetting(data, "S3", GlobalVariable.settingValuesBLO02, settingValuesS3);
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
    void UpdateSetting(DataSignalR data, string stationIndex, List<string> settingValueTags, TMP_Text[] settingValues)
    {
        if (data.TagId.Contains(stationIndex))
        {
            int index = settingValueTags.IndexOf(data.TagId);
            if (index >= 0)
            {
                settingValues[index].text = data.TagValue;
            }
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
            foreach (var status in listMachineStatus)
            {
                status.GetComponent<Image>().color = colors[5];
            }
            listMachineStatus[index].GetComponent<Image>().color = colors[index];
        }
    }

    void UpdateConnectionStatus(DataSignalR data, GameObject[] connectStatusFrames, TMP_Text[] connectStatuValues)
    {
        Color32[] colors = new Color32[]
        {
        Color.green,
        Color.grey,
        new Color32(2, 192, 245, 255)
        };

        if (data.TagId == "isConnectPLC")
        {
            bool isConnected = int.Parse(data.TagValue) == 1;
            connectStatusFrames[1].GetComponent<Image>().color = isConnected ? colors[0] : colors[1];
            connectStatuValues[1].text = isConnected ? "PLC Connection: Connected" : "PLC Connection: Disconnected";
        }

        if (GlobalVariable.serverConnected && !GlobalVariable.isConnecting && !GlobalVariable.errorServerConnected)
        {
            connectStatusFrames[0].GetComponent<Image>().color = colors[0];
            connectStatuValues[0].text = "Server Connection: Connected";
        }
        else if (GlobalVariable.errorServerConnected && !GlobalVariable.isConnecting && !GlobalVariable.serverConnected)
        {
            connectStatusFrames[1].GetComponent<Image>().color = colors[1];
            connectStatuValues[1].text = "Server Connection: Disconnected";
        }
        else if (GlobalVariable.isConnecting && !GlobalVariable.serverConnected && !GlobalVariable.errorServerConnected)
        {
            connectStatusFrames[1].GetComponent<Image>().color = colors[2];
            connectStatuValues[1].text = "Server Connection: Connecting";
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
            alarmScriptS1.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors1);
        }
        else if (stationPrefix.Contains("S2"))
        {
            alarmScriptS1.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors2);
        }
        else if (stationPrefix.Contains("S3"))
        {
            alarmScriptS1.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors3);
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
        Debug.Log(response);
        return JsonConvert.DeserializeObject<List<DataSignalR>>(response) ?? new List<DataSignalR>();

    }
}
