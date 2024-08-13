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

public class GetBufferStation : MonoBehaviour
{

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
    public string stationIdSpecific;

    void OnEnable()
    {
        if (stationIdSpecific == "S1")
        {
            GetInitialStationDataS1();
            Debug.Log("GETBUFFFRSTATION s1");
        }
        if (stationIdSpecific == "S2")
        {
            GetInitialStationDataS2();
            Debug.Log("GETBUFFFRSTATION s2");
        }
        if (stationIdSpecific == "S3")
        {
            GetInitialStationDataS3();
            Debug.Log("GETBUFFFRSTATION s3");
        }
    }

    private async void GetInitialStationDataS1()
    {
        var listInitialData1 = await GetBufferListSpecificStation("IE-F3-BLO06");

        foreach (var data in listInitialData1)
        {
            HandleStationS1(data);
            Debug.Log($" GETBUFFFER S1: {data.StationId} {data.TagId} {data.TagValue} ");
        }
    }

    private async void GetInitialStationDataS2()
    {
        var listInitialData2 = await GetBufferListSpecificStation("IE-F3-BLO01");
        foreach (var data in listInitialData2)
        {
            HandleStationS2(data);
            Debug.Log($" GETBUFFFER S2: {data.StationId} {data.TagId} {data.TagValue}");

        }
    }
    private async void GetInitialStationDataS3()
    {
        var listInitialData3 = await GetBufferListSpecificStation("IE-F3-BLO02");

        foreach (var data in listInitialData3)
        {
            Debug.Log($" GETBUFFFER S3: {data.StationId} {data.TagId} {data.TagValue} ");
            HandleStationS3(data);



        }
    }
    void HandleStationS1(DataSignalR data)
    {
        UpdateMachineStatus(data, listMachineStatusS1);
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
        UpdateIO(data, "S2", inputCheckS2, outputCheckS2);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO01, visionProcessingValuesS2);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO01, enableValuesS2, enableFrameS2);
        UpdateProductionData(data, GlobalVariable.productionDataBLO01, productionDataS2);
        UpdateSetting(data, GlobalVariable.settingValuesBLO01, settingValuesS2);

    }

    void HandleStationS3(DataSignalR data)
    {
        UpdateMachineStatus(data, listMachineStatusS3);
        UpdateConnectionStatus(data, connectionStatusFrameS3, connectionStatusValueS3);
        UpdateIO(data, "S3", inputCheckS3, outputCheckS3);
        UpdateVisionProcessing(data, GlobalVariable.visionProcessingBLO02, visionProcessingValuesS3);
        UpdateEnableValues(data, GlobalVariable.enableStationBLO02, enableValuesS3, enableFrameS3);
        UpdateProductionData(data, GlobalVariable.productionDataBLO02, productionDataS3);
        UpdateSetting(data, GlobalVariable.settingValuesBLO02, settingValuesS3);

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
        if (visionProcessingTags.Contains(data.TagId))
        {
            Debug.Log("Vision Processing:" + data.TagId + "/" + data.TagValue);
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
            Debug.Log("Setting:" + data.TagId + ":" + data.TagValue);
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
            Debug.Log("Enable:" + "" + data.StationId + "+" + data.TagId + "+" + data.TagValue);

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
            Debug.Log(data.StationId + "MachineStatus: " + data.TagValue);
            Color32[] colors = new Color32[]
             {
        new Color32(0xFF, 0x01, 0xA8, 0xD7), // case "0" ==> Hồng sáng
        Color.green,                         // case "1"
        new Color32(0xFF, 0xC0, 0x00, 0xFF), //case "2" ==> Cam
        Color.red,             // case "3"
        new Color32(0xFF, 0x9A, 0x39, 0xFB), // case "4"
        Color.yellow// case "5"
             };
            //Debug.Log("MachineStatus: " + data.TagValue); 
            int value = int.Parse(data.TagValue);

            // Reset all statuses to grey using a loop
            for (int i = 0; i < listMachineStatus.Length; i++)
            {
                listMachineStatus[i].GetComponent<Image>().color = GlobalVariable.colors[3];
            }

            // Set the specific status based on the value
            if (value >= 0 && value < listMachineStatus.Length)
            {
                listMachineStatus[value].GetComponent<Image>().color = colors[value];
            }
        }
    }


    void UpdateConnectionStatus(DataSignalR data, GameObject[] connectStatusFrames, TMP_Text[] connectStatuValues)
    {
        if (data.TagId == "isConnectPLC")
        {
            bool isConnected = int.Parse(data.TagValue) == 1;
            Debug.Log("PLC Connection: " + isConnected);
            connectStatusFrames[0].GetComponent<Image>().color = isConnected ? Color.green : GlobalVariable.colors[3];
            connectStatuValues[0].text = isConnected ? "PLC Connection: Connected" : "PLC Connection: Disconnected";
            if (GlobalVariable.serverConnected && !GlobalVariable.isConnecting && !GlobalVariable.errorServerConnected)
            {
                connectStatusFrames[1].GetComponent<Image>().color = Color.green;
                connectStatuValues[1].text = "Server Connection: Connected";
            }
            else if (GlobalVariable.errorServerConnected && !GlobalVariable.isConnecting && !GlobalVariable.serverConnected)
            {
                connectStatusFrames[1].GetComponent<Image>().color = GlobalVariable.colors[3];
                connectStatuValues[1].text = "Server Connection: Disconnected";
            }
            else if (GlobalVariable.isConnecting && !GlobalVariable.serverConnected && !GlobalVariable.errorServerConnected)
            {
                connectStatusFrames[1].GetComponent<Image>().color = Color.blue;
                connectStatuValues[1].text = "Server Connection: Connecting";
            }
            //  Debug.Log(data.StationId + "" + data.TagId + "" + GlobalVariable.isConnecting + GlobalVariable.serverConnected + GlobalVariable.errorServerConnected);
        }

    }


    void UpdateProductionData(DataSignalR data, List<string> productionDataTags, TMP_Text[] productionDataValues)
    {
        if (productionDataTags.Contains(data.TagId))
        {
            int index = productionDataTags.IndexOf(data.TagId);
            if (index >= 0)
            {

                if (data.TagId != "OEE" && data.TagId != "P" && data.TagId != "A" && data.TagId != "Q")
                {
                    productionDataValues[index].text = data.TagValue;

                }
                if (data.TagId == "OEE" || data.TagId == "P" || data.TagId == "A" || data.TagId == "Q")
                {
                    Debug.Log("PAQ: " + data.TagId + " " + data.TagValue);
                    productionDataValues[index].text = (double.Parse(data.TagValue) * 100).ToString("0.00");
                }
                if (data.TagId == "EFF")
                {
                    GlobalVariable.effective = double.Parse(data.TagValue);
                }
                if (data.TagId == "OEE")
                {
                    GlobalVariable.oEEValue = double.Parse(data.TagValue);
                }
            }

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

    public async Task<List<DataSignalR>> GetBufferListSpecificStation(string stationIdSpecific)
    {
        var response = await GlobalVariable.hubConnection.InvokeAsync<string>("SendAll");
        var tags = JsonConvert.DeserializeObject<List<DataSignalR>>(response);
        return tags.Where(data => data.StationId == stationIdSpecific && !data.TagId.StartsWith("M1")).ToList();
    }
}
