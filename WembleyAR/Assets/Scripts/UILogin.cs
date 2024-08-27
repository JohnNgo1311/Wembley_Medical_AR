using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
using System.Threading.Tasks;

public class UILogin : MonoBehaviour
{
    [SerializeField] private TMP_InputField userNameField;
    [SerializeField] private TMP_InputField passwordField;
    [SerializeField] private Button loginButton;
    [SerializeField] private string targetSceneName;
    [SerializeField] private DialogModel dialogModel;
    [SerializeField] private GameObject dialogCanvas;
    [SerializeField] private int timeDialog;
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

        if (GlobalVariable.loginSuccess && !string.IsNullOrWhiteSpace(GlobalVariable.accountModel.userName) && staff_Account.TryGetValue(GlobalVariable.accountModel.userName, out string password))
        {
            userNameField.text = GlobalVariable.accountModel.userName;
            passwordField.text = password;
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

        if (staff_Account.TryGetValue(userName, out string foundPassword) && foundPassword == password)
        {
            GlobalVariable.accountModel.userName = userName;
            GlobalVariable.accountModel.password = password;
            ShowDialog("loading");
        }
        else
        {
            ShowDialog("failure");
        }
    }

    private async void ShowDialog(string type)
    {
        switch (type)
        {
            case "loading":
                frameDialogImage.color = GlobalVariable.colors[1];
                dialogModel.contentDialog.text = "Đang đăng nhập...";
                break;
            case "success":
                frameDialogImage.color = GlobalVariable.colors[0];
                break;
            case "failure":
                frameDialogImage.color = GlobalVariable.colors[2];
                dialogModel.contentDialog.text = "Tài khoản không chính xác, hãy thử lại!";
                break;
        }

        dialogModel.contentDialog.color = Color.white;
        dialogModel.frameDialog.SetActive(true);
        dialogCanvas.SetActive(true);

        if (type == "loading")
        {
            GlobalVariable.loginSuccess = true;
            await WaitingTime(timeDialog);
            ShowDialog("success"); // Hiển thị dialog thành công sau khi chờ
        }
    }

    private async Task WaitingTime(int time)
    {
        await Task.Delay(time);
        dialogModel.frameDialog.SetActive(false);
        dialogCanvas.SetActive(false);
        SceneManager.LoadScene(targetSceneName);
    }
}
