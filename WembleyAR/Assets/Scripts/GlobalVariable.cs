using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using Microsoft.AspNetCore.SignalR.Client;
using TMPro;
using UnityEngine;

public class GlobalVariable : MonoBehaviour
{   //! Phần này chỉ liên quan SignalR
    public static HubConnection hubConnection;
    public static string url = "https://wembleyscadawebappapi.azurewebsites.net/NotificationHub";

    public static string basedTopic = "HCM/IE-F2-HCA01/Metric";
    //! Lưu ý chỗ này bao nhiêu ký tự ==> VCL quan trọng
    public static List<string> initialTopic = new List<string> {
        $"{basedTopic}/errorStatus" ,
        $"{basedTopic}/endErrorStatus" ,
          };
    //! 2 topic này luôn luôn phải được đăng ký
    //! initialTopic là List những Topic cần phải đăng ký
    public static List<string> subscribedTopics = initialTopic;

    public static string basedTopicOMT = "WembleyMedical/BTM";
    public static List<string> initialTopicOMT = new List<string>
    {

    };
    public static List<string> subscribedTopicsOMT = initialTopicOMT;

    public static List<string> allTopicOMT = new List<string>
    {         $"{basedTopicOMT}/IE-F3-BLO06/Extension",
              $"{basedTopicOMT}/IE-F3-BLO06/Setting/StationStatus",
              $"{basedTopicOMT}/IE-F3-BLO06/Parameter",
              $"{basedTopicOMT}/IE-F3-BLO06/Status",
              $"{basedTopicOMT}/IE-F3-BLO01/Extension",
              $"{basedTopicOMT}/IE-F3-BLO01/Setting",
              $"{basedTopicOMT}/IE-F3-BLO01/Parameter",
              $"{basedTopicOMT}/IE-F3-BLO01/Status",
              $"{basedTopicOMT}/IE-F3-BLO02/Extension",
              $"{basedTopicOMT}/IE-F3-BLO02/Parameter",
              $"{basedTopicOMT}/IE-F3-BLO02/Setting",
              $"{basedTopicOMT}/IE-F3-BLO02/Status",
    };
    public static bool networkConnected = false;
    public static bool serverConnected = false;
    public static bool isConnecting = false;
    public static bool errorServerConnected = false;




    public static int encoderPosition = 0;
    //? Station 1
    public static bool[] inputStation1 = new bool[14];
    public static bool[] outputStation1 = new bool[19];
    //? Station 2
    public static bool[] inputStation2 = new bool[6];
    public static bool[] outputStation2 = new bool[19];
    //? Station 3
    public static bool[] inputStation3 = new bool[9];
    public static bool[] outputStation3 = new bool[10];
    //? Station 4
    public static bool[] inputStation4 = new bool[10];
    public static bool[] outputStation4 = new bool[24];
    //? Station 5
    public static bool[] inputStation5 = new bool[5];
    public static bool[] outputStation5 = new bool[2];
    //? Station 6
    public static bool[] inputStation6 = new bool[7];
    public static bool[] outputStation6 = new bool[9];
    //? Station 7
    public static bool[] inputStation7 = new bool[7];
    public static bool[] outputStation7 = new bool[7];
    //? Station 8
    //! TR1
    public static double S8_max_1 = 21.32;
    public static double S8_min_1 = 21.00;
    public static double S8_offset_1 = 20.95;
    public static double S8_current_1 = 0.29;
    public static double S8_measured_1 = 21.24;
    //! TR3
    public static double S8_max_3 = 21.32;
    public static double S8_min_3 = 21.00;
    public static double S8_offset_3 = 20.95;
    public static double S8_current_3 = 0.29;
    public static double S8_measured_3 = 21.24;
    //? S9
    //! TR2
    public static double S9_max_2 = 21.32;
    public static double S9_min_2 = 21.00;
    public static double S9_offset_2 = 20.95;
    public static double S9_current_2 = 0.29;
    public static double S9_measured_2 = 21.24;
    //! TR4
    public static double S9_max_4 = 21.32;
    public static double S9_min_4 = 21.00;
    public static double S9_offset_4 = 20.95;
    public static double S9_current_4 = 0.29;
    public static double S9_measured_4 = 21.4;
    //? Station 10
    public static bool[] inputStation10 = new bool[8];
    public static bool[] outputStation10 = new bool[12];
    //? Station 11
    public static bool[] inputStation11 = new bool[1];
    public static bool[] outputStation11 = new bool[10];
    //? Station 12
    public static bool[] inputStation12 = new bool[4];
    public static bool[] outputStation12 = new bool[2];
    //monitor


