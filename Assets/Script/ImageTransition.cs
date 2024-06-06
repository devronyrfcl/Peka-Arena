using UnityEngine;
using UnityEngine.UI;

public class ImageTransition : MonoBehaviour
{
    public Image frontImage;
    public Image backImage;
    public Sprite[] sprites;
    public float transitionDuration = 3f; // Time between image transitions
    public float fadeDuration = 1f; // Time taken to fade in/out

    private int currentIndex = 0;

    private void Start()
    {
        if (sprites.Length > 0)
        {
            frontImage.sprite = sprites[currentIndex];
            currentIndex++;
            StartCoroutine(TransitionImages());
        }
        else
        {
            Debug.LogError("No sprites assigned!");
        }
    }

    private System.Collections.IEnumerator TransitionImages()
    {
        while (true)
        {
            yield return new WaitForSecondsRealtime(transitionDuration);

            // Fade out current image
            yield return FadeImage(frontImage, 0f, fadeDuration);

            // Transition to next image
            if (currentIndex >= sprites.Length)
            {
                currentIndex = 0;
            }
            backImage.sprite = sprites[currentIndex];
            currentIndex++;

            // Fade in next image
            yield return FadeImage(backImage, 1f, fadeDuration);

            // Swap front and back images
            Image temp = frontImage;
            frontImage = backImage;
            backImage = temp;
        }
    }

    private System.Collections.IEnumerator FadeImage(Image targetImage, float targetAlpha, float duration)
    {
        float startAlpha = targetImage.canvasRenderer.GetAlpha();
        float time = 0f;

        while (time < duration)
        {
            float alpha = Mathf.Lerp(startAlpha, targetAlpha, time / duration);
            targetImage.canvasRenderer.SetAlpha(alpha);
            time += Time.deltaTime;
            yield return null;
        }

        targetImage.canvasRenderer.SetAlpha(targetAlpha);
    }
}
