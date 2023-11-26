using UnityEngine;

public class FPSController : MonoBehaviour
{
    // Set the target frame rate
    public int targetFPS = 60;

    void Start()
    {
        // Lock the frame rate to the specified value
        Application.targetFrameRate = targetFPS;
    }
}