    public static int productCount = 0;
    public static int goodProductCount = 0;
    public static int badProductCount = 0;
    public static string operationTime = "00:00:00";
    public static double effective = 0;
    public static int[] goodProductCountTR = new int[4];
    public static int[] badProductCountTR = new int[4];
    public static int[] productCountTR = new int[4];
    public static int[] RejCountS1TR = new int[4];
    public static int[] RejCountS3TR = new int[4];
    public static int[] RejCountS5TR = new int[4];
    public static int[] RejCountS89TR = new int[4];

    public static int[] RejCountS10TR = new int[4];
    public static List<Color32> colors = new List<Color32>
        {
            new Color32(0x3D, 0xFF, 0x7F, 0xFF)  , // Màu xanh lá   0
            new Color32(0x02, 0xC0, 0xF5, 0xFF), // Xanh nhạt 1
            new Color32(0xFF, 0x4E, 0x4E, 0xFF),  // đỏ 2
            new Color32(0xC1, 0xC1, 0xC1, 0xFF)  ,// Màu xám 3
            Color.blue,                          // Màu xanh dương 4
            Color.cyan,                          // Màu xanh cyan 5
            Color.magenta,                       // Màu hồng tím 6
            Color.yellow,                        // Màu vàng 7
            Color.black,                         // Màu đen 8
            Color.white,                         // Màu trắng 9
            new Color32(0xFF, 0xA5, 0x00, 0xFF), // Màu cam 10
            new Color32(0x80, 0x00, 0x80, 0xFF), // Màu tím 11
            new Color32(0x80, 0x80, 0x00, 0xFF)  // Màu xanh olive 12
            
        };

    public static List<string> productionDataBLO06 = new List<string>() {
    "S1_PLASTIC_TRAYS_QTY",
    "productCountRaw",
    "goodProductRaw",
    "errorProductRaw" ,
    "EFF",
    "S1_HEATING_TEMP",
  //  "S1_CURRENT_LEVEL_AUTH",
   // "S1_CURRENT_ID_AUTH",
   // "S1_CYCLE_TIME"
};
    public static List<string> productionDataBLO01 = new List<string>() {
    "S2_PLASTIC_TRAYS_QTY",
    "productCountRaw",
};
    public static List<string> productionDataBLO02 = new List<string>() {
   "S3_PLASTIC_TRAYS_QTY",
   "productCountRaw",
};
    public static List<string> visionProcessingBLO06 = new List<string>() {
    "S1_VISION_TOTAL_TUBES",
    "S1_VISION_GOOD_TUBES",
    "S1_VISION_BAD_TUBES",
    "S1_STYROFOAM_TRAYS_QTY",
    "S1_VISION_CURRENT_GDS",
    "S1_VISION_CURRENT_BDS",
    };
    public static List<string> visionProcessingBLO01 = new List<string>() {
    "S2_VISION_TOTAL_TUBES" ,
    "S2_VISION_GOOD_TUBES" ,
    "S2_VISION_BAD_TUBES" ,
    "S2_STYROFOAM_TRAYS_QTY" ,
    "S2_VISION_CURRENT_GDS",
    "S2_VISION_CURRENT_BDS",
};
    public static List<string> visionProcessingBLO02 = new List<string>() {
    "S3_VISION_TOTAL_TUBES" ,
    "S3_VISION_GOOD_TUBES" ,
    "S3_VISION_BAD_TUBES" ,
    "S3_STYROFOAM_TRAYS_QTY" ,
    "S3_VISION_CURRENT_GDS",
    "S3_VISION_CURRENT_BDS",
};
    public static List<string> enableStationBLO06 = new List<string>() {
    "S1_DRYING_1_DISABLE",
    "S1_DRYING_2_DISABLE",
    "S1_ROBOT_ARM_DISABLE",
    "S1_CAP_RUBBER_ENABLE",
    "S1_CAP_NON_RUBBER_ENABLE",
    "S1_VISION_ENABLE",

};
    public static List<string> enableStationBLO01 = new List<string>() {
    "S2_CAP_DISABLE",
    "S2_TUBE_DISABLE",
    "S2_COMMUNICATION_DISABLE"
};

