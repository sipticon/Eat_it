using UnityEngine;

public class ContinueGame : MonoBehaviour
{
    [SerializeField] private Canvas gameCanvas, pauseCanvas;
    public void continueGame()
    {
        Time.timeScale = 1f;
        gameCanvas.enabled = true;
        pauseCanvas.enabled = false;
    }
}