using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class UILogin : MonoBehaviour
{

    public TMPro.TMP_InputField userNameField;
    public TMPro.TMP_InputField passwordField;
    public Button loginButton;
    public string targetSceneName;
    void Start()
    {
        //Subscribe to onClick event
        loginButton.onClick.AddListener(adminDetails);
    }

    Dictionary<string, string> staffDetails = new Dictionary<string, string>
    {
        {"wembleyadmin","123456" },
        {"Tuyến","123456" },
        {"Duy","123456" },

    };


    public void adminDetails()
    {
        //Get Username from Input then convert it to int
        string userName;
        userName = userNameField.text;
        //Get Password from Input
        string password;
        password = passwordField.text;

        string foundPassword;
        if (staffDetails.TryGetValue(userName, out foundPassword) && (foundPassword == password))
        {
            SceneManager.LoadScene(targetSceneName);

            // Lưu tên cảnh hiện tại
            PlayerPrefs.SetString(targetSceneName, SceneManager.GetActiveScene().name);

            //  Debug.Log("User authenticated");
        }
        else
        {
            //   Debug.Log("Invalid password");
        }
    }
}