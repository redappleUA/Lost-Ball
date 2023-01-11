using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Road : MonoBehaviour
{
    [SerializeField] GameObject player;

    void Update()
    {
        transform.localScale = new Vector3(283, .01f, player.transform.localScale.z);
    }
}
