using GoogleMobileAds.Api;
using UnityEngine;

public class InterAd : MonoBehaviour
{
    private InterstitialAd interstitialAd;
    private string interstitialUnitId = "ca-app-pub-3294866485300695/1711760977";

    private void OnEnable()
    {
        interstitialAd = new InterstitialAd(interstitialUnitId);
        AdRequest adRequest = new AdRequest.Builder().Build();
        interstitialAd.LoadAd(adRequest);
    }

    public void ShowAd()
    {
        if(interstitialAd.IsLoaded())
            interstitialAd.Show();
    }
}