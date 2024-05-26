using UnityEngine;

public class CharacterSetup : MonoBehaviour
{
    // Public integer to hold the character index
    public int characterIndex;

    // Declare arrays of GameObjects for characters 1 to 25
    public GameObject[] character1;
    public GameObject[] character2;
    public GameObject[] character3;
    public GameObject[] character4;
    public GameObject[] character5;
    public GameObject[] character6;
    public GameObject[] character7;
    public GameObject[] character8;
    public GameObject[] character9;
    public GameObject[] character10;
    public GameObject[] character11;
    public GameObject[] character12;
    public GameObject[] character13;
    public GameObject[] character14;
    public GameObject[] character15;
    public GameObject[] character16;
    public GameObject[] character17;
    public GameObject[] character18;
    public GameObject[] character19;
    public GameObject[] character20;
    public GameObject[] character21;
    public GameObject[] character22;
    public GameObject[] character23;
    public GameObject[] character24;
    public GameObject[] character25;

    // Start is called before the first frame update
    void Start()
    {
        // Retrieve the selected character index from PlayerPrefs
        characterIndex = PlayerPrefs.GetInt("SelectedCharacter", 0);
        
        // Activate the appropriate character array
        ActivateCharacter(characterIndex);
    }

    // Method to activate the corresponding character array based on the index
    void ActivateCharacter(int index)
    {
        // Deactivate all characters first
        DeactivateAllCharacters();

        // Activate the appropriate character array based on the index
        switch (index)
        {
            case 0:
                SetActiveCharacterArray(character1, true);
                break;
            case 1:
                SetActiveCharacterArray(character2, true);
                break;
            case 2:
                SetActiveCharacterArray(character3, true);
                break;
            case 3:
                SetActiveCharacterArray(character4, true);
                break;
            case 4:
                SetActiveCharacterArray(character5, true);
                break;
            case 5:
                SetActiveCharacterArray(character6, true);
                break;
            case 6:
                SetActiveCharacterArray(character7, true);
                break;
            case 7:
                SetActiveCharacterArray(character8, true);
                break;
            case 8:
                SetActiveCharacterArray(character9, true);
                break;
            case 9:
                SetActiveCharacterArray(character10, true);
                break;
            case 10:
                SetActiveCharacterArray(character11, true);
                break;
            case 11:
                SetActiveCharacterArray(character12, true);
                break;
            case 12:
                SetActiveCharacterArray(character13, true);
                break;
            case 13:
                SetActiveCharacterArray(character14, true);
                break;
            case 14:
                SetActiveCharacterArray(character15, true);
                break;
            case 15:
                SetActiveCharacterArray(character16, true);
                break;
            case 16:
                SetActiveCharacterArray(character17, true);
                break;
            case 17:
                SetActiveCharacterArray(character18, true);
                break;
            case 18:
                SetActiveCharacterArray(character19, true);
                break;
            case 19:
                SetActiveCharacterArray(character20, true);
                break;
            case 20:
                SetActiveCharacterArray(character21, true);
                break;
            case 21:
                SetActiveCharacterArray(character22, true);
                break;
            case 22:
                SetActiveCharacterArray(character23, true);
                break;
            case 23:
                SetActiveCharacterArray(character24, true);
                break;
            case 24:
                SetActiveCharacterArray(character25, true);
                break;
            default:
                Debug.LogWarning("Invalid character index");
                break;
        }
    }

    // Helper method to deactivate all characters
    void DeactivateAllCharacters()
    {
        SetActiveCharacterArray(character1, false);
        SetActiveCharacterArray(character2, false);
        SetActiveCharacterArray(character3, false);
        SetActiveCharacterArray(character4, false);
        SetActiveCharacterArray(character5, false);
        SetActiveCharacterArray(character6, false);
        SetActiveCharacterArray(character7, false);
        SetActiveCharacterArray(character8, false);
        SetActiveCharacterArray(character9, false);
        SetActiveCharacterArray(character10, false);
        SetActiveCharacterArray(character11, false);
        SetActiveCharacterArray(character12, false);
        SetActiveCharacterArray(character13, false);
        SetActiveCharacterArray(character14, false);
        SetActiveCharacterArray(character15, false);
        SetActiveCharacterArray(character16, false);
        SetActiveCharacterArray(character17, false);
        SetActiveCharacterArray(character18, false);
        SetActiveCharacterArray(character19, false);
        SetActiveCharacterArray(character20, false);
        SetActiveCharacterArray(character21, false);
        SetActiveCharacterArray(character22, false);
        SetActiveCharacterArray(character23, false);
        SetActiveCharacterArray(character24, false);
        SetActiveCharacterArray(character25, false);
    }

    // Helper method to activate or deactivate all elements in a character array
    void SetActiveCharacterArray(GameObject[] characterArray, bool isActive)
    {
        foreach (GameObject character in characterArray)
        {
            if (character != null)
            {
                character.SetActive(isActive);
            }
        }
    }
}
