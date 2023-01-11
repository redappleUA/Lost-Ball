using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorRamp : MonoBehaviour
{
    public Animator animator { get; private set; }

    private void Start()
    {
        animator = GetComponent<Animator>();
    }
    public void Open()
    {
        animator.SetTrigger("Open");
        Debug.Log("triggered");
    }
}
