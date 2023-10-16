using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine.UI;
using System.Text;
using System.Globalization;

public class PlayFabManager : MonoBehaviour
{
    public GameObject rowPrefab;
    public Transform rowsParent;
    // Start is called before the first frame update
    void Start()
    {
        Login();

        

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void Login()
    {
        var request = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true
        };
        PlayFabClientAPI.LoginWithCustomID(request, OnSuccess, OnError);
    }

    void OnSuccess(LoginResult result)
    {
        Debug.Log("Successfully Logged In");
    }

    void OnError(PlayFabError error) 
    {
        Debug.Log("Error while Logging in");
        Debug.Log(error.GenerateErrorReport());
    }

    public void SendLeaderboard(int trophy)
    {
        var request = new UpdatePlayerStatisticsRequest {
            Statistics = new List<StatisticUpdate> {
                new StatisticUpdate {
                    StatisticName = "Trophy",
                    Value = trophy
                }
            }
        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    }

    void OnLeaderboardUpdate(UpdatePlayerStatisticsResult result) {
        Debug.Log("Successfull Leaderboard Sent");
    }

    public void GetLeaderboard() {
        var request = new GetLeaderboardRequest {
            StatisticName = "Trophy",
            StartPosition = 0,
            MaxResultsCount = 10
        };
        PlayFabClientAPI.GetLeaderboard(request, OnLeaderboardGet, OnError);
    }

    public void OnLeaderboardGet (GetLeaderboardResult result) {
        
        foreach (Transform item in rowsParent) {
            Destroy(item.gameObject);
        }
        
        foreach (var item in result.Leaderboard) {
            
            GameObject newGo = Instantiate(rowPrefab, rowsParent);
            Text[] texts = newGo.GetComponentsInChildren<Text>();
            //Text[] texts = newGo.GetComponentsInChildren<Text>();
            texts[0].text = (item.Position + 1).ToString();
            texts[1].text = item.PlayFabId;
            texts[2].text = item.StatValue.ToString();

            //Debug.Log("Dieeeeeeeeeeeeee");

            Debug.Log(string.Format("PLACE: {0} ID: {1}  VALUE: {2}",
                 item.Position, item.PlayFabId, item.StatValue));
            
            //Debug.Log(item.Position + " " + item.PlayFabId + " " + item.StatValue);

        }
    }

    public void SendPlayerOwnedData(UpdateUserDataRequest request, Action<UpdateUserDataResult> successCallback, Action<PlayFabError> errorCallback)
    {
        PlayFabClientAPI.UpdateUserData(request, successCallback, errorCallback);
    }
}
