using UnityEngine;

public class RespawnFunction : MonoBehaviour
{
    public GameObject[] CheckPointManagers;
    public GameObject SelectedCheckPointManager;

    // Start is called before the first frame update
    void Start()
    {
        // Check which CheckPointManager is active and set it as the SelectedCheckPointManager
        foreach (GameObject manager in CheckPointManagers)
        {
            if (manager.activeInHierarchy)
            {
                SelectedCheckPointManager = manager;
                break;
            }
        }
    }

    // This function will be used to respawn the player
    public void RespawnPlayer()
    {
        if (SelectedCheckPointManager != null)
        {
            // Call the Respawn function from the activated SelectedCheckPointManager
            SelectedCheckPointManager.GetComponent<CheckPointManager>().Respawn();
        }
        else
        {
            Debug.LogWarning("No CheckPointManager is active!");
        }
    }
}
