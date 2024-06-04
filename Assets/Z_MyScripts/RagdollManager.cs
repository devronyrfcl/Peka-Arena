using StarterAssets;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class RagdollManager : MonoBehaviour
{

    public List<Collider> RagdollParts = new List<Collider>();
    public List<Rigidbody> RigidBodyParts = new List<Rigidbody>();

    public Animator animator;
    public Avatar animatorAvatar;
    new Rigidbody rigidbody;
    
    [SerializeField] ThirdPersonController thirdPersonController;
    [SerializeField] CapsuleCollider capsuleCollider;

    [SerializeField] UIVirtualJoystick joystick;

    private Transform hipsBone;

    // Start is called before the first frame update

    void Awake()
    {
        SetRagdollParts();
        
    }

    void Start()
    {
        animator = gameObject.GetComponent<Animator>();
        rigidbody = gameObject.GetComponent<Rigidbody>();
        thirdPersonController = gameObject.GetComponent<ThirdPersonController>();
        capsuleCollider = gameObject.GetComponent<CapsuleCollider>();
        //StartCoroutine(StartRagdoll());
        hipsBone = animator.GetBoneTransform(HumanBodyBones.Hips);
    }
    
    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision other)
    {
        //Debug.Log("Hit detected");
        if (other.gameObject.CompareTag("Obstacle"))
        {
            Debug.Log("Hit detected");
            TurnOnRagdoll();
            
        }
    }


    public void TurnOnRagdoll()
    {
        //capsuleCollider.enabled = false;
        
        rigidbody.isKinematic = true;
        animator.enabled = false;
        animator.avatar = null;
        foreach (Rigidbody rb in RigidBodyParts)
        {
            rb.isKinematic = false;
            rb.useGravity = true;
        }
        foreach (Collider collider in RagdollParts)
        {
            collider.enabled = true;
            collider.attachedRigidbody.velocity = Vector3.zero;
        }

        StartCoroutine(DiableCharacterController());
        StartCoroutine(TurnOffRagdollCor());
    }

    public void TurnOffRagdoll()
    {
        animator.enabled = true;
        animator.avatar = animatorAvatar;
        foreach (Rigidbody rb in RigidBodyParts)
        {
            rb.isKinematic = true;
            rb.useGravity = false;
        }
        foreach (Collider collider in RagdollParts)
        {
            collider.enabled = false;
        }

        rigidbody.isKinematic = false;
    }

    void SetRagdollParts()
    {
        Rigidbody[] rigidbodies = GetComponentsInChildren<Rigidbody>();
        foreach (Rigidbody rb in rigidbodies)
        {
            if(rb.gameObject != this.gameObject)
            {
                rb.isKinematic = true;
                rb.useGravity = false; // Disable physics
                RigidBodyParts.Add(rb);
            }
            

        }

        Collider[] colliders = this.gameObject.GetComponentsInChildren<Collider>();

        foreach (Collider collider in colliders)
        {
            if (collider.gameObject != this.gameObject)
            {
                collider.enabled = false;
                RagdollParts.Add(collider);
            } 
        }
    }

    private void AlignPositionToHips()
    {
        Vector3 originalHipPosition = hipsBone.position;
        transform.position = hipsBone.position;



        hipsBone.position = originalHipPosition;
    }

    IEnumerator StartRagdoll()
    {
        yield return new WaitForSeconds(0.5f);
        TurnOnRagdoll();
    }

    IEnumerator DiableCharacterController()
    {
        yield return new WaitForSeconds(0.2f);
        this.gameObject.GetComponent<CharacterController>().enabled = false;
        joystick.magnitudeMultiplier = 0;
        //thirdPersonController.enabled = false;
    }

    IEnumerator TurnOffRagdollCor()
    {
        yield return new WaitForSeconds(5f);
        AlignPositionToHips();
        TurnOffRagdoll();
        yield return new WaitForSeconds(0.2f);
        this.gameObject.GetComponent<CharacterController>().enabled = true;
        joystick.magnitudeMultiplier = 1;
    }
}
