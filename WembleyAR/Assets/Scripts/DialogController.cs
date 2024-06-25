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
    public float timeDialog;


    void Start()
    {
    }

    public void ShowDialogFor2Seconds()
    {

        StartCoroutine(ShowDialogCoroutine());
    }

    private IEnumerator ShowDialogCoroutine()
    {
        switch (typeDialog)
        {
            case "loading":
                dialogModel.frameDialog.GetComponent<Image>().color = GlobalVariable.colors[1];
                break;
            case "success":
                dialogModel.frameDialog.GetComponent<Image>().color = GlobalVariable.colors[0];
                break;
            case "failure":
                dialogModel.frameDialog.GetComponent<Image>().color = GlobalVariable.colors[3];
                break;
        }

        // Hiển thị hộp thoại
        dialogModel.contentDialog.text = dialogText;
        dialogModel.frameDialog.SetActive(true);
        dialogCanvas.SetActive(true);
        // Đợi
        yield return new WaitForSeconds((float)timeDialog);

        // Ẩn hộp thoại
        dialogModel.frameDialog.SetActive(false);
        dialogCanvas.SetActive(false);

    }
}
