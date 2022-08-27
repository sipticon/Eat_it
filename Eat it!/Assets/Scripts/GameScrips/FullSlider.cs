using UnityEngine;
using UnityEngine.UI;

public class FullSlider : MonoBehaviour
{
    private Slider slider;

    private void Awake()
    {
        slider = GetComponent<Slider>();
    }

    private void Update()
    {
        if(slider.value == slider.maxValue)
            PlayerPrefs.SetString("Lose", "Yes");
    }
}