using UnityEngine;

public class CheckPointTrigger : MonoBehaviour
{
    public GameObject checkPointParticle; // Prefab of the particle system GameObject
    public GameObject chechPointMesh; // Reference to the star mesh GameObject to disable
    public AudioSource collectSound; // Reference to the AudioSource for the collect sound

    private void OnTriggerEnter(Collider other)
    {
        // Check if the colliding object is tagged as "Player"
        if (other.CompareTag("Player"))
        {
            DisableChechPointMesh(); // Disable the star mesh GameObject
            PlayCollectSound(); // Play the collect sound
            SpawnParticle();
            IncreaseCheckPointNum(); // Spawn the collect particle
        }
    }


    public void IncreaseCheckPointNum()
    {
        GameManager.Instance.checkPointNum += 1;
    }


    void DisableChechPointMesh()
    {
        // Disable the star mesh GameObject if it's assigned
        if (chechPointMesh != null)
        {
            chechPointMesh.SetActive(false);
        }
        else
        {
            Debug.LogWarning("Star mesh GameObject is not assigned!");
        }
    }

    void PlayCollectSound()
    {
        // Play the collect sound if it's assigned
        if (collectSound != null)
        {
            collectSound.Play();
        }
        else
        {
            Debug.LogWarning("Collect sound AudioSource is not assigned!");
        }
    }

    void SpawnParticle()
    {
        // Spawn the collect particle if it's assigned
        if (checkPointParticle != null)
        {
            Instantiate(checkPointParticle, transform.position, Quaternion.identity);
        }
        else
        {
            Debug.LogWarning("Collect particle prefab is not assigned!");
        }
    }
}
