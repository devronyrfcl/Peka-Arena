using UnityEngine;
using System.Collections; // Added using directive for IEnumerator

public class TileGlitch : MonoBehaviour
{
    public GameObject[] tiles; // Array of tiles to glitch
    public float glitchInterval = 0.5f; // Time interval between glitches
    private bool isGlitching = false;

    private void Start()
    {
        // Start the glitching coroutine
        StartCoroutine(GlitchCoroutine());
    }

    private System.Collections.IEnumerator GlitchCoroutine()
    {
        while (true)
        {
            yield return new WaitForSeconds(glitchInterval);

            // Perform the glitch
            DoGlitch();

            yield return new WaitForSeconds(2f); // Wait for 1 second

            // Reset the glitch
            ResetGlitch();
        }
    }

    private void DoGlitch()
    {
        // Disable two random tiles
        for (int i = 0; i < 3; i++)
        {
            int randomIndex = Random.Range(0, tiles.Length);
            tiles[randomIndex].SetActive(false);
        }
    }

    private void ResetGlitch()
    {
        // Enable all tiles
        foreach (GameObject tile in tiles)
        {
            tile.SetActive(true);
        }
    }
}
