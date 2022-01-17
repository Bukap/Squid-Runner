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

    private GameManager gameManager;
    private UIManager uIManager;
    private AudioManager audioManager;

    void Awake()
    {
        gameManager = FindObjectOfType<GameManager>();

        itemDisplayer.GetComponent<Image>().sprite = itemOverview;
        normalPriceDisplay.text = normalPrice.ToString();
        premiumPriceDisplay.text = premiumPrice.ToString();
        CheckAndPicked.SetActive(false);
        CheckNormal.SetActive(false);
        CheckBackground.SetActive(false);
        uIManager = FindObjectOfType<UIManager>();
        audioManager = FindObjectOfType<AudioManager>();
    }
    void Start()
    {
        if (bought)
        {
            normalPriceDisplay.text = null;
            premiumPriceDisplay.text = null;
            normalCurrencyIcon.SetActive(false);
            premiumlCurrencyIcon.SetActive(false);
        }
        if (picked)
        {
            ItemReplacement();
        }
        gameManager.Victory();
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
            gameManager.SaveContent();
            audioManager.PlaySFX(audioManager.purchaseConfirmationSFX);
            return currency;
        }
        else
        {
            Debug.Log("BIEDAK!");
            return currency;
        }
    }

    public void buttonBindingNormal()
    {
        uIManager.displayConfirmation();
        uIManager.purchaseConfirmation.transform.Find("Confirm").GetComponent<Button>().onClick.AddListener(BuyItemNormal);
        uIManager.purchaseConfirmation.transform.Find("Deny").GetComponent<Button>().onClick.AddListener(destroyConfirmation);
    }

    public void buttonBindingPremium()
    {
        uIManager.displayConfirmation();
        uIManager.purchaseConfirmation.transform.Find("Confirm").GetComponent<Button>().onClick.AddListener(BuyItemPremium);
        uIManager.purchaseConfirmation.transform.Find("Deny").GetComponent<Button>().onClick.AddListener(destroyConfirmation);
    }

    private void destroyConfirmation()
    {
        uIManager.purchaseConfirmation.transform.Find("Confirm").GetComponent<Button>().onClick.RemoveAllListeners();
        uIManager.purchaseConfirmation.transform.Find("Deny").GetComponent<Button>().onClick.RemoveAllListeners();
        uIManager.hideConfirmation();
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
            if (transform.parent.name == "CharacterPage")
            {
                Destroy(gameManager.currentCharacter);
                gameManager.currentCharacter = Instantiate(item);
            }
            else if (transform.parent.name == "ArenaPage")
            {
                Destroy(gameManager.currentArena);
                gameManager.currentArena = Instantiate(item);
            }
            else if (transform.parent.name == "WatcherPage")
            {
                Destroy(gameManager.currentWatcher);
                gameManager.currentWatcher = Instantiate(item);
            }
        }
        else
        {
            Debug.Log("Najpierw Kup");
        }
    }
}
