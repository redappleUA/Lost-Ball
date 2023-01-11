using UnityEngine;

public class DestroyWithChance : MonoBehaviour
{
    [Range(0f, 1f)]
    [SerializeField] private float ChanceOfStaying = 0.5f;

    private void Start()
    {
        if (Random.value < ChanceOfStaying) Destroy(gameObject);
    }
}
