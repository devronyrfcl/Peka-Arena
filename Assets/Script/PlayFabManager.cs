using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine.UI;

public class PlayFabManager : MonoBehaviour
{
    [Header("Windows")]
    public GameObject nameWindow;
    public GameObject leaderboardWindow;

    [Header("Display Name Window")]
    public GameObject nameError;
    public InputField nameInput;

    [Header("Leaderboard")]
    public GameObject rowPrefab;
    public Transform rowsParent;
    public Text messageText;
    public InputField emailInput;
    public InputField passwordInput;
    public GameObject LoginWindow;
    public GameObject UserNameWindow;

    private string playerName;

    public void RegisterButton()
    {
        if (passwordInput.text.Length < 6)
        {
            messageText.text = "Password is too short";
            return;
        }

        var request = new RegisterPlayFabUserRequest
        {
            Email = emailInput.text,
            Password = passwordInput.text,
            RequireBothUsernameAndEmail = false
        };
        PlayFabClientAPI.RegisterPlayFabUser(request, OnRegisterSuccess, OnError);
    }

    void OnRegisterSuccess(RegisterPlayFabUserResult result)
    {
        messageText.text = "Registered And Logged In!";
        Login();
    }

    public void LoginButton()
    {
        var request = new LoginWithEmailAddressRequest
        {
            Email = emailInput.text,
            Password = passwordInput.text
        };

        PlayFabClientAPI.LoginWithEmailAddress(request, OnLoginSuccess, OnError);
    }

    public void ResetPasswordButton()
    {
        var request = new SendAccountRecoveryEmailRequest
        {
            Email = emailInput.text,
            TitleId = PlayFabSettings.TitleId
        };

        PlayFabClientAPI.SendAccountRecoveryEmail(request, OnPasswordReset, OnError);
    }

    public void OnLoginSuccess(LoginResult result)
    {
        Debug.Log("Successfully Logged In");
        messageText.text = "Logged In";
        GetTitleData();
        playerName = result.InfoResultPayload.PlayerProfile.DisplayName;

        if (string.IsNullOrEmpty(playerName))
            nameWindow.SetActive(true);
        else
            leaderboardWindow.SetActive(true);
    }

    void OnPasswordReset(SendAccountRecoveryEmailResult result)
    {
        Debug.Log("Password reset email sent successfully");
        messageText.text = "Password reset email sent. Please check your email.";
    }

    void Start()
    {
        Login();
    }

    void Login()
    {
        var request = new LoginWithCustomIDRequest
        {
            CustomId = SystemInfo.deviceUniqueIdentifier,
            CreateAccount = true,
            InfoRequestParameters = new GetPlayerCombinedInfoRequestParams
            {
                GetPlayerProfile = true
            }
        };
        PlayFabClientAPI.LoginWithCustomID(request, OnSuccess, OnError);
    }

    void OnSuccess(LoginResult result)
    {
        Debug.Log("Successfully Logged In");
        messageText.text = "Logged In";
        GetTitleData();
        playerName = result.InfoResultPayload.PlayerProfile.DisplayName;

        if (string.IsNullOrEmpty(playerName))
            nameWindow.SetActive(true);
        else
            //leaderboardWindow.SetActive(true);
            LoginWindow.SetActive(false);
    }

    public void SubmitNameButton()
    {
        var request = new UpdateUserTitleDisplayNameRequest
        {
            DisplayName = nameInput.text,
        };
        PlayFabClientAPI.UpdateUserTitleDisplayName(request, OnDisplayNameUpdate, OnError);

    }

    void OnDisplayNameUpdate(UpdateUserTitleDisplayNameResult result)
    {
        Debug.Log("Updated Display Name");
        playerName = result.DisplayName;
        //LoginWindow.SetActive(false);
        UserNameWindow.SetActive(false);
    }

    void OnError(PlayFabError error)
    {
        Debug.Log("Error");
        messageText.text = error.ErrorMessage;
        Debug.Log(error.GenerateErrorReport());
    }

    public void SendLeaderboard(int trophy)
    {
        var request = new UpdatePlayerStatisticsRequest
        {
            Statistics = new List<StatisticUpdate>
            {
                new StatisticUpdate
                {
                    StatisticName = "Trophy",
                    Value = trophy
                }
            }
        };
        PlayFabClientAPI.UpdatePlayerStatistics(request, OnLeaderboardUpdate, OnError);
    }

    void OnLeaderboardUpdate(UpdatePlayerStatisticsResult result)
    {
        Debug.Log("Successfully updated leaderboard");
    }

    public void GetLeaderboard()
    {
        var request = new GetLeaderboardRequest
        {
            StatisticName = "Trophy",
            StartPosition = 0,
            MaxResultsCount = 10
        };
        PlayFabClientAPI.GetLeaderboard(request, OnLeaderboardGet, OnError);
    }

    public void OnLeaderboardGet(GetLeaderboardResult result)
    {
        foreach (Transform item in rowsParent)
        {
            Destroy(item.gameObject);
        }

        foreach (var item in result.Leaderboard)
        {
            GameObject newGo = Instantiate(rowPrefab, rowsParent);
            Text[] texts = newGo.GetComponentsInChildren<Text>();
            texts[0].text = (item.Position + 1).ToString();
            texts[1].text = item.DisplayName;
            texts[2].text = item.StatValue.ToString();
        }
    }

    void GetTitleData()
    {
        PlayFabClientAPI.GetTitleData(new GetTitleDataRequest(), OnTitleDataReceived, OnError);
    }

    void OnTitleDataReceived(GetTitleDataResult result)
    {
        if (result.Data == null || !result.Data.ContainsKey("Message"))
        {
            Debug.Log("No Message");
            return;
        }
        //messageText.text = result.Data["Message"];
    }
}
