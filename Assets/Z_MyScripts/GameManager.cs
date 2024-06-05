using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private GameObject player;
    [SerializeField] GameObject gameOverScreen;

    public static GameManager Instance;

    public int checkPointNum;
    
    void Awake()
    {
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        Time.timeScale = 1;
        checkPointNum = 0;
        player = GameObject.FindWithTag("Player");
    }

    // Update is called once per frame
    void Update()
    {
        /*if(player.transform.position.y <= -5 )
        {
            GameOver();
        }*/
    }

    public void GameOver()
    {
        //Debug.Log("GameOver");
        gameOverScreen.SetActive(true);
        Time.timeScale = 0;
    }

    public void GoToMainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void RestartGame()
    {
        // Get the current active scene and reload it
        Scene currentScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(currentScene.name);
    }
}
