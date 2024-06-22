using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DialogController : MonoBehaviour
{
    public DialogModel dialogModel;
    public GameObject dialogCanvas;
    public string dialogText;
    public string typeDialog;

    private Image frameDialogImage;

    void Start()
    {

        dialogModel.frameDialog.SetActive(false);
        frameDialogImage = dialogModel.frameDialog.GetComponent<Image>();
    }

    public void ShowDialogFor2Seconds()
    {
        StartCoroutine(ShowDialogCoroutine());
    }

    private IEnumerator ShowDialogCoroutine()
    {
        switch (typeDialog)
        {
            case "Loading":
                frameDialogImage.color = GlobalVariable.colors[1];
                break;
            case "success":
                frameDialogImage.color = GlobalVariable.colors[0];
                break;
            case "failure":
                frameDialogImage.color = GlobalVariable.colors[3];
                break;
        }

        // Hiển thị hộp thoại
        dialogModel.contentDialog.text = dialogText;
        dialogModel.frameDialog.SetActive(true);
        dialogCanvas.SetActive(true);
        // Đợi 2 giây
        yield return new WaitForSeconds((float)1.5);

        // Ẩn hộp thoại
        dialogModel.frameDialog.SetActive(false);
        dialogCanvas.SetActive(false);

    }
}
