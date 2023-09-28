using UnityEngine;

public class CurrencyAddCollider : MonoBehaviour
{
    [SerializeField] private bool addCoins = true; // Option to add coins or diamonds
    [SerializeField] private int coinAmount = 1; // Amount of coins to add
    [SerializeField] private int diamondAmount = 1; // Amount of diamonds to add

    public int CoinAmount
    {
        get { return coinAmount; }
        set { coinAmount = value; }
    }

    public int DiamondAmount
    {
        get { return diamondAmount; }
        set { diamondAmount = value; }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            CurrencyManager currencyManager = CurrencyManager.Instance;

            if (currencyManager != null)
            {
                if (addCoins)
                {
                    // Add coins to the CurrencyManager
                    currencyManager.AddCoinCurrency(coinAmount);
                }
                else
                {
                    // Add diamonds to the CurrencyManager
                    currencyManager.AddDiamondCurrency(diamondAmount);
                }
            }

            // Destroy the trigger object
            Destroy(gameObject);
        }
    }
}
