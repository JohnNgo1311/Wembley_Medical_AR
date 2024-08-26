using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SignalR_Data_Station_2_OMT : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation2 = new List<string>
     {
         $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO01/Extension",
          };
    void Awake()
    {      
        // Nếu chưa được gán qua Inspector, tìm SignalRDataOMT thông qua tag
        if (signalR == null)
        {
            signalR = GameObject.FindWithTag("SignalR_OMT")?.GetComponent<SignalRDataOMT>();
        }
    }

    void OnEnable()
    {
        if (signalR != null)
        {
            //   GlobalVariable.isInitialize["S1_Connection"] = false;
            // Chỉ thêm nếu topic chưa được thêm vào trước đó
            foreach (var topic in topicStation2)
            {
                if (!GlobalVariable.subscribedTopicsOMT.Contains(topic))
                {
                    GlobalVariable.subscribedTopicsOMT.Add(topic);
                }
            }
            if (GlobalVariable.hubConnection != null)
                signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        }
    }

    void OnDisable()
    {
        if (signalR != null)
        {
            //  GlobalVariable.isInitialize["S1_Connection"] = true;
            // Xóa chủ đề của Station 1 thay vì xóa toàn bộ danh sách
            foreach (var topic in topicStation2)
            {
                GlobalVariable.subscribedTopicsOMT.Remove(topic);
            }

            if (GlobalVariable.hubConnection != null)
                signalR.UpdateTopics(GlobalVariable.subscribedTopicsOMT);
        }
    }

    private void OnDestroy()
    {
        // Không cần kiểm tra signalR ở đây, chỉ đặt trạng thái khởi tạo
        //  GlobalVariable.isInitialize["S1_Connection"] = true;
    }
}
