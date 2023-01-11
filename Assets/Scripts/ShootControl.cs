using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootControl : MonoBehaviour
{
    [SerializeField] GameObject shootPrefab;
    [Range(0f, 1f)]
    [SerializeField] float minScale = 1f;
    [SerializeField] GameObject screen;

    private EndGame endGame;
    private float multiplyScale;
    private InputManager inputManager;

    private void Awake()
    {
        inputManager = FindObjectOfType<InputManager>(); 
        multiplyScale = transform.localScale.magnitude;
        endGame = screen.GetComponent<EndGame>();
    }

    private void FixedUpdate()
    {
        //Defeat
        if (transform.localScale.x < minScale)
        {
            transform.localScale = new Vector3(minScale, minScale, minScale);
            endGame.OpenEndScreen();
        }
    }

    private void OnEnable() => inputManager.OnEndTouch += Shoot;
    private void OnDisable() => inputManager.OnEndTouch -= Shoot;

    private void Shoot(float time)
    {
        time /= 2;
        var shootBall = Instantiate(shootPrefab, transform.position, Quaternion.identity);
        var scaleSize = time * multiplyScale;

        //If tap is too long - defeat
        if (time > 1)
        {
            if (scaleSize > transform.localScale.magnitude)
                endGame.OpenEndScreen();

            scaleSize = transform.localScale.magnitude;
        }

        var scale = new Vector3(scaleSize, scaleSize, scaleSize);
        shootBall.transform.localScale = scale;

        transform.localScale -= scale / 2;
    }
}
