using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Station1_Motor_Canvas : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation1 = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM     
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Parameter",                //? S1 Production Data,S1 Error, S1 End Error
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Setting/StationStatus",    //? S1 Enable
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/ChemicalDetection" ,
          };
    void Awake()
    {
        signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();

    }
    void OnEnable()
    {   // GlobalVariable.initialTopicOMT đang là []
        GlobalVariable.isInitialize["S1_ProductionData"] = false;
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation1);
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        //  signalR.PublishStationIndex(1);
        //  Debug.Log(GlobalVariable.subscribedTopicsOMT);
    }

    void OnDisable()
    {
        GlobalVariable.isInitialize["S1_ProductionData"] = true;
        GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
    }
    private void OnDestroy()
    {
        GlobalVariable.isInitialize["S1_ProductionData"] = true;

    }
}
