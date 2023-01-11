using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootControl : MonoBehaviour
{
    [SerializeField] GameObject shootPrefab;
    [Range(0f, 1f)]
    [SerializeField] float minScale = 1f;
    
    private float multiplyScale;
    private InputManager inputManager;

    private void Awake()
    {
        inputManager = FindObjectOfType<InputManager>(); 
        multiplyScale = transform.localScale.magnitude;
    }

    private void OnEnable() => inputManager.OnEndTouch += Shoot;
    private void OnDisable() => inputManager.OnEndTouch -= Shoot;

    private void Shoot(float time)
    {
        time /= 2;
        var shootBall = Instantiate(shootPrefab, transform.position, Quaternion.identity);
        var scaleSize = time * multiplyScale;

        //TODO Defeat
        //If tap is too long - defeat
        if (time > 1 || scaleSize > transform.localScale.magnitude) scaleSize = transform.localScale.magnitude;

        var scale = new Vector3(scaleSize, scaleSize, scaleSize);
        shootBall.transform.localScale = scale;

        transform.localScale -= scale / 2;

        //TODO Defeat
        if (transform.localScale.magnitude < minScale) transform.localScale = new Vector3(minScale, minScale, minScale);
    }
}
