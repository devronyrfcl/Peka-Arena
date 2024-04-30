using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class LevelManager : MonoBehaviour
{
    public int LevelIndex;
    public GameObject loadingScreen;
    public UnityEngine.UI.Slider loadingSlider;

    void Start()
    {
        // Initialization code goes here
        Debug.Log("LevelManager: Start()");
    }

    void Update()
    {
        // Update code goes here
        Debug.Log("LevelManager: Update()");
    }

    public void SelectLevel()
    {
        PlayerPrefs.SetInt("LevelIndex", LevelIndex);
        PlayerPrefs.Save();
        Debug.Log("LevelManager: LevelIndex saved: " + LevelIndex);

        // Start the coroutine to load the scene with loading screen
        StartCoroutine(LoadSceneWithLoadingScreen("Platformer"));
    }

    IEnumerator LoadSceneWithLoadingScreen(string sceneName)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName);

        loadingScreen.SetActive(true);

        while (!asyncLoad.isDone)
        {
            float progress = Mathf.Clamp01(asyncLoad.progress / 0.9f);
            loadingSlider.value = progress;

            yield return null;
        }
    }
}
