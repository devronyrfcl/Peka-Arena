using UnityEngine;

public class CoinPickup : MonoBehaviour
{
    public int coinValue = 1; // Amount of coins to be added on pickup

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player")) // Make sure the player character has the "Player" tag
        {
            CurrencyManager.Instance.AddCoinCurrency(coinValue);
            Destroy(gameObject); // Destroy the pickup object after collecting
        }
    }
}
