using UnityEngine;

public class TriggerActivation : MonoBehaviour
{
    // The GameObject to activate when the player enters the collider
    public GameObject objectToActivate;

    // Check if the player has entered the collider
    private void OnTriggerEnter(Collider other)
    {
        // Check if the object entering the collider is tagged as "Player"
        if (other.CompareTag("Player"))
        {
            // Activate the specified GameObject
            objectToActivate.SetActive(true);
        }
    }
}
