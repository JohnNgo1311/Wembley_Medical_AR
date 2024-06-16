using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_1_OMT : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation1 = new List<string>  {
         $"{GlobalVariable.basedTopicOMT}/Extension",
         $"{GlobalVariable.basedTopicOMT}/ChemicalDetection" ,
         $"{GlobalVariable.basedTopicOMT}/Parameter",

          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();
    }
    void OnEnable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation1);

        Debug.Log(GlobalVariable.subscribedTopicsOMT);

        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        
        Debug.Log("SignalR_Data_Station_1_OMT OnEnable");
      //  signalR.PublishStationIndex(1);
    }

    void OnDisable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
     //   signalR.PublishStationIndex(0);
    }
}
