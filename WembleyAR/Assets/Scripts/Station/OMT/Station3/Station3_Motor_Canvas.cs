using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Station3_Motor_Canvas : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation2 = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM     
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO02/Parameter",
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO02/Setting/Setting",
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO02/Setting/StationStatus",
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();

    }
    void OnEnable()
    {   // GlobalVariable.initialTopicOMT đang là []

        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation2);
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //  signalR.PublishStationIndex(1);
        //   Debug.Log(GlobalVariable.subscribedTopicsOMT);
    }

    void OnDisable()
    {
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //   signalR.PublishStationIndex(0);
    }
}
