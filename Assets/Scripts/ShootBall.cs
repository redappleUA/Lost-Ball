using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class ShootBall : MonoBehaviour
{
    [Range(6f, 30f)]
    [SerializeField] float moveSpeed = 9;

    private MeshRenderer meshRenderer;
    private ParticleSystem explosion;
    private bool isStopped = false;

    private void Start()
    {
        meshRenderer = GetComponent<MeshRenderer>();
        explosion = GetComponentInChildren<ParticleSystem>();
        explosion.gameObject.transform.localScale = gameObject.transform.localScale * 3;
    }

    void Update()
    {
        transform.Translate(moveSpeed * Time.deltaTime * transform.right);
    }

    private void OnCollisionEnter(Collision collision)
    {
        moveSpeed = 0;
        isStopped = true;
        meshRenderer.enabled = false;
        explosion.Play();
        StartCoroutine(DestroyBall());
    }

    private void OnTriggerStay(Collider other)
    {
        if (isStopped)
        {
            if (other.CompareTag("Tree"))
            {
                other.GetComponent<Tree>().isInTriggerArea = true;
            }
        }  
    }

    IEnumerator DestroyBall()
    {
        yield return new WaitUntil(() => !explosion.isPlaying);
        Destroy(gameObject);
    }
}
