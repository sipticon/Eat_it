using UnityEngine;
using UnityEngine.UI;

public class SoundOnOff : MonoBehaviour
{
    [SerializeField] private bool isSoundOnOffButton;
    private bool isPlay = true;
    private AudioSource musicAudioSource;
    private Text onOffText;
    private string playerPrefs;

    private void Awake()
    {
        if (isSoundOnOffButton)
            playerPrefs = "Sound";
        else
            playerPrefs = "Music";
        }

    private void Start()
    {
        onOffText = GetComponentInChildren<Text>();
        musicAudioSource = GameObject.Find("BackgroundMusic(Clone)").GetComponent<AudioSource>();
        if (PlayerPrefs.GetString(playerPrefs) == "Pause")
        {
            isPlay = false;
            onOffText.text = "On";
        }
    }

    public void soundOnOff()
    {
        if (isPlay)
        {
            PlayerPrefs.SetString(playerPrefs, "Pause");
            musicAudioSource.Pause();
            onOffText.text = "On";
        }
        else
        {
            PlayerPrefs.SetString(playerPrefs, "Play");
            if(PlayerPrefs.GetString("Music") == "Play" && PlayerPrefs.GetString("Sound") == "Play")
            musicAudioSource.Play();
            onOffText.text = "Off";
        }
        isPlay = !isPlay;
    }
}