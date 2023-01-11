using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Tree : MonoBehaviour
{
    [SerializeField] Material hitMaterial;
    [SerializeField] ParticleSystem explosionPrefab;

    private MeshRenderer meshRenderer;
    private ParticleSystem explosion;
    public bool isInTriggerArea { get; set; } = false;
    private bool isEntered = true;

    private void Start()
    {
        meshRenderer = GetComponent<MeshRenderer>();
        AddExplosionPrefab();
    }

    private void FixedUpdate()
    {
        if (isInTriggerArea && isEntered)
        {
            meshRenderer.sharedMaterial = hitMaterial;

            StartCoroutine(DestroyAfterHit(gameObject));
            isInTriggerArea = false;
            isEntered = false; 
        }
    }

    IEnumerator DestroyAfterHit(GameObject go)
    {
        yield return new WaitForSeconds(Random.Range(1, 1.5f));

        meshRenderer.enabled = false;

        explosion = GetComponentInChildren<ParticleSystem>();
        explosion.Play();

        StartCoroutine(DestroyTree());
    }

    void AddExplosionPrefab()
    {
        var child = Instantiate(explosionPrefab, new Vector3(0, 4f, 0), Quaternion.Euler(0, Random.Range(0, 180), 0));
        child.transform.localScale = new Vector3(30, 30, 30);
        child.transform.SetParent(transform, false);
    }

    IEnumerator DestroyTree()
    {
        yield return new WaitUntil(() => !explosion.isPlaying);
        Destroy(gameObject);
    }
}
