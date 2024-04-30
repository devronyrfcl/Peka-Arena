using UnityEngine;

public class CameraFollow2 : MonoBehaviour
{
    [Header("Player Target")]
    public Transform target; // Only one target for 3rd person camera

    [Header("Follow Settings")]
    public float distanceToTarget = 10f; // The distance to the target
    public float heightOffset = 2f; // the height offset of the camera relative to its target
    public float rotationSpeed = 5f; // Speed of camera rotation
    public Vector3 additionalOffset; // Any additional offset

    private Vector3 cameraOffset;

    void Start()
    {
        cameraOffset = transform.position - target.position; // Initialize camera offset
    }

    void LateUpdate()
    {
        if (target == null)
            return;

        // Calculate desired rotation
        Quaternion targetRotation = Quaternion.Euler(0, target.eulerAngles.y, 0);

        // Apply rotation smoothly
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, rotationSpeed * Time.deltaTime);

        // Calculate desired position
        Vector3 targetPosition = target.position - target.forward * distanceToTarget + Vector3.up * heightOffset;

        // Apply position smoothly
        transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime);

        // Apply additional offset
        transform.position += target.TransformDirection(additionalOffset);
    }

    // Function to set the target for the camera
    public void SetTarget(Transform newTarget)
    {
        target = newTarget;
        cameraOffset = transform.position - target.position; // Update camera offset when changing targets
    }
}
