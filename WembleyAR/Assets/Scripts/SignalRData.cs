using System.Collections.Generic;
using UnityEngine;
using Microsoft.AspNetCore.SignalR.Client;
using System;
using System.Threading.Tasks;
using Newtonsoft.Json;
using TMPro;
using System.Linq;
public class SignalRData : MonoBehaviour
{
    public GameObject alarmScript;
    public GameObject[] inputCheckS1;
    public GameObject[] outputCheckS1;
    public GameObject[] inputCheckS2;
    public GameObject[] outputCheckS2;
    public GameObject[] inputCheckS3;
    public GameObject[] outputCheckS3;
    public GameObject[] inputCheckS4;
    public GameObject[] outputCheckS4;
    public GameObject[] inputCheckS5;
    public GameObject[] outputCheckS5;
    public GameObject[] inputCheckS6;
    public GameObject[] outputCheckS6;
    public GameObject[] inputCheckS7;
    public GameObject[] outputCheckS7;
    public GameObject[] inputCheckS10;
    public GameObject[] outputCheckS10;
    public GameObject[] inputCheckS11;
    public GameObject[] outputCheckS11;
    public GameObject[] inputCheckS12;
    public GameObject[] outputCheckS12;
    //public GameObject[] S1SensorCheck;
    public GameObject[] S3SensorCheck_2;
    // public GameObject[] S5SensorCheck_1;
    public GameObject[] S5SensorCheck_2;
    public GameObject[] S10SensorCheck;
    //? S1
    public GameObject S1_Horz_Snr_On, S1_Horz_Snr_Off, S1_Vert_Up, S1_Vert_Dn, S1_Horz_Fwd, S1_Horz_Rev, S1_Gripper_On, S1_Gripper_Off;
    public GameObject[] S1_SensorCheck;
    //? S2
    public GameObject S2_Horz_Snr_On, S2_Horz_Snr_Off, S2_Vert_Up, S2_Vert_Dn, S2_Horz_Fwd, S2_Horz_Rev, S2_Vacuum_On, S2_Vacuum_Off;
    // GameObject[] S2SensorCheck;
    public GameObject[] S2_GripperOn;
    bool isReset;
    //? S3
    public GameObject[] S3_Press_Dn;
    public GameObject S3_Hold_Fwd;
    public GameObject[] S3SensorCheck_1;
    //? S3

    public GameObject S5_Slide_Dn;
    public GameObject[] S5SensorCheck_1;
    //? S4
    public GameObject S4_Horz_Snr_On, S4_Horz_Snr_Off, S4_Vert_Up, S4_Vert_Dn, S4_Horz_Fwd, S4_Horz_Rev;
    //public GameObject[] S4_SensorCheck;
    public GameObject[] S4_GripperOn;
    //? S11/S12
    public GameObject S11_Horz_Snr_On, S11_Horz_Snr_Off, S12_Gripper_On, S12_Gripper_Off, S11_Horz_Fwd, S11_Horz_Rev;
    public GameObject[] S12_SensorCheck;
    public GameObject[] S11_GripperOn;
    //? S10

    public GameObject[] S10_Holding_Fwd;
    public GameObject[] S10_AirBlow_On;

    //? S6
    public TMP_Text[] S6_OperationParameter;
    //? S7
    public TMP_Text[] S7_OperationParameter;


