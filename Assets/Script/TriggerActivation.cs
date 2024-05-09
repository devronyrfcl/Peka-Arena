using UnityEngine;
using LevelUnlockSystem;
using UnityEngine.UI;

public class TriggerActivation : MonoBehaviour
{
    // The GameObject to activate when the player enters the collider
    public GameObject objectToActivate;
    //public GameUI gameUI;
    [SerializeField] GameObject overPanel;
    [SerializeField] private Image[] starsArray;            //array of stars
    [SerializeField] private Text levelStatusText;          //level status text
    [SerializeField] private Color lockColor, unlockColor;

    [SerializeField] StarCounter starCounter;


    // Check if the player has entered the collider
    private void OnTriggerEnter(Collider other)
    {
        // Check if the object entering the collider is tagged as "Player"
        if (other.CompareTag("Player"))
        {
            // Activate the specified GameObject
            //objectToActivate.SetActive(true);
            GameOver(starCounter.GetStarCount());
            overPanel.SetActive(true); 
        }
    }

    public void GameOver(int starCount)                     //method called by the buttons in the scene
        {
            if (starCount > 0)                                  //if start count is more than 0
            {    Debug.Log("Passed" + starCount);                                               //set the levelStatusText
                //levelStatusText.text = "Level " + (LevelSystemManager.Instance.CurrentLevel + 1) + " Complete";
                LevelSystemManager.Instance.LevelComplete(starCount);   //send the information to LevelSystemManager
            }
            else
            {
                 Debug.Log("Failed");                    //else only set the levelStatusText
                //levelStatusText.text = "Level " + (LevelSystemManager.Instance.CurrentLevel + 1) + " Failed";
            }
            SetStar(starCount);                                 //set the stars
            //overPanel.SetActive(true);                          //activate the over panel
        }

     private void SetStar(int starAchieved)
        {
            for (int i = 0; i < starsArray.Length; i++)             //loop through entire star array
            {
                /// <summary>
                /// if i is less than starAchieved
                /// Eg: if 2 stars are achieved we set the start at index 0 and 1 color to unlockColor, as array start from 0 element
                /// </summary>
                if (i < starAchieved)
                {
                    starsArray[i].color = unlockColor;              //set its color to unlockColor
                }
                else
                {
                    starsArray[i].color = lockColor;                //else set its color to lockColor
                }
            }
        }
}

