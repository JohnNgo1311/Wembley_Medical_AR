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
    private Image frameDialogImage;
    [SerializeField] private bool isInitialize = false;

    void Awake()
    {
        frameDialogImage = dialogModel.frameDialog.GetComponent<Image>();
    }

    void Start()
    {
        if (!GlobalVariable.loginSuccess)
        {
            if (isInitialize)
            {
                OnClickShowDialog();
                GlobalVariable.loginSuccess = true;
            }

        }
    }

    private IEnumerator ShowDialogRoutine()
    {
        yield return new WaitForSeconds(timeDialog);
        dialogModel.frameDialog.SetActive(false);
        dialogCanvas.SetActive(false);
    }

    public void OnClickShowDialog()
    {
        frameDialogImage.color = typeDialog switch
        {
            "loading" => (Color)GlobalVariable.colors[1],
            "success" => (Color)GlobalVariable.colors[0],
            "failure" => (Color)GlobalVariable.colors[2],
            _ => (Color)GlobalVariable.colors[0],
        };
        dialogModel.contentDialog.color = Color.white;
        dialogModel.contentDialog.text = dialogText;
        dialogModel.frameDialog.SetActive(true);
        dialogCanvas.SetActive(true);

        StartCoroutine(ShowDialogRoutine());
    }
}
