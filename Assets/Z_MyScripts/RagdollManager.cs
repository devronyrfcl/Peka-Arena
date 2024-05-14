using System.Collections;
using System.Collections.Generic;
using StarterAssets;
using UnityEngine;

public class RagdollManager : MonoBehaviour
{

    public List<Collider> RagdollParts = new List<Collider>();

    public Animator animator;
    new Rigidbody rigidbody;
    
    [SerializeField] ThirdPersonController thirdPersonController;
    [SerializeField] CapsuleCollider capsuleCollider;
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
        //thirdPersonController.enabled = false;
        //rigidbody.isKinematic = true;
        //this.gameObject.GetComponent<CharacterController>().enabled = false;
        animator.enabled = false;
        animator.avatar = null;
        foreach (Collider collider in RagdollParts)
        {
            collider.isTrigger = false;
            collider.attachedRigidbody.velocity = Vector3.zero;
        }
    }

    void SetRagdollParts()
    {
        Collider[] colliders= this.gameObject.GetComponentsInChildren<Collider>();

        foreach (Collider collider in colliders){
            if (collider.gameObject != this.gameObject)
            {
                collider.isTrigger = true;
                RagdollParts.Add(collider);
            } 
        }
    }

    IEnumerator StartRagdoll()
    {
        yield return new WaitForSeconds(5);
        TurnOnRagdoll();
    }
}
