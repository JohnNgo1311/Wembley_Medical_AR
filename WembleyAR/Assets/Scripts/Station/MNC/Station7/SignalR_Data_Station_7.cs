using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_7 : MonoBehaviour
{
    SignalRData signalR;
    List<string> topicStation7 = new List<string> {

         $"{GlobalVariable.basedTopic}"
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("signalR").GetComponent<SignalRData>();
    }
    void OnEnable()
    {
        GlobalVariable.isUpdatingData = true;
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
        GlobalVariable.subscribedTopics.AddRange(topicStation7);
        signalR.UpdateTopics(GlobalVariable.subscribedTopics);
    }

    void OnDisable()
    {
        GlobalVariable.isUpdatingData = false;
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
        signalR.UpdateTopics(GlobalVariable.subscribedTopics);
    }
}
