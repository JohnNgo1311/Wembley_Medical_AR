using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetFound : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject targetCanvas, arrowOpen;
    void Start()
    {
       
    } 
    void Update(){
        Debug.Log("55555555555");
      if  (targetCanvas.activeSelf==true){
            arrowOpen.SetActive(false);
        }
      else arrowOpen.SetActive(true);

        }
     
    }


