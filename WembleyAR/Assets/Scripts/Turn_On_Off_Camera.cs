using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Vuforia;
public class Turn_On_Off_Camera : MonoBehaviour
{

    public Button buttonON;
    public Button buttonOFF;
    public Camera arCamera;
    private bool cameraActive = true;
    void Start()
    {
        buttonON.GetComponent<Button>().onClick.AddListener(Turn_On_Off_AR_Camera);
        buttonOFF.GetComponent<Button>().onClick.AddListener(Turn_On_Off_AR_Camera);
    }
    private void Turn_On_Off_AR_Camera()
    {
        if (cameraActive)
        {
            arCamera.GetComponent<VuforiaBehaviour>().enabled = false;  //! Dừng Cam
            buttonOFF.gameObject.SetActive(false);
            buttonON.gameObject.SetActive(true);
        }
        else
        {
            arCamera.GetComponent<VuforiaBehaviour>().enabled = true;  //! Bật Cam
            buttonOFF.gameObject.SetActive(true);
            buttonON.gameObject.SetActive(false);
        }
        cameraActive = !cameraActive;
    }
}
