using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorController : MonoBehaviour
{
    [SerializeField] GameObject rump;
    [SerializeField] GameObject gate;

    private bool isOpened = false;
    private int i = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && !isOpened)
        {
            isOpened = true;
            StartCoroutine(Open());
            i++;
            Debug.Log(i);
        }
    }

    IEnumerator Open()
    {
        gate.GetComponent<DoorRamp>().Open();
        AnimatorStateInfo stateInfo = gate.GetComponent<DoorRamp>().animator.GetCurrentAnimatorStateInfo(0);
        yield return new WaitUntil(() => stateInfo.normalizedTime >= 1);
        //animation has ended

        rump.GetComponent<DoorRamp>().Open();
        stateInfo = rump.GetComponent<DoorRamp>().animator.GetCurrentAnimatorStateInfo(0);
        yield return new WaitUntil(() => stateInfo.normalizedTime >= 1);
        //animation has ended
    }
}
