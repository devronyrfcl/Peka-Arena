using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadLevels : MonoBehaviour
{
    public int LevelIndex;
    public GameObject[] Levels;

    void Start()
    {
        LevelIndex = PlayerPrefs.GetInt("LevelIndex", 0); // Load the LevelIndex from PlayerPrefs
        LoadLevel(LevelIndex); // Load the level based on the LevelIndex
    }

    // Function to load a specific level based on its index
    void LoadLevel(int index)
    {
        // Deactivate all levels
        foreach (GameObject level in Levels)
        {
            level.SetActive(false);
        }

        // Activate the level at the specified index
        if (index >= 0 && index < Levels.Length)
        {
            Levels[index].SetActive(true);
            Debug.Log("Level loaded: " + index);
        }
        else
        {
            Debug.LogError("Invalid level index: " + index);
        }
    }
}
