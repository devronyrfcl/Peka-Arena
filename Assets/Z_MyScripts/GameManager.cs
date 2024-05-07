using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
}
