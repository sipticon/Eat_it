using System;
using UnityEngine;
using UnityEngine.UI;

public class EatObjects : MonoBehaviour
{
    [NonSerialized] public static float sliderScore;
    [SerializeField] private Slider slider;
    [SerializeField] private AudioClip nomSound, biteAndChewingSound, belchingSound, vomitSound;
    private GameObject destroyableGameObject;
    private AudioSource playerAudioSource;

    
    private void Start()
    {
        playerAudioSource = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        destroyableGameObject = collision.gameObject;
        switch (destroyableGameObject.tag)
        {
            case "Healthy food":
                sliderScore += 1;
                Score.nowScore += 2;
                playerAudioSource.clip = nomSound;
                break;
            case "Junk food":
                sliderScore += 5;
                Score.nowScore ++;
                playerAudioSource.clip = biteAndChewingSound;
                break;
            case "Pill":
                if (sliderScore >= 5)
                {
                    sliderScore -= 5;
                    playerAudioSource.clip = belchingSound;
                }
                break;
            case "Trash":
                sliderScore = slider.maxValue;
                playerAudioSource.clip = vomitSound;
                break;
        }
        if(PlayerPrefs.GetString("Sound") == "Play")
            playerAudioSource.Play();
        if(destroyableGameObject.tag != "Frame")
            Destroy(destroyableGameObject);
        slider.SetValueWithoutNotify(sliderScore);
    }
}