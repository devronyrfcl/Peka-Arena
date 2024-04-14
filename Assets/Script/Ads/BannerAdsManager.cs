using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public class BannerAdsManager : MonoBehaviour
{
    [SerializeField] string _androidAdUnitId = "banner_android";
    [SerializeField] string _iOSAdUnitId = "banner_ios";
    string _adUnitId;

    [SerializeField] BannerPosition _bannerPosition = BannerPosition.BOTTOM_CENTER;

    public bool _testMode = true; // Set to true to enable test mode

    void Start()
    {
        InitializeAdvertisement();

        // Call the ShowBannerAdAfterDelay method after 2 seconds
        //StartCoroutine(ShowBannerAdAfterDelay(2f));
    }

    void InitializeAdvertisement()
    {
        #if UNITY_IOS
            _adUnitId = _iOSAdUnitId;
        #elif UNITY_ANDROID
            _adUnitId = _androidAdUnitId;
        #endif

        Advertisement.Initialize("your_game_id", _testMode); // Replace "your_game_id" with your actual game ID

        Advertisement.Banner.SetPosition(_bannerPosition);
        Advertisement.Banner.Hide();
    }

    IEnumerator ShowBannerAdAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        ShowBannerAd();
    }

    public void ShowBannerAd()
    {
        // Since banner ads don't have an IsReady method, we assume it's ready if it's initialized
        Advertisement.Banner.Show(_adUnitId);
    }

    public void HideBannerAd()
    {
        Advertisement.Banner.Hide();
    }

    public void ToggleTestMode(bool enable)
    {
        _testMode = enable;
        Advertisement.Initialize("your_game_id", _testMode);
    }
}
