
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckpointTrigger : MonoBehaviour
{
    public GameObject CheckpointCollectParticlePrefab; // Prefab of the particle system GameObject
    public GameObject checkpointMesh; // Reference to the star mesh GameObject to disable
    public AudioSource collectSound; // Reference to the AudioSource for the collect sound
    public StarCounter starCounter; // Reference to the StarCounter script

    private void OnTriggerEnter(Collider other)
    {
        // Check if the colliding object is tagged as "Player"
        if (other.CompareTag("Player"))
        {
            StarPlus(); // Call the StarPlus function
            DisablecheckpointMesh(); // Disable the star mesh GameObject
            PlayCollectSound(); // Play the collect sound
            SpawnParticle(); // Spawn the collect particle
            IncreaseStarCount(); // Increase the star count
        }
    }

    void StarPlus()
    {
        // Add your code here to increase stars or perform any other action
        Debug.Log("Star collected!");
    }

    void DisablecheckpointMesh()
    {
        // Disable the star mesh GameObject if it's assigned
        if (checkpointMesh != null)
        {
            checkpointMesh.SetActive(false);
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
        if (CheckpointCollectParticlePrefab != null)
        {
            Instantiate(CheckpointCollectParticlePrefab, transform.position, Quaternion.identity);
        }
        else
        {
            Debug.LogWarning("Collect particle prefab is not assigned!");
        }
    }

    void IncreaseStarCount()
    {
        // Increase star count using the StarCounter script
        if (starCounter != null)
        {
            starCounter.IncrementStarCount();
        }
        else
        {
            Debug.LogWarning("StarCounter script is not assigned!");
        }
    }
}

