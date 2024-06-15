using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class ControlVideo : MonoBehaviour
{   public GameObject panelVideo;
    public VideoPlayer video;  // Đối tượng VideoPlayer
    public GameObject btnPlay, btnPause;  // Nút Play và Pause
    public GameObject knob;  // Nút kéo
    public GameObject progressBar;  // Thanh tiến trình
    public GameObject progressBarBG;  // Nền của thanh tiến trình

    private float maxKnobValue, newKnobX, maxKnobX, minKnobX, knobPosY, simpleKnobValue, knobValue, progressBarWidth;
    private bool knobIsDragging;
    private bool videoIsJumping = false;
    private bool isVideoPlaying = false;

    // Hàm Start được gọi một lần khi khởi tạo
    void Start()
    {
        knobPosY = knob.transform.localPosition.y;  // Lưu vị trí Y ban đầu của nút kéo
        btnPause.SetActive(true);  // Hiển thị nút Pause
        btnPlay.SetActive(false);  // Ẩn nút Play
        video.frame = (long)100;  // Đặt khung hình bắt đầu của video

        // Lấy thời lượng video và tính toán kích thước các thành phần
        video.prepareCompleted += VideoPrepared;
        video.Prepare();
    }

    void VideoPrepared(VideoPlayer source)
    {
        float videoDuration = (float)video.length;  // Lấy thời lượng video
        AdjustUIElements(videoDuration);
    }

    void AdjustUIElements(float videoDuration)
    {BoxCollider collider = panelVideo.GetComponent<BoxCollider>();
        Vector3 size = collider.size; 
        Debug.Log(size.x);
        if( videoDuration < size.x/1.5){
progressBarWidth=size.x*5/6;}
        // Giả sử mỗi giây tương ứng với một đơn vị chiều dài
       else progressBarWidth = videoDuration;  // Đặt chiều rộng của thanh tiến trình bằng thời lượng video

        // Đặt kích thước của progressBarBG, progressBar, và knob
        Vector3 progressBarBGScale = progressBarBG.transform.localScale;
        progressBarBG.transform.localScale = new Vector3(progressBarWidth, progressBarBGScale.y, progressBarBGScale.z);

        Vector3 progressBarScale = progressBar.transform.localScale;
        progressBar.transform.localScale = new Vector3(progressBarWidth, progressBarScale.y, progressBarScale.z);

        minKnobX = progressBar.transform.localPosition.x;
        maxKnobX = minKnobX + progressBarWidth;
    }

    // Hàm Update được gọi một lần mỗi khung hình
    void Update()
    {
        if (!knobIsDragging && !videoIsJumping)
        {
            if (video.frameCount > 0)
            {
                float progress = (float)video.frame / (float)video.frameCount;  // Tính tiến trình của video
                progressBar.transform.localScale = new Vector3(progressBarWidth * progress, progressBar.transform.localScale.y, 0);  // Cập nhật thanh tiến trình
                knob.transform.localPosition = new Vector2(progressBar.transform.localPosition.x + (progressBarWidth * progress), knob.transform.localPosition.y);  // Cập nhật vị trí của nút kéo
            }
        }
        
        if (Input.touchCount > 0) // Kiểm tra có cảm ứng không
        {
            Touch touch = Input.GetTouch(0); // Lấy cảm ứng đầu tiên
            Vector2 touchPosition = touch.position; // Lấy vị trí cảm ứng
            Vector2 worldPosition = Camera.main.ScreenToWorldPoint(touchPosition);
            RaycastHit2D hit = Physics2D.Raycast(worldPosition, Vector2.zero);
            if (hit.collider != null)
            {
                if (hit.collider.gameObject == btnPause)
                {
                    btnPlayVideo();  // Gọi hàm Play/Stop video khi nhấn nút Pause
                }
                else if (hit.collider.gameObject == btnPlay)
                {
                    btnPlayVideo();  // Gọi hàm Play/Stop video khi nhấn nút Play
                }
            }
        }
    }

    public void KnobOnPressDown()
    {
        stopVideo();  // Dừng video
        minKnobX = progressBar.transform.localPosition.x;  // Lấy vị trí X tối thiểu của nút kéo
        maxKnobX = minKnobX + progressBarWidth;  // Lấy vị trí X tối đa của nút kéo
    }

    public void KnobOnRelease()
    {
        knobIsDragging = false;  // Đặt cờ trạng thái kéo nút thành false
        CalcKnobSimpleValue();  // Tính giá trị đơn giản của nút kéo
        playVideo();  // Chạy video
        VideoJump();  // Nhảy đến vị trí khung hình của video tương ứng với vị trí nút kéo
        StartCoroutine(DelayedSetVideoIsJumpingToFalse());  // Chạy coroutine để đặt cờ trạng thái nhảy video thành false sau 2 giây
    }

    IEnumerator DelayedSetVideoIsJumpingToFalse()
    {
        yield return new WaitForSeconds(2);  // Đợi 2 giây
        SetVideoIsJumpingToFalse();  // Đặt cờ trạng thái nhảy video thành false
    }

    public void KnobOnDrag()
    {
        knobIsDragging = true;  // Đặt cờ trạng thái kéo nút thành true
        videoIsJumping = true;  // Đặt cờ trạng thái nhảy video thành true
        Vector2 touchPosition = Input.GetTouch(0).position; // Lấy vị trí cảm ứng đầu tiên
        Vector2 worldPosition = Camera.main.ScreenToWorldPoint(touchPosition); // Chuyển đổi vị trí cảm ứng sang vị trí thế giới
        knob.transform.position = new Vector2(worldPosition.x, knob.transform.position.y);  // Cập nhật vị trí của nút kéo theo vị trí cảm ứng
        newKnobX = knob.transform.localPosition.x;
        if (newKnobX > maxKnobX) { newKnobX = maxKnobX; }
        if (newKnobX < minKnobX) { newKnobX = minKnobX; }
        knob.transform.localPosition = new Vector2(newKnobX, knobPosY);  // Đặt vị trí mới của nút kéo
        CalcKnobSimpleValue();  // Tính giá trị đơn giản của nút kéo
        progressBar.transform.localScale = new Vector3(simpleKnobValue * progressBarWidth, progressBar.transform.localScale.y, 0);  // Cập nhật thanh tiến trình
    }

    private void SetVideoIsJumpingToFalse()
    {
        videoIsJumping = false;  // Đặt cờ trạng thái nhảy video thành false
    }

    private void CalcKnobSimpleValue()
    {
        maxKnobValue = maxKnobX - minKnobX;  // Tính giá trị tối đa của nút kéo
        knobValue = knob.transform.localPosition.x - minKnobX;  // Tính giá trị của nút kéo
        simpleKnobValue = knobValue / maxKnobValue;  // Tính giá trị đơn giản của nút kéo (tỷ lệ)
    }

    private void VideoJump()
    {
        var frame = video.frameCount * simpleKnobValue;  // Tính toán khung hình mới dựa trên vị trí của nút kéo
        video.frame = (long)frame;  // Đặt khung hình của video
    }

    public void btnPlayVideo()
    {
        if (isVideoPlaying)
        {
            stopVideo();  // Dừng video nếu đang chạy
        }
        else
        {
            playVideo();  // Chạy video nếu đang dừng
        }
    }

    private void stopVideo()
    {
        isVideoPlaying = false;  // Đặt cờ trạng thái video đang chạy thành false
        video.Pause();  // Tạm dừng video
        btnPlay.SetActive(true);  // Hiển thị nút Play
        btnPause.SetActive(false);  // Ẩn nút Pause
    }

    private void playVideo()
    {
        isVideoPlaying = true;  // Đặt cờ trạng thái video đang chạy thành true
        video.Play();  // Chạy video
        btnPlay.SetActive(false);  // Ẩn nút Play
        btnPause.SetActive(true);  // Hiển thị nút Pause
    }
}
