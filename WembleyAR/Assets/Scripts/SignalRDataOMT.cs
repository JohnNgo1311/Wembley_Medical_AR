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
using Unity.VisualScripting;
using System.Xml.Serialization;
using System.Threading;
using System.Net.Http;

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
    public Slider[] Sliders;
    private Dictionary<string, Action<DataSignalR>> dataHandlers;
    private static HashSet<string> processedStrings = new HashSet<string>();
    // private bool isWantReconnect = false;
    Dictionary<string, DateTime> elementWithTimestamp = new Dictionary<string, DateTime>();

    //! Hàm Start chỉ chạy 1 lần duy nhất khi Run Scence 
    void Start()
    {
        Debug.Log("Chạy Start");
        IsInternetAvailable();
        StartConnectWebApi();
        InitializeDataHandlers();
    }

    void OnDestroy() //! OnDestroy được gọi khi instance bị destroy hoặc thoát scene
    {
        //   isWantReconnect = false;
        GlobalVariable.serverConnected = false;
        GlobalVariable.isConnecting = false;
        GlobalVariable.isInternetConnected = false;
        if (GlobalVariable.hubConnection != null)
        {
            GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", new List<string>() { });
            // Đảm bảo kết nối được ngắt khi đối tượng bị hủy
            GlobalVariable.hubConnection.StopAsync().ContinueWith(task =>
            {
                if (task.IsFaulted)
                {
                    Debug.LogError("There was an error opening the connection:" + task.Exception.GetBaseException());
                }
                else
                {
                    Debug.Log("Connection closed successfully.");
                }
            });
            GlobalVariable.hubConnection = null;

        }
    }

    private void InitializeDataHandlers()
    {
        dataHandlers = new Dictionary<string, Action<DataSignalR>>
         {   //? "IE-F3-BLO06" : key
             //? HandleStationS1 : hành động tương ứng  
             { "IE-F3-BLO06", HandleStationS1},
             { "IE-F3-BLO01", HandleStationS2 },
             { "IE-F3-BLO02", HandleStationS3 }
         };
    }
    private void Update()
    {
        if (GlobalVariable.hubConnection != null) Debug.Log("Connection State: " + GlobalVariable.hubConnection.State);
        string strSaved = "";

        GlobalVariable.hubConnection?.On<string>("OnTagChanged", (str) =>
                                {
                                    /* string lastCharacter = str.Substring(str.Length - 14); // Tách phần tử cuối cùng của chuỗi

                                     string remainingCharacters = str.Substring(0, str.Length - 14);*/

                                    if (processedStrings.Contains(str))
                                    {
                                        return;
                                    }
                                    else
                                    {
                                        processedStrings.Add(str);
                                        strSaved = str;
                                        elementWithTimestamp[strSaved] = DateTime.Now;
                                    };
                                    var data = JsonConvert.DeserializeObject<DataSignalR>(str);
                                    if (data != null && dataHandlers.TryGetValue(data.StationId, out var handler))
                                    {  //! Dựa vào key là StationId để thực hiên hàm tương ứng
                                        Debug.Log("OnTagChanged" + str);
                                        handler(data);
                                    }
                                }
                                );

        // Xóa phần tử quá hạn
        foreach (var item in elementWithTimestamp.Keys.ToList())
        {
            if ((DateTime.Now - elementWithTimestamp[item]).TotalMinutes > 1) // 1p TTL
            {
                elementWithTimestamp.Remove(item);
                processedStrings.Remove(item);
                Debug.Log("Remove: " + item);
            }
        }
    }


    private async void StartConnectWebApi()
    {
        // Bắt đầu kết nối nếu chưa kết nối

        GlobalVariable.hubConnection = new HubConnectionBuilder()
         .WithUrl(GlobalVariable.url)
         .WithAutomaticReconnect()
         .Build();
        Debug.Log("GlobalVariable.hubConnection created.");
        RegisterEvents();
        await StartConnectionAsync();


        // Đăng ký các sự kiện kết nối
        GlobalVariable.hubConnection.On<string>("LogInfoMessage", (str) =>
        {
            if (str.Contains("Connected"))
            {
                Debug.Log("Connected to server.");
                GlobalVariable.isConnecting = false;
                GlobalVariable.serverConnected = true;
            }
        });

        // Bắt đầu kết nối nếu chưa kết nối
        /* if (GlobalVariable.hubConnection != null && GlobalVariable.hubConnection.State == GlobalVariable.hubConnectionState.Disconnected)
         {
             await TryReconnectAsync();
         }*/
    }


    private void RegisterEvents()
    {
        GlobalVariable.hubConnection.Reconnected += async (connectionId) =>
        {
            Debug.Log($"Reconnected successfully: {connectionId}");
            await Task.CompletedTask;
        };

        GlobalVariable.hubConnection.Closed += async (error) =>
        {
            //Debug.LogError($"Connection closed: {error?.Message}");
            await StartConnectionAsync(); // Thử kết nối lại
        };

        GlobalVariable.hubConnection.Reconnecting += async (error) =>
        {
            Debug.LogWarning($"Reconnecting: {error?.Message}");
            await Task.CompletedTask;
        };
    }

    private async Task StartConnectionAsync()
    {

        try
        {
            Debug.Log("Attempting to start connection...");
            await GlobalVariable.hubConnection.StartAsync();
            Debug.Log("Connection started successfully.");
        }
        catch (HttpRequestException httpEx)
        {
            //  Debug.LogError($"HTTP Request Error: {httpEx.Message}");
            // Thử kết nối lại sau một khoảng thời gian
            await Task.Delay(TimeSpan.FromSeconds(2));
            await StartConnectionAsync();
        }
        catch (Exception ex)
        {
            if (ex.Message != "The HubConnection cannot be started if it is not in the Disconnected state")
            {
                // Debug.LogError($"Failed to start connection: {ex.Message}");
                // Thử kết nối lại sau một khoảng thời gian
                await Task.Delay(TimeSpan.FromSeconds(2));
                await StartConnectionAsync();
            }

        }
    }



    private async Task TryReconnectAsync()
    {
        while (!GlobalVariable.serverConnected)
        {
            if (IsInternetAvailable())
            {
                try
                {
                    Debug.Log("Attempting to reconnect...");
                    await GlobalVariable.hubConnection.StartAsync();
                    GlobalVariable.serverConnected = true;
                    GlobalVariable.isConnecting = false;
                    Debug.Log("Reconnected successfully.");
                }
                catch (Exception ex)
                {
                    Debug.LogError($"Failed to reconnect: {ex.Message}");
                    // Delay before retrying
                }
            }
            else
            {
                Debug.LogWarning("No internet connection. Waiting to retry...");
            }
        }
    }

    private bool IsInternetAvailable()
    {
        bool isConnected = Application.internetReachability != NetworkReachability.NotReachable;
        Debug.Log("Internet connection: " + isConnected);
        GlobalVariable.isInternetConnected = isConnected;
        return isConnected;
    }



    /* private async Task LoadInitialData()
     {
         // Gọi lại các dữ liệu ban đầu từ server
         var listInitialData = await GetBufferList();
         foreach (var data in listInitialData)
         {
             if (data != null && dataHandlers.TryGetValue(data.StationId, out var handler))
             {
                 if (!data.TagId.StartsWith("M1"))
                 {
                     handler(data);
                     if (dataHandlers.Any())
                     {
                         Debug.Log($"{dataHandlers.Count}  + {data.StationId}  + {data.TagId} + {data.TagValue}");
                     }
                 }
             }
         }
     }*/
    public void UpdateTopics(List<string> topics)
    {
        GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", topics);
    }

    async void HandleStationS1(DataSignalR data)
    {
        await UpdateIO(data, "S1", inputCheckS1, outputCheckS1);
        UpdateProductionData(data, GlobalVariable.productionDataBLO06, productionDataS1);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO06, enableValuesS1, enableFrameS1);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO06, visionProcessingValuesS1);
        UpdateMachineStatus(data, listMachineStatusS1);
        UpdateConnectionStatus(data, connectionStatusFrameS1, connectionStatusValueS1);
        UpdateChemicalDetection(data, "S1_FS_CURRENT_", ChemicalDetectionValue, ChemicalDetectionFrameValue);
        UpdateListError(data, "S1");
    }

    async void HandleStationS2(DataSignalR data)
    {
        await UpdateIO(data, "S2", inputCheckS2, outputCheckS2);
        UpdateProductionData(data, GlobalVariable.productionDataBLO01, productionDataS2);
        UpdateMachineStatus(data, listMachineStatusS2);
        UpdateConnectionStatus(data, connectionStatusFrameS2, connectionStatusValueS2);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO01, visionProcessingValuesS2);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO01, enableValuesS2, enableFrameS2);
        UpdateListError(data, "S2");
        UpdateSetting(data, GlobalVariable.settingValuesBLO01, settingValuesS2);

    }

    async void HandleStationS3(DataSignalR data)
    {
        await UpdateIO(data, "S3", inputCheckS3, outputCheckS3);
        UpdateProductionData(data, GlobalVariable.productionDataBLO02, productionDataS3);
        UpdateSetting(data, GlobalVariable.settingValuesBLO02, settingValuesS3);
        UpdateMachineStatus(data, listMachineStatusS3);
        UpdateConnectionStatus(data, connectionStatusFrameS3, connectionStatusValueS3);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO02, visionProcessingValuesS3);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO02, enableValuesS3, enableFrameS3);
        UpdateListError(data, "S3");

    }

    async Task UpdateIO(DataSignalR data, string stationPrefix, GameObject[] inputChecks, GameObject[] outputChecks)
    {
        await Task.Yield();

        string tagId = data.TagId;
        int prefixLengthIn = stationPrefix.Length + 4;  // Độ dài của stationPrefix + "/in/"
        int prefixLengthOut = stationPrefix.Length + 5; // Độ dài của stationPrefix + "/out/"
        bool value = data.TagValue == "1";

        if (tagId.Length > prefixLengthIn && tagId[prefixLengthIn - 4] == '/' && tagId[prefixLengthIn - 3] == 'i' && tagId[prefixLengthIn - 2] == 'n' && tagId[prefixLengthIn - 1] == '/')
        {
            if (int.TryParse(tagId.AsSpan(prefixLengthIn), out int index) && index >= 0 && index < inputChecks.Length)
            {
                inputChecks[index].SetActive(value);
            }
        }
        else if (tagId.Length > prefixLengthOut && tagId[prefixLengthOut - 5] == '/' && tagId[prefixLengthOut - 4] == 'o' && tagId[prefixLengthOut - 3] == 'u' && tagId[prefixLengthOut - 2] == 't' && tagId[prefixLengthOut - 1] == '/')
        {
            if (int.TryParse(tagId.AsSpan(prefixLengthOut), out int index) && index >= 0 && index < outputChecks.Length)
            {
                outputChecks[index].SetActive(value);
            }
        }
    }



    void UpdateVisionProcessing(DataSignalR data, List<string> visionProcessingTags, TMP_Text[] visionProcessingValues)
    {
        if (visionProcessingTags.Contains(data.TagId))
        {
            // Debug.Log("Vision Processing:" + data.TagId + "/" + data.TagValue);
            int index = visionProcessingTags.IndexOf(data.TagId);
            if (index >= 0)
            {
                visionProcessingValues[index].text = data.TagValue;
                //  Debug.Log(visionProcessingValues[index].text);
            }
        }

    }
    void UpdateSetting(DataSignalR data, List<string> settingValueTags, TMP_Text[] settingValues)
    {
        if (settingValueTags.Contains(data.TagId))
        {
            // Debug.Log("Setting:" + data.TagId + ":" + data.TagValue);
            int index = settingValueTags.IndexOf(data.TagId);
            if (index >= 0)
            {
                settingValues[index].text = data.TagValue;
            }

        }

    }
    void UpdateEnableValues(DataSignalR data, List<string> enableTags, TMP_Text[] enableValues, GameObject[] enableFrames)
    {
        if (enableTags.Contains(data.TagId))
        {
            //    Debug.Log("Enable:" + "" + data.StationId + "+" + data.TagId + "+" + data.TagValue);

            int index = enableTags.IndexOf(data.TagId);
            if (index >= 0)
            {
                bool isEnabled = data.TagValue == "1";
                enableValues[index].text = isEnabled ? "Use" : "Unuse";
                enableFrames[index].GetComponent<Image>().color = isEnabled ? Color.green : GlobalVariable.colors[3];
            }

        }
    }

    void UpdateMachineStatus(DataSignalR data, GameObject[] listMachineStatus)
    {
        if (data.TagId == "machineStatus")
        {
            // Debug.Log(data.StationId + "MachineStatus: " + data.TagValue);
            Color32[] colors = new Color32[]
             {
               new Color32(0xFF, 0x01, 0xA8, 0xD7), // case "0" ==> Hồng sáng
               Color.green,                         // case "1" ==> xanh
               new Color32(0xFF, 0xC0, 0x00, 0xFF), // case "2"  ==> vàng Cam
               Color.red,                           // case "3" ==> Đỏ
               new Color32(0xFF, 0x9A, 0x39, 0xFB), // case "4" ==> Cam nhạt
               Color.yellow                         // case "5" ==> Vàng
             };

            int value = int.Parse(data.TagValue);

            // Reset all statuses to grey using a loop
            for (int i = 0; i < listMachineStatus.Length; i++)
            {
                listMachineStatus[i].GetComponent<Image>().color = GlobalVariable.colors[3]; //xám
            }

            // Set the specific status based on the value
            if (value >= 0 && value < listMachineStatus.Length)
            {
                listMachineStatus[value].GetComponent<Image>().color = colors[value];
            }

            if (data.TagValue == null)
            {
                listMachineStatus[value].GetComponent<Image>().color = colors[5];
            }

        }
    }


    void UpdateConnectionStatus(DataSignalR data, GameObject[] connectStatusFrames, TMP_Text[] connectStatuValues)
    {
        if (data.TagId != "isConnectPLC") return;

        bool isPLCConnected = int.Parse(data.TagValue) == 1;
        Debug.Log("PLC Connection: " + isPLCConnected);

        // Update PLC connection status
        connectStatusFrames[0].GetComponent<Image>().color = isPLCConnected ? Color.green : GlobalVariable.colors[3];
        connectStatuValues[0].text = isPLCConnected ? "PLC Connection: Connected" : "PLC Connection: Disconnected";

        // Determine server connection status
        Color serverColor;
        string serverStatus;

        if (!GlobalVariable.serverConnected)
        {
            serverColor = GlobalVariable.colors[3];
            serverStatus = "Server Connection: Disconnected";
        }
        else if (GlobalVariable.isConnecting)
        {
            serverColor = Color.blue;
            serverStatus = "Server Connection: Connecting";
        }
        else if (GlobalVariable.serverConnected)
        {
            serverColor = Color.green;
            serverStatus = "Server Connection: Connected";
        }
        else
        {
            serverColor = GlobalVariable.colors[3];
            serverStatus = "Server Connection: Disconnected";
        }

        // Update server connection status
        connectStatusFrames[1].GetComponent<Image>().color = serverColor;
        connectStatuValues[1].text = serverStatus;
    }



    void UpdateProductionData(DataSignalR data, List<string> productionDataTags, TMP_Text[] productionDataValues)
    {
        int index = productionDataTags.IndexOf(data.TagId);
        if (index < 0) return;
        double parsedValue = double.Parse(data.TagValue);
        switch (data.TagId)
        {
            case "EFF":
                double effectiveValue = parsedValue;
                productionDataValues[index].text = Math.Round(effectiveValue, 2).ToString(); ;
                Sliders[0].GetComponent<Slider>().value = (float)effectiveValue;
                break;
            case "OEE":
                double oEEValue = parsedValue * 100;
                productionDataValues[index].text = Math.Round(oEEValue, 2).ToString();
                Sliders[1].GetComponent<Slider>().value = (float)(oEEValue / 100);
                break;
            case "P":
                double PValue = parsedValue * 100;
                productionDataValues[index].text = Math.Round(PValue, 2).ToString();
                Sliders[2].GetComponent<Slider>().value = (float)(PValue / 100);
                break;
            case "A":
                double AValue = parsedValue * 100;
                productionDataValues[index].text = Math.Round(AValue, 2).ToString();
                Sliders[3].GetComponent<Slider>().value = (float)(AValue / 100);
                break;
            case "Q":
                double QValue = (float)parsedValue * 100;
                productionDataValues[index].text = Math.Round(QValue, 2).ToString();
                Sliders[4].GetComponent<Slider>().value = (float)(QValue / 100);
                break;
            default:
                productionDataValues[index].text = parsedValue.ToString();
                break;
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
            chemicalFrames[index].gameObject.GetComponent<Image>().color = (value > 17 && value < 30) ? Color.green : Color.red;
            //  Debug.Log("ChemicalDetection: " + data.TagId + " " + data.TagValue);
        }
    }

    void UpdateListError(DataSignalR data, string stationPrefix)
    {
        if (data.TagId == "errorStatus" && data.TagValue != "Wifi disconnected")
        {
            var errorInfor = new ErrorInfor
            {
                errorName = data.TagValue,
                time = data.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"),
            };

            List<ErrorInfor> errorList = null;

            switch (stationPrefix)
            {
                case "S1":
                    errorList = GlobalVariable.errorInfors1;
                    break;
                case "S2":
                    errorList = GlobalVariable.errorInfors2;
                    break;
                case "S3":
                    errorList = GlobalVariable.errorInfors3;
                    break;
            }

            if (errorList != null)
            {
                errorList.Add(errorInfor);
                UpdateStationErrorList(stationPrefix);
            }
        }
        else if (data.TagId == "endErrorStatus")
        {
            List<ErrorInfor> errorList = null;

            switch (stationPrefix)
            {
                case "S1":
                    errorList = GlobalVariable.errorInfors1;
                    break;
                case "S2":
                    errorList = GlobalVariable.errorInfors2;
                    break;
                case "S3":
                    errorList = GlobalVariable.errorInfors3;
                    break;
            }

            if (errorList != null)
            {
                errorList.RemoveAll(x => x.errorName == data.TagValue);
                UpdateStationErrorList(stationPrefix);
            }
        }
    }


    void UpdateStationErrorList(string stationPrefix)
    {
        if (stationPrefix == "S1")
        {
            alarmScriptS1.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors1, "S1");
        }
        else if (stationPrefix == "S2")
        {
            alarmScriptS2.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors2, "S2");
        }
        else if (stationPrefix == "S3")
        {
            alarmScriptS3.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors3, "S3");
        }
    }

    public async Task GetBuffer(string tagId, string stationIndex)
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
        var filteredList = tags.Where(data => data.TagId == tagId && data.TagValue != "Wifi disconnected");

        switch (stationIndex)
        {
            case "S1":
                GlobalVariable.errorInfors1.Clear();
                foreach (var tag in filteredList)
                {
                    // Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                    var errorInfor1 = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy") };
                    GlobalVariable.errorInfors1.Add(errorInfor1);
                }
                break;

            case "S2":
                GlobalVariable.errorInfors2.Clear();
                foreach (var tag in filteredList)
                {
                    //  Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                    var errorInfor2 = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy") };
                    GlobalVariable.errorInfors2.Add(errorInfor2);
                }
                break;

            case "S3":
                GlobalVariable.errorInfors3.Clear();
                foreach (var tag in filteredList)
                {
                    // Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                    var errorInfor3 = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy") };
                    GlobalVariable.errorInfors3.Add(errorInfor3);
                }
                break;
        }
    }


    /* public async Task<List<DataSignalR>> GetBufferListSpecificStation(string stationIdSpecific)
     {
         var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
         var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
         var filteredList = tags.Where(data => (data.TagId == "errorStatus") && (data.TagValue != "Wifi disconnected") && data.StationId == stationIdSpecific);
         return tags;
     }*/


    /* public async Task<List<DataSignalR>> GetBufferList()
     {
         var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
         var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
         // Debug.Log("GetBufferList" + tags.Count);
         var filteredList1 = tags.Where(data => (data.TagId == "errorStatus") && (data.TagValue != "Wifi disconnected") && data.StationId == "IE-F3-BLO06");
         var filteredList2 = tags.Where(data => (data.TagId == "errorStatus") && (data.TagValue != "Wifi disconnected") && data.StationId == "IE-F3-BLO01");
         var filteredList3 = tags.Where(data => (data.TagId == "errorStatus") && (data.TagValue != "Wifi disconnected") && data.StationId == "IE-F3-BLO02");

         if (filteredList1.Any())
         {

             GlobalVariable.errorInfors1.Clear();
             foreach (var tag in filteredList1)
             {
                 //  Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                 var errorInfor1 = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy") };
                 GlobalVariable.errorInfors1.Add(errorInfor1);
                 await alarmScriptS1.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors1, "S1");
             }
         }

         if (filteredList2.Any())
         {

             GlobalVariable.errorInfors2.Clear();
             foreach (var tag in filteredList2)
             {
                 // Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                 var errorInfor2 = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy") };
                 GlobalVariable.errorInfors2.Add(errorInfor2);
                 await alarmScriptS2.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors2, "S2");

             }
         }
         if (filteredList3.Any())
         {

             GlobalVariable.errorInfors3.Clear();
             foreach (var tag in filteredList3)
             {
                 //  Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                 var errorInfor3 = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy") };
                 GlobalVariable.errorInfors3.Add(errorInfor3);
                 await alarmScriptS3.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors3, "S3");

             }
         }

         if (tags is null) return new List<DataSignalR>();
         return tags;
     }*/

}
