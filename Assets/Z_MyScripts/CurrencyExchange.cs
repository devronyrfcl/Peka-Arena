using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CurrencyExchange : MonoBehaviour
{
    [SerializeField] GameObject purchaseSuccessUI;
    [SerializeField] GameObject purchaseFailedUI;
    
    int coinAddAmount;
    
    public void Exchange(int diamondCutNum)
    {
        int currentDiamond = PlayerPrefs.GetInt("Diamond_Currency");
        int currentCoin = PlayerPrefs.GetInt("Coin_Currency");

        if(currentDiamond >= diamondCutNum)
        {
            PlayerPrefs.SetInt("Diamond_Currency",(currentDiamond - diamondCutNum));
            PlayerPrefs.SetInt("Coin_Currency", (currentCoin + coinAddAmount));
            CurrencyManager.Instance.UpdateCurrencyTexts();
            purchaseSuccessUI.SetActive(true);
        }
        else
        {
            purchaseFailedUI.SetActive(true);
        }

    }

    public void SetCoinAmount(int coinAmount)
    {
        coinAddAmount = coinAmount;
    }

    
}
