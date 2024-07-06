using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Error_List_S1 : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation1 = new List<string>  {
         $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Parameter/errorStatus",
         $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Parameter/endErrorStatus",
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();

    }
    void OnEnable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation1);
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);

    }

    void OnDisable()
    {

        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //   signalR.PublishStationIndex(0);
    }
}
