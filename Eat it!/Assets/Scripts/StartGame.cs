using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour
{
    public void startGame()
    {
        PlayerPrefs.SetString("Lose","No");
        StartCoroutine(openGame());
        Score.nowScore = 0;
        EatObjects.sliderScore = 0;
    }
    IEnumerator openGame()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Game");
    }
}