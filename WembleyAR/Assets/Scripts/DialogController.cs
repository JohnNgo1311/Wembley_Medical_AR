using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DialogController : MonoBehaviour
{
    public DialogModel dialogModel;
    public GameObject dialogCanvas;
    public string dialogText;
    public string typeDialog;
    public float timeDialog;
    private Image frameDialogImage;

    void Awake()
    {
        frameDialogImage = dialogModel.frameDialog.GetComponent<Image>();
    }

    void Start()
    {
        if (!GlobalVariable.loginSuccess)
        {
            StartCoroutine(ShowDialogCoroutine(typeDialog));
        }
    }

    private IEnumerator ShowDialogCoroutine(string type)
    {
        dialogModel.contentDialog.color = Color.white;

        switch (type)
        {
            case "loading":
                frameDialogImage.color = GlobalVariable.colors[1];
                break;
            case "success":
                frameDialogImage.color = GlobalVariable.colors[0];
                break;
            case "failure":
                frameDialogImage.color = GlobalVariable.colors[2];
                break;
        }

        dialogModel.contentDialog.text = dialogText;
        dialogModel.frameDialog.SetActive(true);
        dialogCanvas.SetActive(true);

        yield return new WaitForSeconds(timeDialog);
        // Ẩn hộp thoại
        dialogModel.frameDialog.SetActive(false);
        dialogCanvas.SetActive(false);
        GlobalVariable.loginSuccess = true;
    }
}
