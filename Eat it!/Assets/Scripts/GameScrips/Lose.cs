using UnityEngine;
using UnityEngine.UI;

public class Lose : MonoBehaviour
{
    [SerializeField] private GameObject gameCanvas, loseCanvas, spawnPosition, player;
    [SerializeField] private Text nowScore, theBestScore;
    private bool isLost;
    private InterAd interAd;
    private int countLoses;

    private void Start()
    {
        countLoses = PlayerPrefs.GetInt("CountLoses");
        interAd = GetComponent<InterAd>();
    }

    private void Update()
    {
        if (PlayerPrefs.GetString("Lose") == "Yes" && !isLost)
        {
            countLoses++;
            PlayerPrefs.SetInt("CountLoses",countLoses);
            if(countLoses % 5 == 0)
                interAd.ShowAd();
            gameCanvas.GetComponent<Canvas>().enabled = false;
            spawnPosition.SetActive(false);
            loseCanvas.GetComponent<Canvas>().enabled =true ;
            player.GetComponent<Collider>().enabled = false;
            player.GetComponent<PlayerMovement>().enabled = false;
            player.GetComponent<EatObjects>().enabled = false;
            nowScore.text = "Your score for now: \n <color=#FF0000>" + PlayerPrefs.GetInt("Score") +"</color>" ;
            theBestScore.text = "The best score: \n<color=#FF0000>" + PlayerPrefs.GetInt("TheBestScore") +"</color>" ;
            isLost = true;
        }
    }
}