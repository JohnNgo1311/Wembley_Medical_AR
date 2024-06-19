using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ShowMonitorStationOMT: MonoBehaviour
{
    public GameObject stationCanvas, clickBtn;
    public GameObject arrowOpen,arrowClose;
    public string tagName;
   public GameObject MonitorStation;
    public Camera ARCamera;
  
 SignalRDataOMT signalR;
    List<string> topicStation1 = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM
       "SimulatedWembleyMedical/BTM/IE-F3-BLO06/ChemicalDetection",
      "SimulatedWembleyMedical/BTM/IE-F3-BLO06/Parameter/operationTimeRaw",
       "SimulatedWembleyMedical/BTM/IE-F3-BLO06/Parameter/S1_HEATING_TEMP",
              "SimulatedWembleyMedical/BTM/IE-F3-BLO06/Parameter/productCountRaw",

       "SimulatedWembleyMedical/BTM/IE-F3-BLO06/Parameter/goodProductRaw",
              "SimulatedWembleyMedical/BTM/IE-F3-BLO06/Parameter/S1_PLASTIC_TRAYS_QTY",
"SimulatedWembleyMedical/BTM/IE-F3-BLO06/Parameter/EFF",

          };

void Awake() {
     signalR = GameObject.FindWithTag("SignalR_OMT").GetComponent<SignalRDataOMT>();
}
 
    void Start()
    {     

        MonitorStation.SetActive(false);
    
        //  externalDeviceTag.SetActive(false);
    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit) && hit.collider.CompareTag(tagName))
            {
                ReturnCanvas();
            }
        }
    }
    public void OnShowingMonitorStation()
    {  
        
         GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        GlobalVariable.subscribedTopicsOMT.AddRange(topicStation1);     
        Debug.Log("SignalR_Data_Station_1_OMT OnEnable");
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);

      //  signalR.PublishStationIndex(1);

        
        Debug.Log(GlobalVariable.subscribedTopicsOMT);
        stationCanvas.SetActive(false);
        MonitorStation.SetActive(true);
        ARCamera.GetComponent<VuforiaBehaviour>().enabled = false;
        arrowOpen.SetActive(false);
        arrowClose.SetActive(false);
    }
    public void ReturnCanvas()
    {   stationCanvas.SetActive(true);
        MonitorStation.SetActive(false);
        ARCamera.GetComponent<VuforiaBehaviour>().enabled = true;
        arrowClose.SetActive(true);
      GlobalVariable.subscribedTopicsOMT = GlobalVariable.initialTopicOMT;
        signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
     //   signalR.PublishStationIndex(0);
    }


  
    


}
