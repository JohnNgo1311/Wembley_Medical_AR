using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CloseBtn : MonoBehaviour
{ public Canvas gObject;
  private bool isActive;
    // Start is called before the first frame update
    void Start()
    {
        isActive = gObject.gameObject.activeSelf;
    }
    
    public void closeGameObject(){
        if(isActive){           
            gObject.gameObject.SetActive(false);
            isActive = false;
        }       
    }
}
