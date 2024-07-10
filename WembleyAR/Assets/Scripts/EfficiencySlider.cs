using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class EfficiencySlider : MonoBehaviour
{

    public GameObject effSlider, Pslider, Aslider, Qslider, oEESlider;

    // Update is called once per frame
    void Update()
    {
        effSlider.GetComponent<Slider>().value = (float)GlobalVariable.effective;
        oEESlider.GetComponent<Slider>().value = (float)GlobalVariable.oEEValue;
    }


}
