using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Knob : MonoBehaviour
{
    public GameObject videoPlayer;  // Đối tượng VideoPlayer
    private ControlVideo videoPlayerScript;
    private bool isTouching = false;

    // Hàm Start được gọi một lần khi khởi tạo
    void Start()
    {
        videoPlayerScript = videoPlayer.GetComponent<ControlVideo>();  // Lấy script ControlVideo từ đối
        // Đối tượng VideoPlayer
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Vector2 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);

            if (touch.phase == TouchPhase.Began)
            {
                // Kiểm tra nếu vị trí chạm vào knob
                Collider2D hit = Physics2D.OverlapPoint(touchPosition);
                if (hit != null && hit.gameObject == gameObject)
                {
                    isTouching = true;
                    videoPlayerScript.KnobOnPressDown();
                }
            }
            else if (touch.phase == TouchPhase.Moved)
            {
                if (isTouching)
                {
                    videoPlayerScript.KnobOnDrag();
                }
            }
            else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
            {
                if (isTouching)
                {
                    isTouching = false;
                    videoPlayerScript.KnobOnRelease();
                }
            }
        }
    }
}
