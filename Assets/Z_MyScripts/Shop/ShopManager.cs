using UnityEngine.UI;
using UnityEngine;
using TMPro;
using System.Collections.Generic;
using PlayFab;
using PlayFab.ClientModels;

public class ShopManager : MonoBehaviour
{
    public static ShopManager Instance;

    public ShopElement[] characters;
    public int characterIndex;
    public GameObject[] shopCharacters;
    public Button buyButton;
    public Button selectCharacterButton;
    Text selectedButtonText;
    public int savedCharacterIndex;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }

    void Start()
    {
        PlayerPrefs.SetInt("InGameCurrency", 1000);
        selectedButtonText = selectCharacterButton.GetComponentInChildren<Text>();

        // Load player data from PlayFab
        GetPlayerDataFromPlayFab();

        characterIndex = PlayerPrefs.GetInt("SelectedCharacter", 0);
        foreach (GameObject ch in shopCharacters)
        {
            ch.SetActive(false);
        }

        shopCharacters[characterIndex].SetActive(true);

        UpdateUI();
    }

    void Update()
    {
        savedCharacterIndex = PlayerPrefs.GetInt("SelectedCharacter");
    }

    public void ChangeNextCharacter()
    {
        shopCharacters[characterIndex].SetActive(false);
        characterIndex++;
        if (characterIndex == characters.Length)
            characterIndex = 0;

        shopCharacters[characterIndex].SetActive(true);

        UpdateUI();

        bool isLocked = characters[characterIndex].isLocked;
        if (isLocked)
            return;

        // Save the selected character to PlayFab
        SendPlayerDataToPlayFab();
    }

    public void ChangePreviousCharacter()
    {
        shopCharacters[characterIndex].SetActive(false);
        characterIndex--;
        if (characterIndex == -1)
            characterIndex = characters.Length - 1;

        shopCharacters[characterIndex].SetActive(true);

        UpdateUI();

        bool isLocked = characters[characterIndex].isLocked;
        if (isLocked)
            return;

        // Save the selected character to PlayFab
        SendPlayerDataToPlayFab();
    }

    public void SelectCharacter()
    {
        bool isLocked = characters[characterIndex].isLocked;
        if (isLocked)
            return;

        PlayerPrefs.SetInt("SelectedCharacter", characterIndex);
        selectedButtonText.text = "Selected";
        selectCharacterButton.interactable = false;

        // Save the selected character to PlayFab
        SendPlayerDataToPlayFab();
    }

    public void UnlockWithGems()
    {
        ShopElement c = characters[characterIndex];
        if (PlayerPrefs.GetInt("Coin_Currency") < c.price)
        {
            return;
        }

        CurrencyManager.Instance.RemoveCoinCurrency(c.price);

        c.isLocked = false;

        UpdateUI();

        // Save the unlocked character to PlayFab
        SendPlayerDataToPlayFab();
    }

    private void UpdateUI()
    {
        ShopElement c = characters[characterIndex];

        if (c.isLocked)
        {
            selectCharacterButton.gameObject.SetActive(false);
            buyButton.gameObject.SetActive(true);
            buyButton.GetComponentInChildren<TextMeshProUGUI>().text = c.price + "";

            if (PlayerPrefs.GetInt("Coin_Currency", 0) < c.price)
                buyButton.interactable = false;
            else
                buyButton.interactable = true;
        }
        else
        {
            selectCharacterButton.gameObject.SetActive(true);
            buyButton.gameObject.SetActive(false);

            if (PlayerPrefs.GetInt("SelectedCharacter") == characterIndex)
            {
                Debug.Log("!");
                selectedButtonText.text = "Selected";
                selectCharacterButton.interactable = false;
            }
            else
            {
                selectedButtonText.text = "Select";
                selectCharacterButton.interactable = true;
            }
        }
    }

    public void UpdateCharacterDummy()
    {
        bool isLocked = characters[characterIndex].isLocked;
        if (isLocked)
        {
            shopCharacters[characterIndex].SetActive(false);
            shopCharacters[savedCharacterIndex].SetActive(true);
            characterIndex = savedCharacterIndex;
        }
    }

    // Add a method to retrieve player data from PlayFab
    public void GetPlayerDataFromPlayFab()
    {
        PlayFabClientAPI.GetUserData(new GetUserDataRequest(), OnGetUserDataSuccess, OnGetUserDataError);
    }

    // Callback for successful data retrieval
    private void OnGetUserDataSuccess(GetUserDataResult result)
    {
        if (result.Data.TryGetValue("PlayerData", out UserDataRecord userDataRecord))
        {
            // Parse and use the player data (e.g., owned characters)
            List<string> ownedCharacterNames = JsonUtility.FromJson<List<string>>(userDataRecord.Value);
            
            // Update character locks based on owned character names
            foreach (ShopElement character in characters)
            {
                character.isLocked = !ownedCharacterNames.Contains(character.name);
            }
        }
    }

    // Callback for error in data retrieval
    private void OnGetUserDataError(PlayFabError error)
    {
        Debug.LogError("Error getting player data from PlayFab: " + error.ErrorMessage);
    }

    // Add a method to send player data to PlayFab
    public void SendPlayerDataToPlayFab()
    {
        // Create a list to store the character names owned by the player
        List<string> ownedCharacterNames = new List<string>();

        // Populate the list with the character names that are not locked
        foreach (ShopElement character in characters)
        {
            if (!character.isLocked)
            {
                ownedCharacterNames.Add(character.name);
            }
        }

        // Convert the list of owned character names to a JSON string
        string playerDataJson = JsonUtility.ToJson(ownedCharacterNames);

        // Create a request to update player data
        UpdateUserDataRequest request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string>
            {
                { "PlayerData", playerDataJson }
            }
        };

        PlayFabClientAPI.UpdateUserData(request, OnUpdateUserDataSuccess, OnUpdateUserDataError);
    }

    // Callback for successful data update
    private void OnUpdateUserDataSuccess(UpdateUserDataResult result)
    {
        Debug.Log("Player data sent to PlayFab successfully.");
    }

    // Callback for error in data update
    private void OnUpdateUserDataError(PlayFabError error)
    {
        Debug.LogError("Error sending player data to PlayFab: " + error.ErrorMessage);
    }
}
