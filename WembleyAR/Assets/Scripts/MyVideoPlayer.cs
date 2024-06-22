using UnityEngine;
using UnityEngine.Video;
using System.Collections;
using UnityEngine.UI;

public class MyVideoPlayer : MonoBehaviour
{

    public Button btnPlay;
    public Button btnPause;
    public GameObject knob;
    public GameObject progressBar;
    public GameObject progressBarBG;

    private float maxKnobValue;
    private float newKnobX;
    private float maxKnobX;
    private float minKnobX;
    private float knobPosY;
    private float simpleKnobValue;
    private float knobValue;
    private float progressBarWidth;
    private bool knobIsDragging;
    private bool videoIsJumping = false;
    private bool videoIsPlaying = false;
    private VideoPlayer videoPlayer;


    private void Awake()
    {
        videoPlayer = GetComponent<VideoPlayer>();


        if (progressBarBG == null)
        {
            Debug.LogError("Progress bar background is not assigned!");
        }
    }
    /* private void OnVideoPrepared(VideoPlayer videoPlayer)
     {
         videoPlayer.Play();
     }*/
    public void Start()
    {
        knobPosY = knob.transform.localPosition.y;
        btnPlay.gameObject.SetActive(false);
        btnPause.gameObject.SetActive(true);
        btnPlay.onClick.AddListener(VideoPlay);
        btnPause.onClick.AddListener(VideoStop);
        videoPlayer.frame = (long)0;
        progressBarWidth = progressBarBG.GetComponent<SpriteRenderer>().transform.localScale.x;
    }

    public void Update()
    {

        if (!knobIsDragging && !videoIsJumping)
        {
            if (videoPlayer.frameCount > 0)
            {
                // Kiểm tra giá trị frame trước khi cập nhật ProgressBar

                float progress = (float)videoPlayer.frame / (float)videoPlayer.frameCount;

                // In giá trị của progress và progressBarWidth


                progressBar.transform.localScale = new Vector3(progressBarWidth * progress, progressBar.transform.localScale.y, 0);
                float progressBarX = progressBar.transform.localPosition.x + (progressBarWidth * progress);
                knob.transform.localPosition = new Vector3(progressBarX, knob.transform.localPosition.y, 0);
            }
        }


        if (Input.GetMouseButtonDown(0))
        {
            Vector3 pos = Input.mousePosition;
            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                BoxCollider hitCollider = hit.collider.GetComponent<BoxCollider>();

                if (hitCollider != null)
                {
                    Button hitButton = hitCollider.GetComponent<Button>();
                    if (hitButton != null)
                    {
                        if (hitButton == btnPause || hitButton == btnPlay)
                        {
                            VideoPlayPause();
                        }
                    }
                }

            }

        }

    }

    public void VideoPlayPause()
    {
        if (videoIsPlaying)
        {
            VideoStop();
        }
        else
        {
            VideoPlay();
        }
    }
    public void VideoStop()
    {
        videoIsPlaying = false;
        videoPlayer.Pause();
        btnPlay.gameObject.SetActive(true);
        btnPause.gameObject.SetActive(false);
    }

    public void VideoPlay()
    {
        Debug.Log("play video");
        videoIsPlaying = true;
        videoPlayer.Play();
        btnPlay.gameObject.SetActive(false);
        btnPause.gameObject.SetActive(true);
    }
    private void StopAndClearVideo()
    {
        if (videoPlayer != null)
        {
            videoPlayer.Stop();
            Destroy(videoPlayer.gameObject);
            videoPlayer = null;
        }
    }
    public void OnDestroy()
    {
        // Dừng và xóa video khi đối tượng bị hủy
        StopAndClearVideo();
    }
    private void VideoJump()
    {
        var frame = videoPlayer.frameCount * simpleKnobValue;
        videoPlayer.frame = (long)frame;
    }
    public void KnobOnRelease()
    {
        knobIsDragging = false;
        CalcKnobSimpleValue();
        VideoPlay();
        VideoJump();
        StartCoroutine(DelayedSetVideoIsJumpingToFalse());
    }
    private void CalcKnobSimpleValue()
    {
        maxKnobValue = maxKnobX - minKnobX;
        knobValue = knob.transform.localPosition.x - minKnobX;
        simpleKnobValue = knobValue / maxKnobValue;
    }
    IEnumerator DelayedSetVideoIsJumpingToFalse()
    {
        yield return new WaitForSeconds(2);
        SetVideoIsJumpingToFalse();
    }
    private void SetVideoIsJumpingToFalse()
    {
        videoIsJumping = false;
    }
    public void KnobOnPressDown()
    {
        VideoStop();
        minKnobX = progressBar.transform.localPosition.x;
        maxKnobX = minKnobX + progressBarWidth;
    }
    public void KnobOnDrag()
    {
        if (knobIsDragging)
        {
            videoIsJumping = true;

            // Lấy vị trí mới của chuột
            Vector3 curScreenPoint = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint);

            // Giới hạn vị trí của núm trượt trong khoảng minKnobX đến maxKnobX
            newKnobX = Mathf.Clamp(curPosition.x, minKnobX, maxKnobX);

            // Đặt vị trí mới cho núm trượt
            knob.transform.localPosition = new Vector2(newKnobX, knobPosY);

            // Tính giá trị đơn giản của núm trượt
            CalcKnobSimpleValue();

            // Cập nhật kích thước của thanh tiến trình dựa trên giá trị đơn giản
            progressBar.transform.localScale = new Vector3(simpleKnobValue * progressBarWidth, progressBar.transform.localScale.y, 0);
        }
    }


}

// knob được nhấn



// knob được nhả



// kéo



// đặt videoIsJumping = false sau delay time

// tính toán giá trị của knob

// nhảy đến frame cụ thể theo giá trị tính toán của knob   

// xử lý khi nhấn nút dừng/phát

