using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class NavBack : MonoBehaviour
{
    public string previousSceneName;
    public string recentSceneName;
    void Start()
    {

    }
    private void Awake()
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
    }


    public void NavigatePop()
    {
        SceneManager.LoadScene(recentSceneName);
        PlayerPrefs.SetString(recentSceneName, SceneManager.GetActiveScene().name);
    }
}
