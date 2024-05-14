using UnityEngine;
using TMPro;

public class CurrencyDisplay : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI coinCurrencyText;
    [SerializeField] private TextMeshProUGUI diamondCurrencyText;

    private void Start()
    {
        UpdateCurrencyTexts();
        CurrencyManager.Instance.OnCoinCurrencyChanged += UpdateCoinCurrencyText;
        CurrencyManager.Instance.OnDiamondCurrencyChanged += UpdateDiamondCurrencyText;
    }

    private void UpdateCurrencyTexts()
    {
        coinCurrencyText.text = CurrencyManager.Instance.CurrentCoinCurrency.ToString();
        diamondCurrencyText.text = CurrencyManager.Instance.CurrentDiamondCurrency.ToString();
    }

    private void UpdateCoinCurrencyText(int newAmount)
    {
        coinCurrencyText.text = newAmount.ToString();
    }

    private void UpdateDiamondCurrencyText(int newAmount)
    {
        diamondCurrencyText.text = newAmount.ToString();
    }

    private void OnDestroy()
    {
        //CurrencyManager.Instance.OnCoinCurrencyChanged -= UpdateCoinCurrencyText;
       // CurrencyManager.Instance.OnDiamondCurrencyChanged -= UpdateDiamondCurrencyText;
    }
}
