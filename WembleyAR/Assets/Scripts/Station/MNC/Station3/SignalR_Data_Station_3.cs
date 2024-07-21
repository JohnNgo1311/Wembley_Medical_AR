using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_3 : MonoBehaviour
{
    SignalRData signalR;
    List<string> topicStation3 = new List<string>  {
         $"{GlobalVariable.basedTopic}"
          };
    void Awake()
    {
       // signalR = GameObject.FindWithTag("signalR").GetComponent<SignalRData>();
    }
    void OnEnable()
    {
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
        GlobalVariable.subscribedTopics.AddRange(topicStation3);
    //    signalR.UpdateTopics(GlobalVariable.subscribedTopics);
      //  signalR.PublishStationIndex(3);
    }

    void OnDisable()
    {
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
     //   signalR.UpdateTopics(GlobalVariable.subscribedTopics);
       // signalR.PublishStationIndex(0);
    }
}
