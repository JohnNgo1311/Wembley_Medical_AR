using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenCanvas : MonoBehaviour
{
    public GameObject targetCanvas, arrowOpen, arrowClose;
    public GameObject homeScreen;
    public string tagName;
    bool isShowCanvas = false;

    [SerializeField] private bool isOpen_MC_Error_CN_Cavas = false;
    [SerializeField] private GameObject buttonCanvas;

    // Start is called before the first frame update
    void Start()
    {
        targetCanvas.SetActive(false);
        homeScreen.SetActive(true);
        arrowOpen.SetActive(true);
        arrowClose.SetActive(false);
    }
    void Update()
    {
        // Kiểm tra cho sự kiện chạm hoặc nhấn chuột
        if (Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began))
        {
            // Xử lý raycast để phát hiện chạm vào đối tượng
            Ray ray;
            if (Input.touchCount > 0)
            {
                ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            }
            else
            {
                ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            }

            RaycastHit hit;
            if (Physics.Raycast(ray, out hit) && hit.collider.CompareTag(tagName))
            {
                if (isShowCanvas)
                {
                    onCloseCanvas();
                    if (isOpen_MC_Error_CN_Cavas)
                    {
                        buttonCanvas.SetActive(true);
                    }
                    isShowCanvas = false;

                }
                else
                {
                    onOpenCanvas();
                    if (isOpen_MC_Error_CN_Cavas)
                    {
                        buttonCanvas.SetActive(false);
                    }
                    isShowCanvas = true;
                }

            }
        }
    }

    void onOpenCanvas()
    {
        targetCanvas.SetActive(true);
        arrowClose.SetActive(true);
        arrowOpen.SetActive(false);
    }
    void onCloseCanvas()
    {
        targetCanvas.SetActive(false);
        arrowOpen.SetActive(true);
        arrowClose.SetActive(false);
    }
}
