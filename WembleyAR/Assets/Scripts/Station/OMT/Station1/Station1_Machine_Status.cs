using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Station1_Machine_Status : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topic = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM     
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Status/machineStatus",
    };

    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();

    }

    void OnEnable()
    {
        GlobalVariable.isInitialize["S1_MachineStatus"] = false;

        // GlobalVariable.initialTopicOMT đang là []
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topic);
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //    Debug.Log(GlobalVariable.subscribedTopicsOMT);
    }

    void OnDisable()
    {
        GlobalVariable.isInitialize["S1_MachineStatus"] = true;
        signalR.UpdateTopics(new List<string>() { });
        // Xóa GameObject này khi OnDisable được gọi
    }
    private void OnDestroy()
    {
        GlobalVariable.isInitialize["S1_MachineStatus"] = true;
    }
}
