using UnityEngine;

public class LevelGenerator : MonoBehaviour
{
    public GameObject[] tilePrefabs; // Array of tile prefabs to be used for generating the level
    public int numberOfTiles = 10; // Number of tiles to generate
    public float tileLength = 10f; // Length of each tile
    public Transform spawnPoint; // Spawn point for the first tile

    void Start()
    {
        GenerateLevel();
    }

    void GenerateLevel()
    {
        for (int i = 0; i < numberOfTiles; i++)
        {
            SpawnTile(i * tileLength);
        }
    }

    void SpawnTile(float spawnPositionX)
    {
        // Randomly select a tile prefab from the array
        GameObject tilePrefab = tilePrefabs[Random.Range(0, tilePrefabs.Length)];

        // Instantiate the selected tile at the specified position
        GameObject newTile = Instantiate(tilePrefab, new Vector3(spawnPositionX, 0f, 0f), Quaternion.identity);

        // Parent the new tile to this object (optional, for organization purposes)
        newTile.transform.parent = transform;
    }
}
