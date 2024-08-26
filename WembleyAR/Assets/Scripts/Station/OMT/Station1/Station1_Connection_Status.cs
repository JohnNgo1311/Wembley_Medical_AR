using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Station1_Connection_Status : MonoBehaviour
{
    SignalRDataOMT signalR;
    List<string> topicStation1 = new List<string>  {
        // GlobalVariable.basedTopicOMT = WembleyMedical/BTM     
        $"{GlobalVariable.basedTopicOMT}/IE-F3-BLO06/Status/isConnectPLC",

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
            foreach (var topic in topicStation1)
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
            foreach (var topic in topicStation1)
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
