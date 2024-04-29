using UnityEngine;

public class RotatingObject : MonoBehaviour
{
    public enum RotationAxis
    {
        Horizontal,
        Vertical
    }

    public RotationAxis rotationAxis;
    public float rotationSpeed = 30f; // Default rotation speed in degrees per second

    private void Start()
    {
        StartRotation();
    }

    private void StartRotation()
    {
        // Start rotating immediately
        //Debug.Log("Rotation started");
    }

    private void Update()
    {
        Rotate(Time.deltaTime);
    }

    private void Rotate(float deltaTime)
    {
        // Calculate the rotation angle based on time and selected rotation axis
        float rotationAngle = rotationSpeed * deltaTime;

        // Perform the rotation based on the selected axis
        switch (rotationAxis)
        {
            case RotationAxis.Horizontal:
                transform.Rotate(Vector3.up, rotationAngle);
                break;
            case RotationAxis.Vertical:
                transform.Rotate(Vector3.right, rotationAngle);
                break;
            default:
                break;
        }
    }
}
