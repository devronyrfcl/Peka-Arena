using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using StarterAssets;

public class CheckPointManager : MonoBehaviour
{
    [SerializeField] GameObject[] checkPoints;

    private Transform playerTransform;

    private ThirdPersonController thirdPersonController;

    // Start is called before the first frame update
    void Start()
    {
        playerTransform = GameObject.FindWithTag("Player").transform;
        thirdPersonController = playerTransform.GetComponent<ThirdPersonController>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Respawn()
    {
        //GameManager.GameManager.checkPointNum 
        if(GameManager.Instance.checkPointNum != 0)
        {
            //Debug.Log(GameManager.Instance.checkPointNum);
           // Debug.Log(checkPoints[GameManager.Instance.checkPointNum - 1].transform.position);

            StartCoroutine(PlayerPositionChange());
            Time.timeScale = 1;

        }
    }

    IEnumerator PlayerPositionChange()
    {
        thirdPersonController.enabled = false;
        playerTransform.position = checkPoints[GameManager.Instance.checkPointNum - 1].transform.position;
        yield return new WaitForSeconds(2f);
        thirdPersonController.enabled = true;
    }
}
