using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DatasheetFunction : MonoBehaviour
{
    public GameObject[] contentPanels = new GameObject[12] ;
    public GameObject datasheetUI;
    // Start is called before the first frame update
    void Start()
    {
        datasheetUI.SetActive(true);
                foreach (GameObject panel in contentPanels)
        {
            panel.SetActive(false);
        }
    }

    public void onValueChange(int value)
    {    //?contentPanels có 12 phần tử từ 0 đến 11
        if (value > 0 && value <= contentPanels.Length)
        {   //? value từ 0 --> 13, chỉ xét từ 1 --> 13
            // Activate the selected panel and deactivate others
            for (int i = 0; i < contentPanels.Length; i++)
            {   
                //? i = 0 thì xét với value =1
                contentPanels[i].SetActive(i == value - 1);
            }
        }
      else if (value ==0){
        foreach (GameObject panel in contentPanels)
        {
            panel.SetActive(false);
        }

      }
    }
}
