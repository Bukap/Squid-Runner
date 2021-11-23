using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ItemDisplay : MonoBehaviour
{
    [SerializeField] private Sprite itemOverview;

    [SerializeField] private int normalPrice;
    [SerializeField] private int premiumPrice;

    [SerializeField] private Text normalPriceDisplay;
    [SerializeField] private Text premiumPriceDisplay;

    [SerializeField] private bool bought;
    [SerializeField] private bool usedCurrently;

    [SerializeField] protected GameObject Check;
    [SerializeField] protected GameObject Cross;

    [SerializeField] private GameObject Locked;
    [SerializeField] private GameObject Unlocked;

    private GameManager gameManager;

    void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
    }
    void Start()
    {
        this.gameObject.GetComponent<Image>().sprite = itemOverview;
        normalPriceDisplay.text = normalPrice.ToString();
        premiumPriceDisplay.text = premiumPrice.ToString();
        Unlocked.SetActive(false);
        Check.SetActive(false);
    }

    private int BuyItem(int currency, int price) 
    {
        if (currency >= price)
        {
            currency -= price;           
            bought = true;
            normalPriceDisplay.text = null;
            premiumPriceDisplay.text = null;
            Unlocked.SetActive(true);
            Locked.SetActive(false);
            return currency;
        }
        else
        {
            Debug.Log("BIEDAK!");
            return currency;
        }
    }

    public void BuyItemPremium()        //Buys the item for premium currency
    {
        if(!bought)
            gameManager.PremiumCurrency = BuyItem(gameManager.PremiumCurrency, premiumPrice);
        else
            Debug.Log("Posiadane");
    }
    public void BuyItemNormal()         //Buys the item for in game currency
    {
        if (!bought)
            gameManager.NormalCurrency = BuyItem(gameManager.NormalCurrency, normalPrice);
        else
            Debug.Log("Posiadane");
    }

    private void itemReplacement()
    {
        if(transform.parent.parent.name == "CharacterPage")
        {

        }
        else if(transform.parent.parent.name == "ArenaPage")
        {

        }
        else if (transform.parent.parent.name == "WatcherPage")
        {

        }
        else if (transform.parent.parent.name == "BallPage")
        {

        }
    }
}
