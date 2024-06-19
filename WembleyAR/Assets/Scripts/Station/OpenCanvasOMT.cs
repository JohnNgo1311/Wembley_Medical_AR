using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class OpenCanvasOMT : MonoBehaviour
{
    public GameObject targetCanvas, arrowOpen, arrowClose;
    public GameObject homeScreen;
    public string tagName;
    bool isShowCanvas = false;
    // Start is called before the first frame update
    void Start()
    {
        targetCanvas.SetActive(false);
        homeScreen.SetActive(true);
        arrowOpen.SetActive(true);
        arrowClose.SetActive(true);
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
                }
                else
                {
                    onOpenCanvas();
                    isShowCanvas = true;
                }

            }

        }

    }

    void onOpenCanvas()
    {
        targetCanvas.SetActive(true);
        arrowOpen.SetActive(false);


    }
    void onCloseCanvas()
    {
        targetCanvas.SetActive(false);
        arrowOpen.SetActive(false);


    }
}
