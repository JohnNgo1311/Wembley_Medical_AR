using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_1_OMT : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation1 = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM
    
             
         $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Extension",
      
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();
    }
    void OnEnable()
    {   // GlobalVariable.initialTopicOMT đang là []
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation1);     
        Debug.Log("SignalR_Data_Station_1_OMT OnEnable");
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);

      //  signalR.PublishStationIndex(1);

        
        Debug.Log(GlobalVariable.subscribedTopicsOMT);
    }

    void OnDisable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
     //   signalR.PublishStationIndex(0);
    }
}
