using UnityEngine;
using TMPro;

public class StarCounter : MonoBehaviour
{
    private int starCount = 0; // Counter for the stars collected
    public TextMeshProUGUI starCountText; // Reference to the TextMeshPro text component

    // This function is called whenever a star is collected
    public void IncrementStarCount()
    {
        starCount++; // Increase the star count by 1
        UpdateStarCountText(); // Update the star count text
        Debug.Log("Stars Collected: " + starCount);
        // You can add any other actions here, like saving progress, etc.
    }

    // This function resets the star count
    public void ResetStarCount()
    {
        starCount = 0; // Reset the star count to 0
        UpdateStarCountText(); // Update the star count text
        Debug.Log("Star count reset.");
        // You can add any other actions here, like saving progress, etc.
    }

    // This function returns the current star count
    public int GetStarCount()
    {
        return starCount; // Return the current star count
    }

    // This function updates the star count text
    private void UpdateStarCountText()
    {
        if (starCountText != null)
        {
            starCountText.text = "Stars Collected: " + starCount;
        }
        else
        {
            Debug.LogWarning("TextMeshPro Text component is not assigned!");
        }
    }

    private void Start()
    {
        // Set the initial star count text when the game starts
        if (starCountText != null)
        {
            starCountText.text = "Stars Collected: " + starCount;
        }
        else
        {
            Debug.LogWarning("TextMeshPro Text component is not assigned!");
        }
    }
}
