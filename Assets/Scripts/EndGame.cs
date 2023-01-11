using System.Collections;
using System.Collections.Generic;
using UnityEngine.UIElements;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;
using System;
using UnityEngine.SceneManagement;

public class EndGame : MonoBehaviour
{
    private Label label;
    private Button restartButton;
    private Button exitButton;

    private void Awake() => gameObject.SetActive(false);

    public void OpenEndScreen()
    {
        gameObject.SetActive(true);
        Time.timeScale = 0;

        var root = GetComponent<UIDocument>().rootVisualElement;

        restartButton = root.Q<Button>("RestartButton");
        exitButton = root.Q<Button>("ExitButton");
        label = root.Q<Label>("Label");

        restartButton.clicked += RestartButtonPressed;
        exitButton.clicked += ExitButtonPressed;
    }

    private void RestartButtonPressed() => SceneManager.LoadScene("Game");
    private void ExitButtonPressed() => Application.Quit();
}
