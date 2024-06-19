using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetLost : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject targetCanvas, arrowOpen;
    void Start()
    {
        targetCanvas.SetActive(false);
        arrowOpen.SetActive(false);
    }
    void Update()
    {

    }

}
