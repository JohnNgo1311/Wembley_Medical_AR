using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Threading.Tasks;
public class ErrorListView : MonoBehaviour
{
    public GameObject errorPrefab, listView;
    public ScrollRect scrollRect;

    void Start()
    {
        // GenerateListView(GlobalVariable.errorInfors);
        // ErrorInfor errorInfor = new ErrorInfor { errorName = "Error 1 description", time = "12:00:00" };
        // GenerateListView(new List<ErrorInfor>());
    }

    public Task GenerateListView(List<ErrorInfor> errorInfors, string stationIndex)
    {
        // xóa hết phần tử của listview cũ 
        foreach (Transform child in listView.transform)
        {
            Destroy(child.gameObject);
        }

        for (var i = 0; i < errorInfors.Count; i++)
        {
            GameObject error = Instantiate(errorPrefab, listView.transform);  // Tạo 1 instance mới từ prefab và dặt vào trong listview
            error.SetActive(true);
            error.transform.localScale = new Vector3(1, 1, 1);
            //? đổi tên lỗi
            if (stationIndex == "S1")
            {
                GameObject errorNameText = error.transform.Find("Alarm_Name_1").gameObject;
                errorNameText.GetComponent<TMP_Text>().text = errorInfors[i].errorName;
                GameObject timeText = error.transform.Find("Time_text_1").gameObject;
                timeText.GetComponent<TMP_Text>().text = errorInfors[i].time;

            }
            if (stationIndex == "S2")
            {
                GameObject errorNameText = error.transform.Find("Alarm_Name_2").gameObject;
                errorNameText.GetComponent<TMP_Text>().text = errorInfors[i].errorName;
                GameObject timeText = error.transform.Find("Time_text_2").gameObject;
                timeText.GetComponent<TMP_Text>().text = errorInfors[i].time;
            }
            if (stationIndex == "S3")
            {
                GameObject errorNameText = error.transform.Find("Alarm_Name_3").gameObject;
                errorNameText.GetComponent<TMP_Text>().text = errorInfors[i].errorName;
                GameObject timeText = error.transform.Find("Time_text_3").gameObject;
                timeText.GetComponent<TMP_Text>().text = errorInfors[i].time;
            }

            //? đổi thời gian

        }
        scrollRect.verticalNormalizedPosition = 1;
        return Task.CompletedTask;
    }
}



