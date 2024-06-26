using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class EfficiencySlider : MonoBehaviour
{

    public GameObject effSlider;

    // Update is called once per frame
    void Update()
    {
        
        effSlider.GetComponent<Slider>().value = (float)GlobalVariable.effective;
    }


}
