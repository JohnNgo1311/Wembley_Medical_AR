using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Station2_Connection_Status : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topic = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM     
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO01/Status/isConnectPLC",
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();
    }
    void OnEnable()
    {   // GlobalVariable.initialTopicOMT đang là []
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topic);
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //  signalR.PublishStationIndex(1);
        //    Debug.Log(GlobalVariable.subscribedTopicsOMT);
    }

    void OnDisable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //   signalR.PublishStationIndex(0);
    }
}
