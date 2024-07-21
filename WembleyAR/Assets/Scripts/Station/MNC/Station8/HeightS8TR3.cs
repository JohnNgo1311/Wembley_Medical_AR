using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;

public class HeightS8TR3 : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject highLimit;
    public GameObject slider, minText, maxText; //? 2 text này là GameObject chứa ghi chú và value

    public TMP_Text minValueText, maxValueText, currentValueText, offsetValueText, measuredValueText;
    public GameObject valueBar;
    Image valueBarImg;
    float barHeight = 0;
    double offsetHeight, minHeight, maxHeight, measuredHeight, currentHeight;

    void Start()
    {


        minText.SetActive(false);
        maxText.SetActive(false);

    }
    void Update()
    { //get API
        offsetHeight = GlobalVariable.S8_offset_3;
        minHeight = GlobalVariable.S8_min_3;
        maxHeight = GlobalVariable.S8_max_3;
        // measuredHeight = 21.12f;
        //tắt cho chắc
        // lấy chiều cao của Slider 
        barHeight = highLimit.GetComponent<RectTransform>().anchoredPosition.y;
        // lấy hình ảnh của heightBar
        valueBarImg = valueBar.GetComponent<Image>();
        valueBarImg.color = Color.green;
        // Set up
        offsetValueText.text = offsetHeight.ToString("F2");

        SetUpSlider(slider, offsetHeight, minHeight, maxHeight, minText, maxText, offsetValueText, minValueText, maxValueText);

        measuredHeight = GlobalVariable.S8_measured_3;
        currentHeight = GlobalVariable.S8_current_3;
        UpdateHeightValue(measuredHeight, currentHeight);
    }
    void SetUpSlider(GameObject slider, double offsetValue, double minValue, double maxValue, GameObject minText, GameObject maxText, TMP_Text offsetValueText, TMP_Text minValueText, TMP_Text maxValueText)
    {
        //! lấy maxSlider là giá trị max của Slider
        float maxSlider = slider.GetComponent<Slider>().maxValue;
        //? gấn giá trị vào text với 2 chữ số thập phân
        minValueText.text = minValue.ToString("F2");
        maxValueText.text = maxValue.ToString("F2");


        float minTextPosX = minText.GetComponent<RectTransform>().anchoredPosition.x;
        float maxTextPosX = maxText.GetComponent<RectTransform>().anchoredPosition.x;
        //! minSlider là giá trị min của Slider => Tìm minSlider= min(offsetValue,minValue)
        float minSlider = 21.0f;
        if (minValue < offsetValue)
        {
            minSlider = (float)minValue;
            slider.GetComponent<Slider>().minValue = minSlider;
            minText.SetActive(true);
        }
        else if (minValue > offsetValue)
        {
            minSlider = (float)offsetValue;
            slider.GetComponent<Slider>().minValue = minSlider;
            //? minValue sẽ là offset => chuẩn hóa (normalize) để xác định vị trí của minText 
            //?=> do thanh slider là chiều dọc => PosX giữ nguyên, tìm PosY
            float minTextPosY = barHeight * ((float)minValue - minSlider) / (maxSlider - minSlider);
            minText.GetComponent<RectTransform>().anchoredPosition = new Vector3(minTextPosX, minTextPosY, 0);
            minText.SetActive(true);
        }
        else if (minValue == offsetValue)
        {
            minSlider = (float)minValue;
            slider.GetComponent<Slider>().minValue = minSlider;
            minText.SetActive(true);
        }
        //? tìm vị trí cho maxText
        float maxTextPosY = barHeight * ((float)maxValue - minSlider) / (maxSlider - minSlider);
        maxText.GetComponent<RectTransform>().anchoredPosition = new Vector3(maxTextPosX, maxTextPosY, 0);
        maxText.SetActive(true);
    }
    public void UpdateHeightValue(double measuredValue, double currentValue)
    {
        currentValueText.text = currentValue.ToString("F2");
        measuredValueText.text = measuredValue.ToString("F2");
        slider.GetComponent<Slider>().value = (float)measuredValue;
        if (measuredValue <= maxHeight && measuredValue >= minHeight)
        {
            valueBarImg.color = Color.green;
        }
        else
        {
            valueBarImg.color = Color.red;
        }
    }




}
