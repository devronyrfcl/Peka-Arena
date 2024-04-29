using UnityEngine;

public class ObstacleMovement : MonoBehaviour
{
    public float moveDistance = 3f; // Distance the obstacle moves up and down
    public float moveSpeed = 2f; // Speed at which the obstacle moves
    private Vector3 startPosition; // The starting position of the obstacle

    private void Start()
    {
        // Store the starting position of the obstacle
        startPosition = transform.position;
    }

    private void Update()
    {
        // Calculate the target position for the obstacle to move to
        Vector3 targetPosition = startPosition + Vector3.up * moveDistance * Mathf.Sin(Time.time * moveSpeed);

        // Move the obstacle towards the target position
        transform.position = Vector3.MoveTowards(transform.position, targetPosition, Time.deltaTime * moveSpeed);
    }
}
