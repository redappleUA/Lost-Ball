using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    [Range(0f, 6f)]
    [SerializeField] float moveSpeed = 4f;
    [SerializeField] GameObject screen;

    private EndGame endGame;
    private Rigidbody rb;

    private void Start()
    {
        Time.timeScale = 1;
        rb = GetComponent<Rigidbody>();
        endGame = screen.GetComponent<EndGame>();
    }

    private void Update()
    {
        Vector3 velocity = rb.velocity;
        velocity.x = moveSpeed;
        rb.velocity = velocity;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Tree"))
        {
            endGame.OpenEndScreen();
        }
    }
}
