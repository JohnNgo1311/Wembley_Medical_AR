using System.Collections.Generic;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using Newtonsoft.Json;
using TMPro;
using System;

public class OperationTimeScript : MonoBehaviour
{
    public static List<string> url = new List<string>() {
        "https://wembleyscadawebappapi.azurewebsites.net/api/MachineStatuses/LatestOnOff?StationId=IE-F3-BLO06",
        "https://wembleyscadawebappapi.azurewebsites.net/api/MachineStatuses/LatestOnOff?StationId=IE-F3-BLO01",
        "https://wembleyscadawebappapi.azurewebsites.net/api/MachineStatuses/LatestOnOff?StationId=IE-F3-BLO02",
    };

    public TMP_Text operationTimeText;
    //public GameObject loadingAnimator;
    public int stationIndex;
    private OperationTime[] operationTime;
    private DateTime operationTimeOn;
    private DateTime operationTimeOff;
    void Start()
    {
        //loadingAnimator.SetActive(false);
    }

    //? The error you're seeing is because void cannot be awaited. The async keyword enables the await keyword in that method. When you await a method, it must return a Task or Task<T>.
    //? In your case, you should change async Task<void> to async Task in the UpdateOperationTime method
    async void OnEnable()
    {
        await UpdateOperationTime(stationIndex);
    }

    public async Task UpdateOperationTime(int sIndex)
    {
        operationTime = await GetOperationTime(sIndex);
        if (operationTime != null && operationTime.Length > 0)
        {
            SetOperationTime(operationTime, sIndex);
        }
    }

    public async Task<OperationTime[]> GetOperationTime(int stationIndex)
    {
        try
        {
            using (HttpClient client = new HttpClient())
            {
                string jsonResponse = await client.GetStringAsync(url[stationIndex - 1]);
                operationTime = JsonConvert.DeserializeObject<OperationTime[]>(jsonResponse);
                if (operationTime == null || operationTime.Length == 0)
                {
                    Debug.LogError("Failed to parse JSON data or no data found.");
                }
                // Debug.Log(operationTime.ToString());
                return operationTime;
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error: " + e.Message);
            return null;
        }
    }

    //? có nhiều cách get nhưng cách này hay nhất
    // public async Task<string> FetchDataAsync(string url)
    // {
    //     using (HttpClient client = new HttpClient())
    //     {
    //         string jsonResponse = await client.GetStringAsync(url);
    //         return jsonResponse;
    //     }
    // }

    /* void OpenLoadingIndicator()
     {
         loadingAnimator.SetActive(true);
         loadingAnimator.GetComponent<Animator>().Play("Loading", 0, 0);
         loadingAnimator.GetComponent<Animator>().SetBool("Loading", true);
    }*/

    /* public void CloseLoadingIndicator()
     {
         loadingAnimator.SetActive(false);
         loadingAnimator.GetComponent<Animator>().SetBool("Loading", false);
     }*/



    public void SetOperationTime(OperationTime[] operationTime, int stationIndex)
    {
        operationTimeOn = operationTime[0].timestamp;
        operationTimeOff = operationTime[1].timestamp;
        Debug.Log($"Time On:{operationTimeOn}");
        Debug.Log($"Time Off:{operationTimeOff}");
        UpdateOperationTimeDisplay(stationIndex);
    }

    private void UpdateOperationTimeDisplay(int stationIndex)
    {
        DateTime operationTimeActive = DateTime.UtcNow.ToLocalTime(); //? Lấy thời gian hiện tại
        if (operationTimeOn.CompareTo(operationTimeOff) < 0)
        {
            SetGlobalOperationTime(stationIndex, "00:00:00");
            //   Debug.Log("Lấy Sai time");
        }
        else if (operationTimeOff.CompareTo(operationTimeOff) >= 0)
        {
            TimeSpan operationDuration = operationTimeActive - operationTimeOn;
            SetGlobalOperationTime(stationIndex, operationDuration.ToString(@"hh\:mm\:ss"));
        }
    }

    private void SetGlobalOperationTime(int stationIndex, string time)
    {
        // Debug.Log(time);
        switch (stationIndex)
        {
            case 1:
                GlobalVariable.operationTimeS1 = time;
                operationTimeText.text = GlobalVariable.operationTimeS1;
                break;
            case 2:
                GlobalVariable.operationTimeS2 = time;
                operationTimeText.text = GlobalVariable.operationTimeS2;
                break;
            case 3:
                GlobalVariable.operationTimeS3 = time;
                operationTimeText.text = GlobalVariable.operationTimeS3;
                break;
            default:
                Debug.LogError("Invalid station index");
                break;
        }
    }

    void Update()
    {
        if (operationTime != null && operationTime.Length > 0)
        {
            UpdateOperationTimeDisplay(stationIndex);
        }
    }
}
