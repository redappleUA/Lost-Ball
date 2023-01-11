using UnityEditorInternal;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    [Range(0f, 6f)]
    [SerializeField] float moveSpeed = 4f;

    private Rigidbody rb;

    private void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        Vector3 velocity = rb.velocity;
        velocity.x = moveSpeed;
        rb.velocity = velocity;
    }
}
