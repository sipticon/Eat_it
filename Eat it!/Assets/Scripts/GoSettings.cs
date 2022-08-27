using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoSettings : MonoBehaviour
{
    public void goSettings()
    {
        Time.timeScale = 1f;
        StartCoroutine(openSettings());
    }

    IEnumerator openSettings()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Settings");
    }
}