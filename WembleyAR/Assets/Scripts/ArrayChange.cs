using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrayChange : MonoBehaviour
{
    public GameObject[] stepPanel;
    public string tagName1;
    public string tagName2;

    private int index;
    private GameObject currentActivePanel;

    void Start()
    {
        index = 0;
        currentActivePanel = stepPanel[index];
        currentActivePanel.SetActive(true);
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) || (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began))
        {
            Ray ray = Input.touchCount > 0 ?
                      Camera.main.ScreenPointToRay(Input.GetTouch(0).position) :
                      Camera.main.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                if (hit.collider.CompareTag(tagName1))
                {
                    Next();
                }
                else if (hit.collider.CompareTag(tagName2))
                {
                    Previous();
                }
            }
        }
    }

    private void Next()
    {
        if (index < stepPanel.Length - 1)
        {
            ChangePanel(index + 1);
        }
    }

    private void Previous()
    {
        if (index > 0)
        {
            ChangePanel(index - 1);
        }
    }

    private void ChangePanel(int newIndex)
    {
        if (index != newIndex)
        {
            currentActivePanel.SetActive(false);
            index = newIndex;
            currentActivePanel = stepPanel[index];
            currentActivePanel.SetActive(true);
        }
    }
}
