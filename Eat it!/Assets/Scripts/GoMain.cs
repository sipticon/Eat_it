using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoMain : MonoBehaviour
{
    public void goMain()
    {
        StartCoroutine(openMain());
    }
    IEnumerator openMain()
    {
        yield return new WaitForSeconds(0.2f);
        SceneManager.LoadScene("Main");
    }
}