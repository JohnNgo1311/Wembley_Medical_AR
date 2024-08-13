using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_ProductCount : MonoBehaviour
{
    SignalRData signalR;
    List<string> productCountTopics = new List<string> {
       $"{GlobalVariable.basedTopic}/Parameter/ProductionData",
       $"{GlobalVariable.basedTopic}/Setting/Checking"
          };

    void Awake()
    {
        signalR = GameObject.FindWithTag("signalR").GetComponent<SignalRData>();
    }
    void OnEnable()
    {
        GlobalVariable.isUpdatingData = true;
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
        GlobalVariable.subscribedTopics.AddRange(productCountTopics);
        signalR.UpdateTopics(GlobalVariable.subscribedTopics);
    }

    void OnDisable()
    {
        GlobalVariable.isUpdatingData = false;
        GlobalVariable.subscribedTopics = GlobalVariable.initialTopic;
        signalR.UpdateTopics(GlobalVariable.subscribedTopics);
    }
}
