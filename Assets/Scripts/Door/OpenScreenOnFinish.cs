using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenScreenOnFinish : MonoBehaviour
{
    [SerializeField] GameObject screen;

    private EndGame endGame;
    private void Awake() => endGame = screen.GetComponent<EndGame>();

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            endGame.OpenEndScreen();
        }
    }
}
