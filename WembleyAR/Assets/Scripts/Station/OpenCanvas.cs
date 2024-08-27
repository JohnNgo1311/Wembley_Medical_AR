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
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit) && hit.collider.CompareTag(tagName))
            {
                if (isShowCanvas)
                {
                    onCloseCanvas();
                    isShowCanvas = false;
                    if (isOpen_MC_Error_CN_Cavas)
                    {
                        buttonCanvas.SetActive(true);
                    }
                }
                else
                {
                    onOpenCanvas();
                    isShowCanvas = true;
                    if (isOpen_MC_Error_CN_Cavas)
                    {

                        buttonCanvas.SetActive(false);

                    }
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
        arrowClose.SetActive(false);
        arrowOpen.SetActive(true);


    }
}
