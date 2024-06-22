using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
// chuyển scenes
public class ScenesManager : MonoBehaviour
{

    public Button nextScenes;
    public string targetSceneName;
    // Start is called before the first frame update
    public void Start()
    {
        nextScenes.onClick.AddListener(LoadNextScenes);
        //  PlayerPrefs.SetString("MayOngMauScene", SceneManager.GetActiveScene().name);
    }
    public void LoadNextScenes()
    {
        SceneManager.LoadScene(targetSceneName);
    }

    // Update is called once per frame
    public void LoadStartScenes()
    {
        SceneManager.LoadScene(0);
    }
}
