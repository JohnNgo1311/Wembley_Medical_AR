using System.Collections;
using JetBrains.Annotations;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UseDiaglogController : MonoBehaviour
{
    public DialogController dialogController;

    void Start()
    {
        // Hiển thị hộp thoại trong 2 giây khi bắt đầu
        dialogController.ShowDialogFor2Seconds();
    }

    void Update()
    {
        // Hoặc gọi từ một sự kiện khác
        if (Input.GetKeyDown(KeyCode.Space))
        {
            dialogController.ShowDialogFor2Seconds();
        }

    }
}
