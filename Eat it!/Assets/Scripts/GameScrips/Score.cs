using System;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    [NonSerialized] public static int nowScore;
    [SerializeField] private Text scoreText;
    
    private void Update()
    {
        PlayerPrefs.SetInt("Score", nowScore);
        scoreText.text = "Score: <color=#FF0000>" + nowScore + "</color>";
    }
}