using UnityEngine;
using Cinemachine;

public class SwitchLookAt : MonoBehaviour
{
    public Transform[] lookAtObjects; // Array of objects to look at
    private CinemachineVirtualCamera virtualCamera; // Reference to the Cinemachine Virtual Camera

    void Start()
    {
        virtualCamera = GetComponent<CinemachineVirtualCamera>(); // Get the Virtual Camera component
    }

    void Update()
    {
        // Iterate through each object in the array
        foreach(Transform obj in lookAtObjects)
        {
            // Check if the object is activated
            if (obj.gameObject.activeSelf)
            {
                // Set the activated object as the Look At target
                virtualCamera.LookAt = obj;
                break; // Exit the loop once the activated object is found
            }
        }
    }
}
