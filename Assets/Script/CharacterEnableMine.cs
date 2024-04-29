using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterEnableMine : MonoBehaviour
{
    public int characterIndex; // 0:Wheel, 1:Amy, 2:Michelle ...
    public GameObject[] shopCharacters; // Prefabs of player characters

    void Start()
    {
        characterIndex = PlayerPrefs.GetInt("SelectedCharacter", 0);
        SpawnSelectedCharacter();
    }

    void SpawnSelectedCharacter()
    {
        // Ensure index is within bounds
        if (characterIndex < 0 || characterIndex >= shopCharacters.Length)
        {
            Debug.LogError("Invalid character index!");
            return;
        }

        // Instantiate the selected player prefab at the position of this object
        GameObject selectedCharacter = Instantiate(shopCharacters[characterIndex], transform.position, Quaternion.identity);
        // Optionally, you can set the instantiated character as a child of this object
        selectedCharacter.transform.SetParent(transform);
    }
}
