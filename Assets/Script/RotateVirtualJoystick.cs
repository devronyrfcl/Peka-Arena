using UnityEngine;
using UnityEngine.UI;

public class RotateVirtualJoystick : MonoBehaviour
{
    void Start()
    {
        // Find all UI images with the tag "VirtualJoystick"
        GameObject[] virtualJoysticks = GameObject.FindGameObjectsWithTag("VirtualJoystick");

        // Loop through each found object and rotate it
        foreach (GameObject joystick in virtualJoysticks)
        {
            // Get the RectTransform component of the UI image
            RectTransform rectTransform = joystick.GetComponent<RectTransform>();

            // Check if RectTransform is not null and rotate it
            if (rectTransform != null)
            {
                rectTransform.rotation = Quaternion.Euler(0f, 0f, 90f); // Set Z rotation to 90 degrees
            }
            else
            {
                Debug.LogWarning("No RectTransform component found on object tagged 'VirtualJoystick'");
            }
        }
    }
}
