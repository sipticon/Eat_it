using UnityEngine;

public class PauseGame : MonoBehaviour
{
   [SerializeField] private Canvas gameCanvas, pauseCanvas;
   public void makePause()
   {
      Time.timeScale = 0f;
      gameCanvas.enabled = false;
      pauseCanvas.enabled = true;
   }
}