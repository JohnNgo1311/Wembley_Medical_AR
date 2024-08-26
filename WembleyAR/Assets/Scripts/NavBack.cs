using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class NavBack : MonoBehaviour
{
    public string previousScene;
    void Start()
    {

    }
    private void Awake()
    {
        GlobalVariable.recentScence = SceneManager.GetActiveScene().name;
        PlayerPrefs.SetString("recentScene", GlobalVariable.recentScence);

        if (GlobalVariable.recentScence != "LoginSence")
        {
            Screen.orientation = ScreenOrientation.LandscapeLeft;
        }
    }

    public void NavigatePop()
    {
        SceneManager.LoadScene(previousScene);
    }
}
