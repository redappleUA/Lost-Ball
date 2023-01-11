using System;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManager : MonoBehaviour
{
    public delegate void StartTouchEvent(float time);
    public delegate void EndTouchEvent(float time);
    public event StartTouchEvent OnStartTouch;
    public event EndTouchEvent OnEndTouch;


    private Touch touchContorls;

    public void Awake()
    {
        touchContorls = new();
    }

    private void OnEnable()
    {
        touchContorls.Enable();
    }

    private void OnDisable()
    {
        touchContorls.Disable();
    }

    private void Start()
    {
        touchContorls.TouchControl.TouchPress.started += ctx => StartTouch(ctx);
        touchContorls.TouchControl.TouchPress.canceled += ctx => EndTouch(ctx);
    }

    private void StartTouch(InputAction.CallbackContext context)
    {
        OnStartTouch?.Invoke((float)context.startTime);
    }

    private void EndTouch(InputAction.CallbackContext context)
    {
        OnEndTouch?.Invoke((float)context.duration);
    }
}
