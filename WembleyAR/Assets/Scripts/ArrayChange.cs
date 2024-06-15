using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrayChange : MonoBehaviour
{   public GameObject[] stepPanel;
    private int index;
    // Start is called before the first frame update
    void Start()
    {
        index = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(index >= 8){
            index = 8;
        }
        if(index <0){
            index = 0;
        }
        if(index == 0)        
             for(int i =0 ; i <stepPanel.Length; i ++)
        { 
            stepPanel[i].gameObject.SetActive(false);
            stepPanel[0].gameObject.SetActive(true);
        }
        
        
    }
    //! Next_Arrow_Btn
    public void next(){
        //? Mỗi lần nhấn thì index tăng 1
        if (index <=6) index +=1; // index = index +1        
        for(int i =0 ; i <stepPanel.Length; i ++)
        { //! Ví dụ: index = 5, nhấn thì i =0 ==>7 thì chỉ có stepPanel[5] là sáng;
            stepPanel[i].gameObject.SetActive(false);
            stepPanel[index].gameObject.SetActive(true);
        }
        Debug.Log(index);
    }
    //! Previous_Arrow_Btn
      public void previous(){
        //? Mỗi lần nhấn thì index giảm 1
        if(index >=1) index -=1; // index = index -11

        for(int i =0 ; i <stepPanel.Length; i ++)
        { //! Ví dụ: index = 5, nhấn thì i =0 ==>7 thì chỉ có stepPanel[5] là sáng;
            stepPanel[i].gameObject.SetActive(false);         
            stepPanel[index].gameObject.SetActive(true);
            
        }
        Debug.Log(index);
    }
}
