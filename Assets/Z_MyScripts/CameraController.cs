using UnityEngine;

public class CameraController : MonoBehaviour
{
    public Transform target;
    public Vector3 offset;

    void Start()
    {
        target = GameObject.FindGameObjectWithTag("Player").transform;
        //offset = transform.position - target.position;
    }

    void LateUpdate()
    {
        //Vector3 newPosition = new Vector3(transform.position.x, transform.position.y,target.position.z);
        transform.position = target.transform.position + offset ;//Vector3.Lerp(transform.position, newPosition, 0.2f);
    }
}
