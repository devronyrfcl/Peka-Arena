using UnityEngine;

public class DiamondPickup : MonoBehaviour
{
    public int diamondValue = 1; // Amount of diamonds to be added on pickup

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player")) // Make sure the player character has the "Player" tag
        {
            CurrencyManager.Instance.AddDiamondCurrency(diamondValue);
            Destroy(gameObject); // Destroy the pickup object after collecting
        }
    }
}
