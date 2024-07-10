using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_2_OMT : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation2 = new List<string>
     {
         $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO01/Extension",
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();

    }
    void OnEnable()
    {
        GlobalVariable.isInitialize["S2_IO"] = false;

        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation2);
        //  Debug.Log("SignalR_Data_Station_2_OMT OnEnable");
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //  signalR.PublishStationIndex(1);
    }

    void OnDisable()
    {
        GlobalVariable.isInitialize["S2_IO"] = true;

        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //   signalR.PublishStationIndex(0);
    }
    private void OnDestroy()
    {
        GlobalVariable.isInitialize["S2_IO"] = true;

    }
}