    void Start()
    {   //! Kết nối đến server
        StartConnectWebApi();
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
            Debug.Log("$$" + str);
            DataSignalR data = JsonConvert.DeserializeObject<DataSignalR>(str);
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
                Debug.Log("Connected");
                //      UpdateTopics(GlobalVariable.subscribedTopics); //? Đăng ký đến topic nào luôn luôn phải đăng ký là error và errorStatus
                UpdateTopics(GlobalVariable.allTopic);
                GlobalVariable.isConnecting = false;
                GlobalVariable.serverConnected = true;
                //string a = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
                var listInitialData = await GetBufferList();
                //? Khi connect Thành công thì GetBufferList để lấy các dữ liệu lần gần nhất được retain
                foreach (var data in listInitialData)
                {
                    Debug.Log($"{data.LineId}" + " " + $"{data.StationId}" + " " + $"{data.TagId}" + " " + $"{data.TagValue}");
                    UpdateData(data);
                }
                //? await GetBuffer("errorStatus");
                //?  await alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors, "s1");
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
    //! Hàm UpdateData dưới đây là cho MÁY NÚT CHẶN


    void HandleS1Input(int index, bool value)
    {
        inputCheckS1[index].SetActive(value);
        GlobalVariable.inputStation1[index] = value;
        if (index == 0)
        {
            S1_Horz_Snr_On.SetActive(value);
            S1_Horz_Snr_Off.SetActive(!value);
        }
        else if (index > 1 && index < 6)
        {
            S1_SensorCheck[index - 2].SetActive(value);
        }
    }

    void HandleS1Output(int index, bool value)
    {
        outputCheckS1[index].SetActive(value);
        // Handle specific cases
        SetActiveBasedOnIndex(index, value, S1_Vert_Up, S1_Vert_Dn, S1_Horz_Fwd, S1_Horz_Rev, S1_Gripper_On, S1_Gripper_Off);
    }

    void HandleS2Input(int index, bool value)
    {
        inputCheckS2[index].SetActive(value);
        if (index == 0)
        {
            S2_Horz_Snr_On.SetActive(value);
            S2_Horz_Snr_Off.SetActive(!value);
        }
    }

    void HandleS2Output(int index, bool value)
    {
        outputCheckS2[index].SetActive(value);
        SetActiveBasedOnIndex(index, value, S2_Vert_Up, S2_Vert_Dn, S2_Horz_Fwd, S2_Horz_Rev, S2_Vacuum_On);
    }

    void HandleS3Input(int index, bool value)
    {
        inputCheckS3[index].SetActive(value);
        if (index > 0 && index < 5)
        {
            S3SensorCheck_1[index - 1].SetActive(value);
        }
    }

    void HandleS3Output(int index, bool value)
    {
        outputCheckS3[index].SetActive(value);
        if (index % 2 == 1)
        {
            S3_Press_Dn[(index - 1) / 2].SetActive(value);
        }
        else if (index == 8 && value)
        {
            S3_Hold_Fwd.SetActive(true);
        }
        else if (index == 9 && !value)
        {
            S3_Hold_Fwd.SetActive(false);
        }
    }

    void HandleS4Input(int index, bool value)
    {
        inputCheckS4[index].SetActive(value);
        if (index == 0)
        {
            S4_Horz_Snr_On.SetActive(value);
            S4_Horz_Snr_Off.SetActive(!value);
        }
    }
    void ProcessData(DataSignalR data)
    {
        string tagId = data.TagId;
        bool value = data.TagValue == "1";
        int index = int.Parse(tagId.Substring(tagId.LastIndexOf('/') + 1));
        switch (true)
        {  //! I_O
            case var _ when tagId.Contains("S1/in/"):
                HandleS1Input(index, value);
                break;

            case var _ when tagId.Contains("S1/out/"):
                HandleS1Output(index, value);
                break;

            case var _ when tagId.Contains("S2/in/"):
                HandleS2Input(index, value);
                break;

            case var _ when tagId.Contains("S2/out/"):
                HandleS2Output(index, value);
                break;

            case var _ when tagId.Contains("S3/in/"):
                HandleS3Input(index, value);
                break;

            case var _ when tagId.Contains("S3/out/"):
                HandleS3Output(index, value);
                break;

            case var _ when tagId.Contains("S4/in/"):
                HandleS4Input(index, value);
                break;

            case var _ when tagId.Contains("S4/out/"):
                HandleS4Output(index, value);
                break;

            case var _ when tagId.Contains("S5/in/"):
                HandleS5Input(index, value);
                break;

            case var _ when tagId.Contains("S5/out/"):
                HandleS5Output(index, value);
                break;

            case var _ when tagId.Contains("S6/in/"):
                HandleS6Input(index, value);
                break;

            case var _ when tagId.Contains("S6/out/"):
                HandleS6Output(index, value);
                break;

            case var _ when tagId.Contains("S7/in/"):
                HandleS7Input(index, value);
                break;

            case var _ when tagId.Contains("S7/out/"):
                HandleS7Output(index, value);
                break;

            case var _ when tagId.Contains("S10/in/"):
                HandleS10Input(index, value);
                break;

            case var _ when tagId.Contains("S10/out/"):
                HandleS10Output(index, value);
                break;

            case var _ when tagId.Contains("S11/in/"):
                HandleS11Input(index, value);
                break;

            case var _ when tagId.Contains("S11/out/"):
                HandleS11Output(index, value);
                break;

            case var _ when tagId.Contains("S12/in/"):
                HandleS12Input(index, value);
                break;

            case var _ when tagId.Contains("S12/out/"):
                HandleS12Output(index, value);
                break;
            //! Parameter
            case var _ when tagId.Contains("S6/parameter/"):
                HandleS6Parameter(index, data.TagValue);
                break;
            case var _ when tagId.Contains("S7/parameter/"):
                HandleS7Parameter(index, data.TagValue);
                break;

            case var _ when tagId.Contains("S8"):
                HandleS8Parameter(tagId, data.TagValue);
                break;

            case var _ when tagId.Contains("S9"):
                HandleS9Parameter(tagId, data.TagValue);
                break;
        }
    }

    void HandleS4Output(int index, bool value)
    {
        outputCheckS4[index].SetActive(value);
        SetActiveBasedOnIndex(index, value, S4_Vert_Up, S4_Vert_Dn, S4_Horz_Fwd, S4_Horz_Rev, S4_GripperOn[index]);
    }

    void HandleS5Input(int index, bool value)
    {
        inputCheckS5[index].SetActive(value);
        if (index > 0)
        {
            S5SensorCheck_1[index - 1].SetActive(value);
        }
    }

    void HandleS5Output(int index, bool value)
    {
        outputCheckS5[index].SetActive(value);
        if (index == 1 && value)
        {
            S5_Slide_Dn.SetActive(true);
        }
        else if (index == 0 && !value)
        {
            S5_Slide_Dn.SetActive(false);
        }
    }

    void HandleS6Input(int index, bool value)
    {
        inputCheckS6[index].SetActive(value);
    }

    void HandleS6Output(int index, bool value)
    {
        outputCheckS6[index].SetActive(value);
    }

    void HandleS6Parameter(int index, string value)
    {
        S6_OperationParameter[index].text = value;
    }

    void HandleS7Input(int index, bool value)
    {
        inputCheckS7[index].SetActive(value);
    }

    void HandleS7Output(int index, bool value)
    {
        outputCheckS7[index].SetActive(value);
    }

    void HandleS7Parameter(int index, string value)
    {
        S7_OperationParameter[index].text = value;
    }

    void HandleS8Parameter(string tagId, string value)
    {
        if (tagId.Contains("MAXIMUM_HEIGHT_VALUE_TR1")) GlobalVariable.S8_max_1 = double.Parse(value);
        if (tagId.Contains("MINIMUN_HEIGHT_VALUE_TR1")) GlobalVariable.S8_min_1 = double.Parse(value);
        if (tagId.Contains("CURRENT_HEIGHT_TR1")) GlobalVariable.S8_current_1 = double.Parse(value);
        if (tagId.Contains("TOTAL_HEIGHT_TR1")) GlobalVariable.S8_measured_1 = double.Parse(value);
        if (tagId.Contains("OFF_SET_TR1")) GlobalVariable.S8_offset_1 = double.Parse(value);
        if (tagId.Contains("MAXIMUM_HEIGHT_VALUE_TR3")) GlobalVariable.S8_max_3 = double.Parse(value);
        if (tagId.Contains("MINIMUN_HEIGHT_VALUE_TR3")) GlobalVariable.S8_min_3 = double.Parse(value);
        if (tagId.Contains("CURRENT_HEIGHT_TR3")) GlobalVariable.S8_current_3 = double.Parse(value);
        if (tagId.Contains("TOTAL_HEIGHT_TR3")) GlobalVariable.S8_measured_3 = double.Parse(value);
        if (tagId.Contains("OFF_SET_TR3")) GlobalVariable.S8_offset_3 = double.Parse(value);
    }

    void HandleS9Parameter(string tagId, string value)
    {
        if (tagId.Contains("MAXIMUM_HEIGHT_VALUE_TR2")) GlobalVariable.S9_max_2 = double.Parse(value);
        if (tagId.Contains("MINIMUN_HEIGHT_VALUE_TR2")) GlobalVariable.S9_min_2 = double.Parse(value);
        if (tagId.Contains("CURRENT_HEIGHT_TR2")) GlobalVariable.S9_current_2 = double.Parse(value);
        if (tagId.Contains("TOTAL_HEIGHT_TR2")) GlobalVariable.S9_measured_2 = double.Parse(value);
        if (tagId.Contains("OFF_SET_TR2")) GlobalVariable.S9_offset_2 = double.Parse(value);
        if (tagId.Contains("MAXIMUM_HEIGHT_VALUE_TR4")) GlobalVariable.S9_max_4 = double.Parse(value);
        if (tagId.Contains("MINIMUN_HEIGHT_VALUE_TR4")) GlobalVariable.S9_min_4 = double.Parse(value);
        if (tagId.Contains("CURRENT_HEIGHT_TR4")) GlobalVariable.S9_current_4 = double.Parse(value);
        if (tagId.Contains("TOTAL_HEIGHT_TR4")) GlobalVariable.S9_measured_4 = double.Parse(value);
        if (tagId.Contains("OFF_SET_TR4")) GlobalVariable.S9_offset_4 = double.Parse(value);
    }

    void HandleS10Input(int index, bool value)
    {
        inputCheckS10[index].SetActive(value);
    }

    void HandleS10Output(int index, bool value)
    {
        outputCheckS10[index].SetActive(value);
    }

    void HandleS11Input(int index, bool value)
    {
        inputCheckS11[index].SetActive(value);
    }

    void HandleS11Output(int index, bool value)
    {
        outputCheckS11[index].SetActive(value);
    }

    void HandleS12Input(int index, bool value)
    {
        inputCheckS12[index].SetActive(value);
    }

    void HandleS12Output(int index, bool value)
    {
        outputCheckS12[index].SetActive(value);
    }

    void SetActiveBasedOnIndex(int index, bool value, params GameObject[] targets)
    {
        if (index >= 0 && index < targets.Length)
        {
            targets[index].SetActive(value);
        }
    }
    void UpdateData(DataSignalR data)
    {
        if (data.StationId == "IE-F2-HCA01")
        {
            //?? Xử lý I/O với Height của Station 8 và Station 9 (Setting value)
            ProcessData(data);
            //?? Xử lý Checking REJ
            if (data.TagId.Contains("REJ"))
            {
                if (data.TagId.Contains("BOTTOM_CAP_REJ_TR"))
                {
                    int indx = int.Parse(data.TagId.Remove(0, 17));
                    GlobalVariable.RejCountS1TR[indx - 1] = int.Parse(data.TagValue);
                }
                if (data.TagId.Contains("SILICON_PRESENCE_REJ_TR"))
                {
                    int indx = int.Parse(data.TagId.Remove(0, 23));
                    GlobalVariable.RejCountS3TR[indx - 1] = int.Parse(data.TagValue);
                }
                if (data.TagId.Contains("COVER_PRESENCE_REJ_TR"))
                {
                    int indx = int.Parse(data.TagId.Remove(0, 21));
                    GlobalVariable.RejCountS5TR[indx - 1] = int.Parse(data.TagValue);
                }
                if (data.TagId.Contains("HEIGHT_CHK_REJ_TR"))
                {
                    int indx = int.Parse(data.TagId.Remove(0, 17));
                    GlobalVariable.RejCountS89TR[indx - 1] = int.Parse(data.TagValue);
                }

                else if (data.TagId.Contains("LEAK_TEST_CHK_TR"))
                {
                    int index = int.Parse(data.TagId.Remove(0, 16));
                    GlobalVariable.RejCountS10TR[index - 2] = int.Parse(data.TagValue);
                }

            }
            if (data.TagId.Contains("LEAK_TEST_CHK_OK_TR1"))
            {
                GlobalVariable.RejCountS10TR[0] = int.Parse(data.TagValue);
            }

            //! Suy nghĩ bỏ cái này 
            if (data.TagId.Contains("CHECK_PRESSURE_S10_TRACK"))
            {
                int index = int.Parse(data.TagId.Remove(0, 24)) - 1;
                bool value = data.TagValue == "1" ? true : false;
                S10SensorCheck[index].SetActive(value);
            }


            if (data.TagId.Contains("GOOD_CNT_TR"))
            {
                int index = int.Parse(data.TagId.Remove(0, 11));
                GlobalVariable.goodProductCountTR[index - 1] = int.Parse(data.TagValue);
            }
            if (data.TagId.Contains("BAD_CNT_TR"))
            {
                int index = int.Parse(data.TagId.Remove(0, 10));
                GlobalVariable.badProductCountTR[index - 1] = int.Parse(data.TagValue);
            }
            if (data.TagId.Contains("TOTAL_CNT_TR"))
            {
                int index = int.Parse(data.TagId.Remove(0, 12));
                GlobalVariable.productCountTR[index - 1] = int.Parse(data.TagValue);
            }

            else
            {
                ErrorInfor errorInfor;
                switch (data.TagId)
                {
                    case "Encoder Value":
                        GlobalVariable.encoderPosition = int.Parse(data.TagValue);
                        break;
                    case "productCount":
                        GlobalVariable.productCount = int.Parse(data.TagValue);
                        break;
                    case "goodProduct":
                        GlobalVariable.goodProductCount = int.Parse(data.TagValue);
                        break;
                    case "errorProduct":
                        GlobalVariable.badProductCount = int.Parse(data.TagValue);
                        break;
                    case "EFF":
                        GlobalVariable.effective = double.Parse(data.TagValue);
                        break;
                    //! OperationTime lấy từ API => Sửa lại
                    case "operationTime":
                        GlobalVariable.operationTime = data.TagValue;
                        break;

                    case "errorStatus":
                        if (data.TagValue != "Wifi disconnected" && GlobalVariable.errorInfors.Any(x => x.errorName == data.TagValue) == false)

                        {
                            //            Debug.Log(data.TagValue);
                            errorInfor = new ErrorInfor { errorName = data.TagValue, time = data.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy") };
                            GlobalVariable.errorInfors.Add(errorInfor);
                            alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors, "S1");
                        }
                        break;
                    case "endErrorStatus":
                        //linQ
                        GlobalVariable.errorInfors.RemoveAll(x => x.errorName == data.TagValue);
                        /* errorInfor = new ErrorInfor { errorName = data.TagValue, time = data.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy") };
                         for (int i = 0; i < GlobalVariable.errorInfors.Count; i++)
                         {
                             if (GlobalVariable.errorInfors[i].errorName == errorInfor.errorName)
                             {
                                 GlobalVariable.errorInfors.RemoveAt(i);
                                 break;
                             }
                        /* }*/
                        alarmScript.gameObject.GetComponent<ErrorListView>().GenerateListView(GlobalVariable.errorInfors, "S1");
                        break;
                    default:
                        break;
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
        ErrorInfor errorInfor;
        GlobalVariable.errorInfors.Clear();
        foreach (var tag in filteredList)
        {
            if (tag.TagValue != "Wifi disconnected")
            {
                Debug.Log("Error: " + tag.TagValue + " at " + tag.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy"));
                errorInfor = new ErrorInfor { errorName = tag.TagValue, time = tag.TimeStamp.ToString("HH:mm:ss dd/MM/yyyy") };
                GlobalVariable.errorInfors.Add(errorInfor);
            }
        }
    }
    public async Task<List<DataSignalR>> GetBufferList()
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        //? Gọi hàm SendAll trên Server để lấy tất cả các dữ liệu gần nhất. đó là một String rất dài nên cần xử lý phía dưới
        var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response).Where(data => data.StationId != "IE-F3-BLO02" && data.StationId != "IE-F3-BLO06" && data.StationId != "IE-F3-BLO01");
        //? convert sang kiểu dữ liệu là List<DataSignalR>

        if (tags is null) return new List<DataSignalR>();
        return (List<DataSignalR>)tags;

    }
}

