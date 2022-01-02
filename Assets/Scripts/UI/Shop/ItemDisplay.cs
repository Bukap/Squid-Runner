using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ItemDisplay : MonoBehaviour
{
    [SerializeField] public GameObject item;
    [SerializeField] private GameObject itemDisplayer;
    [SerializeField] private Sprite itemOverview;

    [SerializeField] private int normalPrice;
    [SerializeField] private int premiumPrice;

    [SerializeField] private Text normalPriceDisplay;
    [SerializeField] private Text premiumPriceDisplay;

    [SerializeField] public bool bought;
    [SerializeField] public bool picked;

    [SerializeField] protected GameObject CheckNormal;
    [SerializeField] protected GameObject CheckAndPicked;
    [SerializeField] protected GameObject CheckBackground;

    [SerializeField] private GameObject normalCurrencyIcon;
    [SerializeField] private GameObject premiumlCurrencyIcon;

    [SerializeField] private GameObject purchaseConfirmation;
    [SerializeField] private GameObject purchaseConfirmationDisplay;

    private GameManager gameManager;
    private GameObject canvas;

    void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();
    }
    void Start()
    {
        itemDisplayer.GetComponent<Image>().sprite = itemOverview;
        normalPriceDisplay.text = normalPrice.ToString();
        premiumPriceDisplay.text = premiumPrice.ToString();
        CheckAndPicked.SetActive(false);
        CheckNormal.SetActive(false);
        CheckBackground.SetActive(false);
        canvas = FindObjectOfType<Canvas>().gameObject;

        if (bought)
        {
            normalPriceDisplay.text = null;
            premiumPriceDisplay.text = null;
        }
    }

    void FixedUpdate()
    {
        if (bought)
        {
            CheckBackground.SetActive(true);
            if (gameManager.currentArena.name == item.name + "(Clone)" || gameManager.currentBall.name == item.name + "(Clone)" || gameManager.currentCharacter.name == item.name + "(Clone)" || gameManager.currentWatcher.name == item.name + "(Clone)")
            {
                CheckAndPicked.SetActive(true);
                CheckNormal.SetActive(false);
                picked = true;
            }
            else
            {
                CheckAndPicked.SetActive(false);
                CheckNormal.SetActive(true);
                picked = false;
            }

        }
        else
        {
            CheckBackground.SetActive(false);
            CheckAndPicked.SetActive(false);
            CheckNormal.SetActive(false);
        }
    }

    private int BuyItem(int currency, int price) 
    {
        if (currency >= price)
        {
            currency -= price;           
            bought = true;
            normalPriceDisplay.text = null;
            premiumPriceDisplay.text = null;
            normalCurrencyIcon.SetActive(false);
            premiumlCurrencyIcon.SetActive(false);

            return currency;
        }
        else
        {
            Debug.Log("BIEDAK!");
            return currency;
        }
    }

    public void ConfirmPurchase()
    {
        if (purchaseConfirmationDisplay == null)
        {
            purchaseConfirmationDisplay = Instantiate(purchaseConfirmation, this.transform);
        }

    }

    public void buttonBindingNormal()
    {
        purchaseConfirmation.transform.Find("Confirm").GetComponent<Button>().onClick.AddListener(delegate { BuyItemNormal(); });
        purchaseConfirmation.transform.Find("Deny").GetComponent<Button>().onClick.AddListener(delegate { destroyConfirmation(); });
    }

    public void buttonBindingPremium()
    {
        purchaseConfirmation.transform.Find("Confirm").GetComponent<Button>().onClick.AddListener(() => { BuyItemPremium(); });
        purchaseConfirmation.transform.Find("Deny").GetComponent<Button>().onClick.AddListener(delegate { destroyConfirmation(); });
    }

    private void destroyConfirmation()
    {
        Destroy(purchaseConfirmationDisplay);
    }

    public void BuyItemPremium()        //Buys the item for premium currency
    {
        if (!bought)
        {
            gameManager.PremiumCurrency = BuyItem(gameManager.PremiumCurrency, premiumPrice);
            destroyConfirmation();
        }
        else
            Debug.Log("Posiadane");
    }
    public void BuyItemNormal()         //Buys the item for in game currency
    {
        if (!bought)
        {
            gameManager.NormalCurrency = BuyItem(gameManager.NormalCurrency, normalPrice);
            destroyConfirmation();
        }
        else
            Debug.Log("Posiadane");
    }

    public void ItemReplacement()
    {
        if (bought)
        {
            if (transform.parent.parent.name == "CharacterPage")
            {
                Destroy(gameManager.currentCharacter);
                gameManager.currentCharacter = Instantiate(item);
            }
            else if (transform.parent.parent.name == "ArenaPage")
            {
                Destroy(gameManager.currentArena);
                gameManager.currentArena = Instantiate(item);
            }
            else if (transform.parent.parent.name == "WatcherPage")
            {
                Destroy(gameManager.currentWatcher);
                gameManager.currentWatcher = Instantiate(item);
            }
            else if (transform.parent.parent.name == "BallPage")
            {
                gameManager.currentBall = item;
            }
        }
        else
        {
            Debug.Log("Najpierw Kup");
        }
    }
}
