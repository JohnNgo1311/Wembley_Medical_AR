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
    private static HashSet<string> processedStrings = new HashSet<string>();

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
        if (GlobalVariable.hubConnection != null)
        {
            GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", new List<string>() { });
            GlobalVariable.hubConnection.StopAsync();
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
        string strSaved = "";

        if (GlobalVariable.hubConnection != null)
        {
            GlobalVariable.hubConnection.On<string>("OnTagChanged", (str) =>
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
        }

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
    private void StartConnectWebApi()
    {
        //? Kết nối với server
        if (GlobalVariable.hubConnection == null || GlobalVariable.hubConnection.State == HubConnectionState.Disconnected)
        {
            GlobalVariable.hubConnection = new HubConnectionBuilder().WithUrl(GlobalVariable.url).WithAutomaticReconnect().Build();
            Debug.Log("CreateHubConnection");
            //  GlobalVariable.isConnecting = true;
        }
        //? Kết nối thành công
        GlobalVariable.hubConnection.On<string>("LogInfoMessage", (str) =>
        {
            if (str.Contains("Connected"))
            {
                Debug.Log("Connected");
                GlobalVariable.isConnecting = false;
                GlobalVariable.serverConnected = true;
                GlobalVariable.errorServerConnected = false;
            }
        });


        GlobalVariable.hubConnection.Closed += (error) =>
         {
             Debug.Log($"Connection closed: {error?.Message}");
             GlobalVariable.serverConnected = false;
             GlobalVariable.errorServerConnected = true;
             GlobalVariable.isConnecting = false;
             TryReconnectAsync();
             return Task.CompletedTask;
         };
        GlobalVariable.hubConnection.Reconnecting += (error) =>
        {
            Debug.Log($"Reconnecting: {error?.Message}");
            GlobalVariable.isConnecting = true;
            GlobalVariable.serverConnected = false;
            GlobalVariable.errorServerConnected = false;
            return Task.CompletedTask;
        };
        GlobalVariable.hubConnection.Reconnected += (connectionId) =>
        {
            Debug.Log($"Reconnected: {connectionId}");
            GlobalVariable.isConnecting = false;
            GlobalVariable.errorServerConnected = false;
            GlobalVariable.serverConnected = true;
            // Gọi hàm tải lại dữ liệu khi kết nối lại thành công
            // LoadInitialData().Wait();
            // TryReconnectAsync();
            return Task.CompletedTask;
        };

        // Thử khởi động kết nối
        try
        {
            while (!GlobalVariable.isInternetConnected)
            {
                IsInternetAvailable();
            }
            if (GlobalVariable.isInternetConnected)
            {
                GlobalVariable.hubConnection.StartAsync().ContinueWith(task =>
                                        {
                                            if (task.IsFaulted)
                                            {
                                                Debug.Log("There was an error opening the GlobalVariable.hubConnection:" + task.Exception.GetBaseException());
                                                GlobalVariable.errorServerConnected = true;
                                                GlobalVariable.serverConnected = false;
                                                GlobalVariable.isConnecting = false;
                                            }
                                            else if (task.IsCompletedSuccessfully)
                                            {
                                            }
                                        });
            }
        }
        catch (Exception e)
        {
            Debug.Log("Error: " + e.Message);
            throw;
        }
    }
    private void TryReconnectAsync()
    {
        while (!GlobalVariable.serverConnected)
        {
            if (IsInternetAvailable())
            {
                Debug.Log("Reconnecting...");
                try
                {
                    StartConnectWebApi();
                }
                catch (Exception ex)
                {
                    Debug.LogError($"Failed to reconnect: {ex.Message}");
                }
            }
            else
            {
                Debug.Log("No internet connection. Waiting to retry...");
            }

        }
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
    private bool IsInternetAvailable()
    {
        bool isConnected = Application.internetReachability != NetworkReachability.NotReachable;
        Debug.Log("Internet connection: " + isConnected);
        GlobalVariable.isInternetConnected = isConnected;
        return isConnected;
    }
    void HandleStationS1(DataSignalR data)
    {
        UpdateIO(data, "S1", inputCheckS1, outputCheckS1);
        UpdateProductionData(data, GlobalVariable.productionDataBLO06, productionDataS1);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO06, enableValuesS1, enableFrameS1);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO06, visionProcessingValuesS1);
        UpdateMachineStatus(data, listMachineStatusS1);
        UpdateConnectionStatus(data, connectionStatusFrameS1, connectionStatusValueS1);
        UpdateChemicalDetection(data, "S1_FS_CURRENT_", ChemicalDetectionValue, ChemicalDetectionFrameValue);
        UpdateListError(data, "S1");
    }

    void HandleStationS2(DataSignalR data)
    {
        UpdateIO(data, "S2", inputCheckS2, outputCheckS2);
        UpdateProductionData(data, GlobalVariable.productionDataBLO01, productionDataS2);
        UpdateMachineStatus(data, listMachineStatusS2);
        UpdateConnectionStatus(data, connectionStatusFrameS2, connectionStatusValueS2);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO01, visionProcessingValuesS2);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO01, enableValuesS2, enableFrameS2);
        UpdateListError(data, "S2");
        UpdateSetting(data, GlobalVariable.settingValuesBLO01, settingValuesS2);

    }

    void HandleStationS3(DataSignalR data)
    {
        UpdateIO(data, "S3", inputCheckS3, outputCheckS3);
        UpdateProductionData(data, GlobalVariable.productionDataBLO02, productionDataS3);
        UpdateSetting(data, GlobalVariable.settingValuesBLO02, settingValuesS3);
        UpdateMachineStatus(data, listMachineStatusS3);
        UpdateConnectionStatus(data, connectionStatusFrameS3, connectionStatusValueS3);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO02, visionProcessingValuesS3);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO02, enableValuesS3, enableFrameS3);
        UpdateListError(data, "S3");

    }

    void UpdateIO(DataSignalR data, string stationPrefix, GameObject[] inputChecks, GameObject[] outputChecks)
    {
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

        if (GlobalVariable.errorServerConnected)
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
                GlobalVariable.effective = parsedValue;
                productionDataValues[index].text = data.TagValue;
                break;

            case "OEE":
                GlobalVariable.oEEValue = parsedValue;
                productionDataValues[index].text = (parsedValue * 100).ToString("0.00");
                break;

            case "P":
            case "A":
            case "Q":
                productionDataValues[index].text = (parsedValue * 100).ToString("0.00");
                break;
            default:
                productionDataValues[index].text = data.TagValue;
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
        //    &&
        //  !GlobalVariable.errorInfors.Any(x => x.errorName == data.TagValue)

        {
            //   Debug.Log(data.TagValue);
            if (stationPrefix == "S1")
            {
                var errorInfor = new ErrorInfor
                {
                    errorName = data.TagValue,
                    time = data.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"),
                };
                //  Debug.Log("Error S1");
                GlobalVariable.errorInfors1.Add(errorInfor);
                UpdateStationErrorList("S1");

            }
            else if (stationPrefix == "S2")
            {
                var errorInfor = new ErrorInfor
                {
                    errorName = data.TagValue,
                    time = data.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"),
                };
                //  Debug.Log("Error S2");

                GlobalVariable.errorInfors2.Add(errorInfor);
                UpdateStationErrorList("S2");

            }
            else if (stationPrefix == "S3")
            {
                var errorInfor = new ErrorInfor
                {
                    errorName = data.TagValue,
                    time = data.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"),
                };
                // Debug.Log("Error S3");
                GlobalVariable.errorInfors3.Add(errorInfor);
                // Debug.Log("Error: " + data.TagValue + " at " + data.TimeStamp?.ToString("HH:mm:ss dd/MM/yyyy"));
                UpdateStationErrorList("S3");

            }
        }
        else if (data.TagId == "endErrorStatus")
        {
            if (stationPrefix.Contains("S1"))
            {
                //    Debug.Log("End Error S1");
                GlobalVariable.errorInfors1.RemoveAll(x => x.errorName == data.TagValue); // xóa những lỗi nào có giá trị là data.TagValue
                UpdateStationErrorList(stationPrefix);

            }
            else if (stationPrefix.Contains("S2"))
            {
                //  Debug.Log("End Error S2");
                GlobalVariable.errorInfors2.RemoveAll(x => x.errorName == data.TagValue); // xóa những lỗi nào có giá trị là data.TagValue
            }
            else if (stationPrefix.Contains("S3"))
            {
                //   Debug.Log("End Error S3");
                GlobalVariable.errorInfors3.RemoveAll(x => x.errorName == data.TagValue); // xóa những lỗi nào có giá trị là data.TagValue
            }
        }
    }

    void UpdateStationErrorList(string stationPrefix)
    {
        if (stationPrefix == "S1")
        {
            alarmScriptS1.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors1, "S1");
        }
        else if (stationPrefix == "S2")
        {
            alarmScriptS2.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors2, "S2");
        }
        else if (stationPrefix == "S3")
        {
            alarmScriptS3.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors3, "S3");
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
