using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_3_OMT : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation3 = new List<string>  {
 
         $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO02/Extension",
   

          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();
    }
    void OnEnable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation3);     
        Debug.Log("SignalR_Data_Station_3_OMT OnEnable");
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        

    }

    void OnDisable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);

    }
}
