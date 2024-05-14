using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TimerOfContinueMenu : MonoBehaviour
{
    public static TimerOfContinueMenu Instance;

    public Slider timeSlider;
    public GameObject continueMenu;
    public GameObject gameOverPanel;

    [SerializeField] StarCounter starCounter;

    //public MyInterstitial myInterstitial;

    public bool timerActive;

    float currentTime;
    public int startSeconds = 3;
    public TMP_Text currentTimeText;

    private void Awake()
    {
        if(Instance == null)
        {
            Instance = this;
        }
    }

    private void Start()
    {

        timerActive = true;
        currentTime = startSeconds;
        //Debug.Log("Start of Continue timer!");
        
    }
    private void Update()
    {
        if(timerActive == true)
        {
            if (currentTime <= 1)
            {
                StopTimer();
            }
            currentTime = currentTime - Time.deltaTime;
            timeSlider.value = currentTime;
            currentTimeText.text = currentTime.ToString("0");
            if(timeSlider.value == 1)
            {
                Debug.Log("game over");
                gameOverPanel.SetActive(true);
                Time.timeScale = 0;
                
                
                // Actual game over           // Adding the coins actually when our gameover pane is activated
                //TriggerActivation.Instance.GameOver(starCounter.GetStarCount());

                //Showing the interstitial ad
                //InterstitialAdInGame.Instance.ShowAd();
            }
        }


    }
    
    /*void OnEnable()
    {
        StartTimer();
        Debug.Log("Time On");
    }*/

    public void StartTimer()
    {
        timerActive = true;
    }
    public void StopTimer()
    {
        timerActive = false;
        currentTime = startSeconds;
        continueMenu.SetActive(false);

    }
    public void OnDisable()
    {
        currentTime = startSeconds;
    }

}
