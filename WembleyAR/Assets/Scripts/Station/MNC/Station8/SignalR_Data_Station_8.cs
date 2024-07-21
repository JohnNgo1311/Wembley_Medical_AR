using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_8 : MonoBehaviour
{
    SignalRData signalR;
    List<string> topicStation8 = new List<string>  {
         $"{GlobalVariable.basedTopic}/Setting/Setting"
          };
    void Awake()
    {
        signalR = GameObject.FindGameObjectWithTag("signalR").GetComponent<SignalRData>();
    }
    void OnEnable()
    {
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
        GlobalVariable.subscribedTopics.AddRange(topicStation8);
        signalR.UpdateTopics(GlobalVariable.subscribedTopics);
    }

    /* void OnDisable()
     {
         GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
         signalR.UpdateTopics(GlobalVariable.subscribedTopics);
     }*/
}
