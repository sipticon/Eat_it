using UnityEngine;

public class IsScoreTheBest : MonoBehaviour
{
    private int nowScore, theBestScore;

    private void Update()
    {
        nowScore = PlayerPrefs.GetInt("Score");
        theBestScore = PlayerPrefs.GetInt("TheBestScore");
        if ( theBestScore <= nowScore)
            PlayerPrefs.SetInt("TheBestScore", nowScore);
    }
}