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
    // public GameObject alarmScript;
    public GameObject[] inputCheckS1;
    public GameObject[] outputCheckS1;
    public GameObject[] inputCheckS2;
    public GameObject[] outputCheckS2;
    public GameObject[] inputCheckS3;
    public GameObject[] outputCheckS3;

    public TMP_Text[] productionDataS1;
    // public TMP_Text[] productionDataS2;
    //  public TMP_Text[] productionDataS3;


    /*public TMP_Text heatingTemp;
    public TMP_Text operationTimeRaw;
    public TMP_Text goodCap;
    public TMP_Text badCap;
    public TMP_Text TotalTray;
    public TMP_Text TotalProducts;
    public TMP_Text Efficiency;*/


    /*public TMP_Text totalTubes;
    public TMP_Text goodTubes;
    public TMP_Text badTubes;
    public TMP_Text StyrofoamTrays;*/

    public TMP_Text[] enableValuesS1;
    public TMP_Text[] visionProcessingValuesS1;
    public GameObject[] enableFrameS1;
    //public TMP_Text[] enableValuesS2;
    //public TMP_Text[] visionProcessingValuesS2;
    //!
    // public GameObject[] enableFrameS2;
    //public TMP_Text[] enableValuesS3;

    // public TMP_Text[] visionProcessingValuesS3;
    // public GameObject[] enableFrameS3;
    //!
    /* public TMP_Text drying1EnableValue;
     public TMP_Text drying2EnableValue;

     public TMP_Text capRubberEnableValue;

     public TMP_Text capNonRubberEnableValue;
     public TMP_Text RobotArmEnableValue;*/

    /* public GameObject drying1EnableFrame;
     public GameObject drying2EnableFrame;

     public GameObject capRubberEnableFrame;

     public GameObject capNonRubberEnableFrame;
     public GameObject RobotArmEnableFrame;*/


    public TMP_Text[] ChemicalDetectionValue;
    public GameObject[] ChemicalDetectionFrameValue;


    void Start()
    {   //! Kết nối đến server
        StartConnectWebApi();
        Debug.Log("StartConnectWebApi");
    }

    void OnDestroy()
    {
        GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", new List<string>() { });
        GlobalVariable.hubConnection.StopAsync();
        //? StopAsync là ngắt kết nối server

    }

    private async void StartConnectWebApi()
    {

        if (GlobalVariable.hubConnection == null)
        {
            //! Tạo kết nối đến server, gán Url rồi build
            GlobalVariable.hubConnection = new HubConnectionBuilder().WithUrl(GlobalVariable.url)
            // .WithAutomaticReconnect()
            .Build();
            //? hàm Build là để build Hubconnection thôi, không phải kết nối đến server
            GlobalVariable.isConnecting = true;
        }

        GlobalVariable.hubConnection.On<string>("OnTagChanged", (str) =>
        { //?Đăng ký sẵn đến Topic OnTagChanged,Topic này sẽ chứa giá trị kiểu dữ liệu String mà trên server quy định sau khi thực hiện hàm nào đó
          //? Chỉ việc đăng ký sẵn, khi Server thực hiện xong hàm nào đó, rồi return dữ liệu cho topic "OnTagChanged" thì phần xử lý phía dưới sẽ chạy

            DataSignalR data = JsonConvert.DeserializeObject<DataSignalR>(str);
            Debug.Log("$$" + str);
            if (data != null)
            {
                UpdateData(data);
            }
        });

        //?Đăng ký sẵn đến Topic LogInfoMessage,Topic này sẽ chứa giá trị kiểu dữ liệu String mà trên server quy định sau khi thực hiện hàm nào đó
        GlobalVariable.hubConnection.On<string>("LogInfoMessage", async (str) =>
        {
            if (str.Contains("Connected"))
            {
                UpdateTopics(GlobalVariable.subscribedTopics); //? Đăng ký đến topic nào luôn luôn phải đăng ký là error và errorStatus
                GlobalVariable.isConnecting = false;
                GlobalVariable.serverConnected = true;
                //string a = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
                var listInitialData = await GetBufferList();
                //? Khi connect Thành công thì GetBufferList để lấy các dữ liệu lần gần nhất được retain

                foreach (var data in listInitialData)
                {
                    UpdateData(data);
                }
                //   await GetBuffer("errorStatus");
                //   await alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors);
            }
        });

        try
        {
            await GlobalVariable.hubConnection.StartAsync().ContinueWith(task =>
            {  //? Hàm StartAsync để kết nối lên server
               //? ContinueWith để khi hoàn thành hàm StartAsync thì tiếp tục xử lý phía dưới, trong trường hợp này là để xử lý xem khi connect được và ko được
                if (task.IsFaulted)
                {
                    Debug.Log("There was an error opening the GlobalVariable.hubConnection:" + task.Exception.GetBaseException());
                    GlobalVariable.errorServerConnected = true;
                    GlobalVariable.isConnecting = false;
                }
                if (task.IsCompletedSuccessfully)
                {
                    // GlobalVariable.isConnecting = false;
                    // GlobalVariable.serverConnected = true;
                    // GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
                    // UpdateTopics(GlobalVariable.subscribedTopics);
                }

            });
        }
        catch (Exception e)
        {
            Debug.Log(e);
            throw;
        }
        // GlobalVariable.hubConnection.Reconnecting += (exception) =>
        //     {

        //         if (exception != null)
        //         {
        //             Debug.Log("There was an error opening the GlobalVariable.hubConnection:" + exception.GetBaseException());
        //             GlobalVariable.errorServerConnected = true;
        //             GlobalVariable.isConnecting = false;
        //         }

        //         GlobalVariable.isConnecting = true;
        //         return Task.CompletedTask;
        //     };

        // GlobalVariable.hubConnection.Reconnected += (ConnectionId) =>
        // {
        //     GlobalVariable.isConnecting = false;
        //     GlobalVariable.serverConnected = true;
        //     return Task.CompletedTask;
        // };


    }

    public void PublishStationIndex(int index)
    {
        GlobalVariable.hubConnection.InvokeAsync("SelectStation", index);
        //? Gọi hàm SelectStation trên Backend để phân luồng đọc trạm nào 


    }
    public void UpdateTopics(List<string> topics)
    {
        GlobalVariable.hubConnection.InvokeAsync("UpdateTopics", topics);
        //? Gọi hàm UpdateTopics trên Server để Server subscribe đến broker, khi đó dữ liệu sẽ đi về trên AR app
    }
    void UpdateData(DataSignalR data)
    {   //! S1
        if (data.StationId == "IE-F3-BLO06" && data.LineId == "BTM")
        {
            if (data.TagId.Contains("/"))
            {
                //! I/O S1
                if (data.TagId.Contains("S1/in/"))
                {

                    int index = int.Parse(data.TagId.Remove(0, 6));
                    bool value = data.TagValue == "1" ? true : false;
                    inputCheckS1[index].SetActive(value);       //! Dòng này là cho I/O list 
                                                                // GlobalVariable.inputStation1[index] = value;

                }
                if (data.TagId.Contains("S1/out/"))
                {
                    int index = int.Parse(data.TagId.Remove(0, 7));
                    bool value = data.TagValue == "1" ? true : false;
                    outputCheckS1[index].SetActive(value);

                }
            }
            //!  Setting của S1 
            foreach (var item1 in GlobalVariable.visionProcessingBLO06)
            {
                if (data.TagId == item1)
                {
                    int index = GlobalVariable.enableStationBLO06.IndexOf(item1);
                    visionProcessingValuesS1[index].text = data.TagValue.ToString();
                    /* if (data.TagId == item1)
                     {
                         switch (data.TagId)
                         {
                             case "S1_VISION_TOTAL_TUBES":
                                totalTubes.text = data.TagValue;
                                 break;
                             case "S1_VISION_GOOD_TUBES":
                                 goodTubes.text = data.TagValue;
                                 break;
                             case "S1_VISION_BAD_TUBES":
                                 badTubes.text = data.TagValue;
                                 break;
                             case "S1_STYROFOAM_TRAYS_QTY":
                                 StyrofoamTrays.text = data.TagValue;
                                 break;
                             default:
                                 Debug.LogWarning($"Unknown TagId: {data.TagId}");
                                 break;
                         }
                     }*/
                }
            }
            foreach (var item2 in GlobalVariable.enableStationBLO06)
            {
                if (data.TagId == item2)
                {
                    int index = GlobalVariable.enableStationBLO06.IndexOf(item2);
                    enableValuesS1[index].text = data.TagValue.ToString();
                    enableFrameS1[index].gameObject.GetComponent<Image>().color = data.TagValue == "1" ? Color.green : Color.grey;
                    /*  switch (data.TagId)
                          {
                      case "S1_DRYING_1_ENABLE":
                          bool temp1 = data.TagValue == "1" ? true : false;
                          drying1EnableValue.text = temp1 ? "Drying 1: Use" : "Drying 1: Nonuse";
                          drying1EnableFrame.gameObject.GetComponent<Image>().color = temp1 ? Color.green : Color.grey;
                          break;
                      case "S1_DRYING_2_ENABLE":
                          bool temp2 = data.TagValue == "1" ? true : false;
                          drying2EnableValue.text = temp2 ? "Drying 2: Use" : "Drying 2: Nonuse";
                          drying2EnableFrame.gameObject.GetComponent<Image>().color = temp2 ? Color.green : Color.grey;
                          break;
                      case "S1_ROBOT_ARM_DISABLE":
                          bool temp3 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp3 ? "Robot Arm: Use" : "Robot Arm: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp3 ? Color.green : Color.grey;
                          break;
                      case "S1_CAP_RUBBER_ENABLE":
                          bool temp4 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp4 ? "Cap Rubber: Use" : "Cap Rubber: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp4 ? Color.green : Color.grey;
                          break;
                      case "S1_CAP_NON_RUBBER_ENABLE":    
                          bool temp5 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp5 ? "Cap Non-Rubber: Use" : "Cap Non-Rubber: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp5 ? Color.green : Color.grey;
                          break;
                          }*/

                }
            }
            foreach (var paraam in GlobalVariable.productionDataBLO06)
            {

                if (data.TagId == paraam)
                {
                    int index = GlobalVariable.productionDataBLO06.IndexOf(paraam);

                    productionDataS1[index].text = data.TagValue.ToString();
                }
                /*    if (data.TagId.Contains(paraam) || data.TagId != paraam)
                    {
                        string index1 = data.TagId.Remove(0, 14); // index1 = 1_5
                        int index2 = int.Parse(index1.Remove(1, 1)); // index2 = 15
                        ChemicalDetectionValue[index2].text = data.TagValue;
                        int value = int.Parse(data.TagValue);
                        ChemicalDetectionFrameValue[index2].gameObject.GetComponent<Image>().color = (value > 20 && value < 70) ? Color.green : Color.red;
                    }*/

            }
        }
        switch (data.TagId)
        {
            case var tagId when tagId.Contains("S1_FS_CURRENT_"):
                string index1 = tagId.Remove(0, 14); // index1 = 1_5
                int index2 = int.Parse(index1.Remove(1, 1)); // index2 = 15
                ChemicalDetectionValue[index2].text = data.TagValue;
                int value = int.Parse(data.TagValue);
                ChemicalDetectionFrameValue[index2].gameObject.GetComponent<Image>().color = (value > 20 && value < 70) ? Color.green : Color.red;
                break;
            default:
                // Optional: handle cases where TagId does not match any known tags
                Debug.LogWarning($"Unknown TagId: {data.TagId}");
                break;
        }
        //! Param của S1
        /*    switch (data.TagId)
            {
                case "operationTimeRaw":
                    Debug.Log("operationTimeRaw");
                    GlobalVariable.operationTime = data.TagId;
                    operationTimeRaw.text = data.TagValue;
                    break;

              
                case "S1_PLASTIC_TRAYS_QTY":
                    TotalTray.text = data.TagValue;
                    break;

                case "productCountRaw":
                    TotalProducts.text = data.TagValue;
                    break;

                case "goodProductRaw":
                    goodCap.text = data.TagValue;
                    break;

                case "errorProductRaw":
                    badCap.text = data.TagValue;
                    break;

                case "EFF":
                    GlobalVariable.effective = float.Parse(data.TagValue);
                    Efficiency.text = data.TagValue;
                    break;

                case "S1_HEATING_TEMP":
                    heatingTemp.text = data.TagValue;
                    break;
                default:
                    // Optional: handle cases where TagId does not match any known tags
                    Debug.LogWarning($"Unknown TagId: {data.TagId}");
                    break;
            }
        }*/

        //! S2                     
        if (data.StationId == "IE-F3-BLO01" && data.LineId == "BTM")
        {
            if (data.TagId.Contains("/"))
            {
                if (data.TagId.Contains("S2/in/"))
                {
                    int index = int.Parse(data.TagId.Remove(0, 6));
                    bool value = data.TagValue == "1" ? true : false;

                    inputCheckS2[index].SetActive(value); //! IO List ==> Input

                }
                if (data.TagId.Contains("S2/out/"))
                {
                    Debug.Log("S2/out/");
                    int index = int.Parse(data.TagId.Remove(0, 7));
                    bool value = data.TagValue == "1" ? true : false;
                    outputCheckS2[index].SetActive(value);
                }

            }


            foreach (var item3 in GlobalVariable.visionProcessingBLO01)
            {
                if (data.TagId == item3)
                {
                    //int index = GlobalVariable.enableStationBLO01.IndexOf(item3);
                    //  visionProcessingValuesS2[index].text = data.TagValue.ToString();
                    /* if (data.TagId == item1)
                     {
                         switch (data.TagId)
                         {
                             case "S1_VISION_TOTAL_TUBES":
                                totalTubes.text = data.TagValue;
                                 break;
                             case "S1_VISION_GOOD_TUBES":
                                 goodTubes.text = data.TagValue;
                                 break;
                             case "S1_VISION_BAD_TUBES":
                                 badTubes.text = data.TagValue;
                                 break;
                             case "S1_STYROFOAM_TRAYS_QTY":
                                 StyrofoamTrays.text = data.TagValue;
                                 break;
                             default:
                                 Debug.LogWarning($"Unknown TagId: {data.TagId}");
                                 break;
                         }
                     }*/
                }
            }
            foreach (var item4 in GlobalVariable.enableStationBLO01)
            {
                if (data.TagId == item4)
                {
                    // int index = GlobalVariable.enableStationBLO01.IndexOf(item4);
                    // enableValuesS2[index].text = data.TagValue.ToString();
                    //  enableFrameS2[index].gameObject.GetComponent<Image>().color = data.TagValue == "1" ? Color.green : Color.grey;
                    /*  switch (data.TagId)
                          {
                      case "S1_DRYING_1_ENABLE":
                          bool temp1 = data.TagValue == "1" ? true : false;
                          drying1EnableValue.text = temp1 ? "Drying 1: Use" : "Drying 1: Nonuse";
                          drying1EnableFrame.gameObject.GetComponent<Image>().color = temp1 ? Color.green : Color.grey;
                          break;
                      case "S1_DRYING_2_ENABLE":
                          bool temp2 = data.TagValue == "1" ? true : false;
                          drying2EnableValue.text = temp2 ? "Drying 2: Use" : "Drying 2: Nonuse";
                          drying2EnableFrame.gameObject.GetComponent<Image>().color = temp2 ? Color.green : Color.grey;
                          break;
                      case "S1_ROBOT_ARM_DISABLE":
                          bool temp3 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp3 ? "Robot Arm: Use" : "Robot Arm: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp3 ? Color.green : Color.grey;
                          break;
                      case "S1_CAP_RUBBER_ENABLE":
                          bool temp4 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp4 ? "Cap Rubber: Use" : "Cap Rubber: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp4 ? Color.green : Color.grey;
                          break;
                      case "S1_CAP_NON_RUBBER_ENABLE":    
                          bool temp5 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp5 ? "Cap Non-Rubber: Use" : "Cap Non-Rubber: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp5 ? Color.green : Color.grey;
                          break;
                          }*/

                }
            }

        }
        //! S3
        if (data.StationId == "IE-F3-BLO02" && data.LineId == "BTM")
        {

            if (data.TagId.Contains("/"))
            {
                if (data.TagId.Contains("S3/in/"))
                {
                    int index = int.Parse(data.TagId.Remove(0, 6));
                    bool value = data.TagValue == "1" ? true : false;
                    inputCheckS3[index].SetActive(value); //! IO List ==> Input

                }
                if (data.TagId.Contains("S3/out/"))
                {

                    int index = int.Parse(data.TagId.Remove(0, 7));
                    bool value = data.TagValue == "1" ? true : false;
                    outputCheckS3[index].SetActive(value);
                }

            }

            foreach (var item5 in GlobalVariable.visionProcessingBLO02)
            {
                if (data.TagId == item5)
                {
                    // int index = GlobalVariable.enableStationBLO02.IndexOf(item5);
                    //visionProcessingValuesS3[index].text = data.TagValue.ToString();
                    /* if (data.TagId == item1)
                     {
                         switch (data.TagId)
                         {
                             case "S1_VISION_TOTAL_TUBES":
                                totalTubes.text = data.TagValue;
                                 break;
                             case "S1_VISION_GOOD_TUBES":
                                 goodTubes.text = data.TagValue;
                                 break;
                             case "S1_VISION_BAD_TUBES":
                                 badTubes.text = data.TagValue;
                                 break;
                             case "S1_STYROFOAM_TRAYS_QTY":
                                 StyrofoamTrays.text = data.TagValue;
                                 break;
                             default:
                                 Debug.LogWarning($"Unknown TagId: {data.TagId}");
                                 break;
                         }
                     }*/
                }
            }

            foreach (var item6 in GlobalVariable.enableStationBLO02)
            {
                if (data.TagId == item6)
                {
                    //    int index = GlobalVariable.enableStationBLO02.IndexOf(item6);
                    //    enableValuesS3[index].text = data.TagValue.ToString();
                    //     enableFrameS3[index].gameObject.GetComponent<Image>().color = data.TagValue == "1" ? Color.green : Color.grey;
                    /*  switch (data.TagId)
                          {
                      case "S1_DRYING_1_ENABLE":
                          bool temp1 = data.TagValue == "1" ? true : false;
                          drying1EnableValue.text = temp1 ? "Drying 1: Use" : "Drying 1: Nonuse";
                          drying1EnableFrame.gameObject.GetComponent<Image>().color = temp1 ? Color.green : Color.grey;
                          break;
                      case "S1_DRYING_2_ENABLE":
                          bool temp2 = data.TagValue == "1" ? true : false;
                          drying2EnableValue.text = temp2 ? "Drying 2: Use" : "Drying 2: Nonuse";
                          drying2EnableFrame.gameObject.GetComponent<Image>().color = temp2 ? Color.green : Color.grey;
                          break;
                      case "S1_ROBOT_ARM_DISABLE":
                          bool temp3 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp3 ? "Robot Arm: Use" : "Robot Arm: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp3 ? Color.green : Color.grey;
                          break;
                      case "S1_CAP_RUBBER_ENABLE":
                          bool temp4 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp4 ? "Cap Rubber: Use" : "Cap Rubber: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp4 ? Color.green : Color.grey;
                          break;
                      case "S1_CAP_NON_RUBBER_ENABLE":    
                          bool temp5 = data.TagValue == "1" ? true : false;
                          RobotArmEnableValue.text = temp5 ? "Cap Non-Rubber: Use" : "Cap Non-Rubber: Nonuse";
                           RobotArmEnableFrame.gameObject.GetComponent<Image>().color = temp5 ? Color.green : Color.grey;
                          break;
                          }*/

                }
            }
        }
    }
    public async Task GetBuffer(string tagId)
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        //? Gọi hàm SendAll trên Server để lấy tất cả các dữ liệu gần nhất,đó là một String rất dài nên cần xử lý phía dưới
        var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
        //? convert sang kiểu dữ liệu là List<DataSignalR>
        var filteredList = tags.Where(data => data.TagId == tagId);
        // ErrorInfor errorInfor;
        //  GlobalVariable.errorInfors.Clear();
        foreach (var tag in filteredList)
        {
            if (tag.TagValue != "Wifi disconnected")
            {
                Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy"));
                //     errorInfor = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy") };
                //      GlobalVariable.errorInfors.Add(errorInfor);
            }
        }
    }
    public async Task<List<DataSignalR>> GetBufferList()
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        //? Gọi hàm SendAll trên Server để lấy tất cả các dữ liệu gần nhất. đó là một String rất dài nên cần xử lý phía dưới
        var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
        //? convert sang kiểu dữ liệu là List<DataSignalR>
        //Debug.Log(tags);
        if (tags is null) return new List<DataSignalR>();
        else return tags;

    }
}

