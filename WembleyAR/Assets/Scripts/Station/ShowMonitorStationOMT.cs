using UnityEngine;
using Vuforia;

public class ShowMonitorStationOMT : MonoBehaviour
{
    public GameObject stationCanvas, clickBtn;
    public GameObject MonitorStation;
    public string tagName;
    public Camera ARCamera;

    private VuforiaBehaviour vuforiaBehaviour;

    void Start()
    {
        MonitorStation.SetActive(false);
        vuforiaBehaviour = ARCamera.GetComponent<VuforiaBehaviour>();
    }

    void Update()
    {
        // Check for mouse or touch input
        if (IsInputTriggered(out Ray ray, out RaycastHit hit))
        {
            if (hit.collider.CompareTag(tagName))
            {
                ReturnCanvas();
            }
        }
    }

    public void OnShowingMonitorStation()
    {
        stationCanvas.SetActive(false);
        MonitorStation.SetActive(true);
        vuforiaBehaviour.enabled = false;
        // arrowClose.SetActive(false);
    }

    private void ReturnCanvas()
    {
        MonitorStation.SetActive(false);
        stationCanvas.SetActive(true);
        vuforiaBehaviour.enabled = true;
        // arrowClose.SetActive(true);
    }

    private bool IsInputTriggered(out Ray ray, out RaycastHit hit)
    {
        ray = default;
        hit = default;

        if (Input.touchCount > 0)
        {
            // Handle touch input
            Touch touch = Input.GetTouch(0);
            ray = Camera.main.ScreenPointToRay(touch.position);
            return Physics.Raycast(ray, out hit);
        }
        else if (Input.GetMouseButtonDown(0))
        {
            // Handle mouse input
            ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            return Physics.Raycast(ray, out hit);
        }

        return false;
    }
}
