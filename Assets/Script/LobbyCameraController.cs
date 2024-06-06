using UnityEngine;

public class LobbyCameraController : MonoBehaviour
{
    public Transform character; // Reference to the character transform
    public Vector3 offset; // Offset of the camera from the character
    public float rotationSpeed = 0.2f; // Base speed of rotation
    public float sensitivity = 1.0f; // Sensitivity of the swipe input

    private Vector2 lastTouchPosition; // Store the last touch position
    private bool isSwiping = false; // Flag to indicate if the user is swiping

    void Start()
    {
        // Set initial offset based on current camera and character positions
        offset = transform.position - character.position;
    }

    void LateUpdate()
    {
        // Handle touch input for camera rotation
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            switch (touch.phase)
            {
                case TouchPhase.Began:
                    isSwiping = true;
                    lastTouchPosition = touch.position;
                    break;

                case TouchPhase.Moved:
                    if (isSwiping)
                    {
                        Vector2 delta = touch.deltaPosition;
                        RotateCamera(delta.x);
                    }
                    break;

                case TouchPhase.Ended:
                case TouchPhase.Canceled:
                    isSwiping = false;
                    break;
            }
        }

        // Update camera position and look at the character
        transform.position = character.position + offset;
        transform.LookAt(character);
    }

    void RotateCamera(float horizontalInput)
    {
        // Adjust rotation based on sensitivity
        float adjustedRotationSpeed = horizontalInput * rotationSpeed * sensitivity;

        // Handle camera rotation around the character
        Quaternion rotation = Quaternion.AngleAxis(adjustedRotationSpeed, Vector3.up);
        offset = rotation * offset;
    }
}
