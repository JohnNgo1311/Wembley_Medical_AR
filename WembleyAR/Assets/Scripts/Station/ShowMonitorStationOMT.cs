using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class ShowMonitorStationOMT : MonoBehaviour
{
    public GameObject stationCanvas, clickBtn;
    public GameObject MonitorStation;
    public string tagName;
    public Camera ARCamera;

    void Start()
    {
        MonitorStation.SetActive(false);
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
        stationCanvas.SetActive(false);
        MonitorStation.SetActive(true);
        ARCamera.GetComponent<VuforiaBehaviour>().enabled = false;
        // arrowClose.SetActive(false);
    }
    private void ReturnCanvas()
    {
        MonitorStation.SetActive(false);
        stationCanvas.SetActive(true);
        ARCamera.GetComponent<VuforiaBehaviour>().enabled = true;
        // arrowClose.SetActive(true);
    }






}