    public static List<string> enableStationBLO02 = new List<string>() {
    "S3_CAP_DISABLE" ,
    "S3_TUBE_DISABLE" ,
    "S3_COMMUNICATION_DISABLE" ,
    "S3_LIFT_MOTOR_DISABLE" ,
    "S3_PUSH_TRAY_DISABLE" ,
    "S3_VISION_ENABLE" ,
};

    public static List<string> settingValuesBLO01 = new List<string>() {
    "S2_FEEDING_CAPS_TIME",
    "S2_CAPPING_TIME",
    "S2_DELAY_CAPPING_TIME",
    "S2_EJECTING_TIME",
    "S2_TAKE_TUBE_TIME",
    "S2_FEED_TUBE_TIME",
};
    public static List<string> settingValuesBLO02 = new List<string>() {
    "S3_PUSHTRAY_QUANTITYTRAY",
    "S3_PUSHTRAY_VELOCITY_AUTO",
    "S3_PUSHTRAY_VELOCITY_MAN",
    "S3_PUSHTRAY_STEPDISTANCE",
    "S3_PUSHTRAY_POSITION",
    "S3_FEEDING_CAPS_TIME",
    "S3_CAPPING_TIME",
    "S3_DELAY_CAPPING_TIME",
    "S3_TAKE_TUBE_TIME",
    "S3_FEED_TUBE_TIME",
};
    public static string operationTimeS1;
    public static string operationTimeS2;
    public static string operationTimeS3;


    //? Error
    public static List<ErrorInfor> errorInfors = new List<ErrorInfor>();
    public static List<ErrorInfor> errorInfors1 = new List<ErrorInfor>();

    public static List<ErrorInfor> errorInfors2 = new List<ErrorInfor>();

    public static List<ErrorInfor> errorInfors3 = new List<ErrorInfor>();


}
[System.Serializable]
public class DataSignalR
{
    public string StationId;
    public string LineId;
    public string TagId;
    public string TagValue;
    public DateTime TimeStamp;
}
// [System.Serializable]
// public class DoubleTypeDataModel
// {
//     public string StationId;
//     public string LineId;
//     public string TagId;
//     public double TagValue;
//     public string TimeStamp;
// }
[System.Serializable]
public class DialogModel
{
    public GameObject frameDialog;
    public TMP_Text contentDialog;
}


[System.Serializable]
public class ManufacturingInfo
{
    public string productName;
    public string referenceId;
    public string referenceName;

    public string lotCode;
    public int lotSize;
    public Line line;
    public StationInfo[] stations;
}


[System.Serializable]
public class OperationTime
{
    public string stationId;
    public int shiftNumber;
    public int status;
    public DateTime date;
    public DateTime timestamp;
}
[System.Serializable]
public class Line
{
    public string lineId;
    public string lineName;
    public int lineType;
}
[System.Serializable]
public class StationInfo
{
    public string stationId;
    public EmployeeInfo[] employees;
    public Mfc[] mfCs;
}
[System.Serializable]
public class EmployeeInfo
{
    public string employeeId;
    public string employeeName;
}
[System.Serializable]
public class Mfc
{
    public string mfcName;
    public int value;
    public int minValue;
    public int maxValue;
}




[System.Serializable]
public class Wrapper
{
    public ManufacturingInfo[] manufacturingData;
}
public class ErrorInfor
{
    public string errorName;
    public string time;

}