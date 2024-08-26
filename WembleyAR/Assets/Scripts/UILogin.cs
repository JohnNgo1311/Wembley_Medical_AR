using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class UILogin : MonoBehaviour
{
    [SerializeField] private TMP_InputField userNameField;
    [SerializeField] private TMP_InputField passwordField;
    [SerializeField] private Button loginButton;
    [SerializeField] private string targetSceneName;
    [SerializeField] private DialogModel dialogModel;
    [SerializeField] private GameObject dialogCanvas;
    [SerializeField] private float timeDialog;
    private Image frameDialogImage;

    private readonly Dictionary<string, string> staff_Account = new Dictionary<string, string>
    {
        {"admin", "123456"},
        {"tuyến", "123456"},
        {"duy", "123456"},
    };

    private void Awake()
    {
        Screen.orientation = ScreenOrientation.Portrait;
        GlobalVariable.recentScence = SceneManager.GetActiveScene().name;
        PlayerPrefs.SetString("recentScene", GlobalVariable.recentScence);
        if (!string.IsNullOrWhiteSpace(GlobalVariable.accountModel.userName) && !string.IsNullOrWhiteSpace(GlobalVariable.accountModel.password) && staff_Account.ContainsKey(GlobalVariable.accountModel.userName) && GlobalVariable.loginSuccess)
        {
            userNameField.text = GlobalVariable.accountModel.userName;
            passwordField.text = GlobalVariable.accountModel.password;
        }
    }

    private void Start()
    {
        frameDialogImage = dialogModel.frameDialog.GetComponent<Image>();
        loginButton.onClick.AddListener(LoginButtonClicked);
    }

    private void LoginButtonClicked()
    {
        string userName = userNameField.text;
        string password = passwordField.text;

        if (staff_Account.TryGetValue(userName, out string foundPassword) && foundPassword.ToLower() == password.ToLower())
        {
            GlobalVariable.accountModel.userName = userName;
            GlobalVariable.accountModel.password = password;
            StartCoroutine(ShowDialogCoroutine("loading"));
        }
        else
        {
            StartCoroutine(ShowDialogCoroutine("failure"));
        }
    }

    private IEnumerator ShowDialogCoroutine(string type)
    {

        dialogModel.contentDialog.color = Color.white; // Đỏ

        switch (type)
        {
            case "loading":
                frameDialogImage.color = GlobalVariable.colors[1]; //
                dialogModel.contentDialog.text = "Đang đăng nhập...";
                break;
            case "success":
                frameDialogImage.color = GlobalVariable.colors[0]; // Xanh lá
                break;
            case "failure":
                frameDialogImage.color = GlobalVariable.colors[2]; // Đỏ);
                dialogModel.contentDialog.text = "Tài khoản không chính xác, hãy thử lại lại!";   // Đỏ
                break;
        }

        dialogModel.frameDialog.SetActive(true);
        dialogCanvas.SetActive(true);
        yield return new WaitForSeconds(timeDialog);
        dialogModel.frameDialog.SetActive(false);
        dialogCanvas.SetActive(false);

        if (type == "loading")
        {
            SceneManager.LoadScene(targetSceneName);
        }
        GlobalVariable.loginSuccess = false;

    }
}
