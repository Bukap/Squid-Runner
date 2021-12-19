using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    private GameManager gameManager;
    private ScoreManager scoreManager;
    private CharacterControl characterControl;
    
    #region UIobjects
    [SerializeField] private GameObject gameCurrency;
    [SerializeField] private GameObject premiumCurrency;
    [SerializeField] private GameObject currentCurrency;
    [SerializeField] private GameObject playButton;
    [SerializeField] private GameObject replayForMore;
    [SerializeField] private GameObject optionsButton;
    [SerializeField] private GameObject shopButton;
    [SerializeField] private GameObject adBlock;
    [SerializeField] private GameObject title;
    [SerializeField] private GameObject toMenu;

    [SerializeField] private GameObject shopCharacterPage;
    [SerializeField] private GameObject shopArenaPage;
    [SerializeField] private GameObject shopWatcherPage;
    [SerializeField] private GameObject shopBallPage;

    [SerializeField] private GameObject shopArenaPageButton;
    [SerializeField] private GameObject shopCharacterPageButton;
    [SerializeField] private GameObject shopWatcherPageButton;
    #endregion

    private Text currentCurrencyText;
    private Text gameCurrencyText;
    private Text premiumCurrencyText;
    private Text currentMultiplyerText;

    private Text victoryDefeat;

    public int UIState = 0;


    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        scoreManager = FindObjectOfType<ScoreManager>();
        characterControl = FindObjectOfType<CharacterControl>();

        currentCurrencyText = currentCurrency.GetComponentInChildren<Text>();
        gameCurrencyText = gameCurrency.GetComponentInChildren<Text>();
        premiumCurrencyText = premiumCurrency.GetComponentInChildren<Text>();
        currentMultiplyerText = currentCurrency.transform.Find("Mark").GetComponentInChildren<Text>();

        victoryDefeat = replayForMore.GetComponentInChildren<Text>();

    }


    void Update()
    {
        switch (UIState)
        {
            case 0:     //Main Menu
                mainMenuDisplayUI();
                break;
            case 1:     //Gameplay
                gameplayDisplayUI();
                break;
            case 2:
                shopDisplayUI();    //Shop
                break;
        }

        currentCurrencyText.text = ((int)scoreManager.currentScore).ToString();                 //Displaying the current score on the screen
        currentMultiplyerText.text = "x" + ((int)scoreManager.sprintMultiplier).ToString();     //Displaying the multiplier on the screen

        gameCurrencyText.text = gameManager.NormalCurrency.ToString();               // Displaying current normal currency
        premiumCurrencyText.text = gameManager.PremiumCurrency.ToString();          // Displaying current premium currency

    }

    private void mainMenuDisplayUI()                        // There have to be another way. Find an optiomal way to do the UI system
    {
        gameCurrency.gameObject.SetActive(true);
        premiumCurrency.gameObject.SetActive(true);
        playButton.gameObject.SetActive(true);
        optionsButton.gameObject.SetActive(true);
        shopButton.gameObject.SetActive(true);
        adBlock.gameObject.SetActive(true);
        title.gameObject.SetActive(true);
        currentCurrency.gameObject.SetActive(false);
        toMenu.gameObject.SetActive(false);
        replayForMore.gameObject.SetActive(false);

        shopCharacterPage.gameObject.SetActive(false);
        shopArenaPage.gameObject.SetActive(false);
        shopWatcherPage.gameObject.SetActive(false);
        shopBallPage.gameObject.SetActive(false);

        shopArenaPageButton.gameObject.SetActive(false);
        shopCharacterPageButton.gameObject.SetActive(false);
        shopWatcherPageButton.gameObject.SetActive(false);
    }

    private void gameplayDisplayUI()
    {
        gameCurrency.gameObject.SetActive(true);
        premiumCurrency.gameObject.SetActive(true);
        playButton.gameObject.SetActive(false);
        optionsButton.gameObject.SetActive(false);
        shopButton.gameObject.SetActive(false);
        adBlock.gameObject.SetActive(true);
        title.gameObject.SetActive(false);
        currentCurrency.gameObject.SetActive(true);
        replayForMore.gameObject.SetActive(false);

        shopCharacterPage.gameObject.SetActive(false);
        shopArenaPage.gameObject.SetActive(false);
        shopWatcherPage.gameObject.SetActive(false);
        shopBallPage.gameObject.SetActive(false);

        shopArenaPageButton.gameObject.SetActive(false);
        shopCharacterPageButton.gameObject.SetActive(false);
        shopWatcherPageButton.gameObject.SetActive(false);

        if (gameManager.defeat || gameManager.finish)
        {
            if (!replayForMore.activeInHierarchy)
                replayForMore.gameObject.SetActive(true);

            if (scoreManager.replay || gameManager.defeat)
            {
                replayForMore.transform.Find("GoIn").gameObject.SetActive(false);
                if(gameManager.defeat)
                    victoryDefeat.text = "You Died";
                else
                    victoryDefeat.text = "Victory";
            }
            else
            {
                replayForMore.transform.Find("GoIn").gameObject.SetActive(true);
                replayForMore.transform.Find("GoIn").GetChild(0).GetChild(0).GetComponent<Text>().text = "x" + scoreManager.ReplayMultiplayer.ToString();
                victoryDefeat.text = "Victory";
            }
        }
    }

    private void shopDisplayUI()
    {
        gameCurrency.gameObject.SetActive(true);
        premiumCurrency.gameObject.SetActive(true);
        playButton.gameObject.SetActive(false);
        optionsButton.gameObject.SetActive(false);
        shopButton.gameObject.SetActive(false);
        adBlock.gameObject.SetActive(true);
        title.gameObject.SetActive(false);
        currentCurrency.gameObject.SetActive(false);
        toMenu.gameObject.SetActive(true);
        replayForMore.gameObject.SetActive(false);

        shopArenaPageButton.gameObject.SetActive(true);
        shopCharacterPageButton.gameObject.SetActive(true);
        shopWatcherPageButton.gameObject.SetActive(true);
    }

    public void StartGame()
    {
        UIState = 1; 
        gameManager.restart();
        gameManager.SaveContent();
    }       //Button function for starting the game

    public void RestartGame()
    {
        UIState = 1;
        scoreManager.AddToTotalScore();
        gameManager.restart();
        gameManager.SaveContent();

    }       //Button function for restarting the game

    public void PlayForMore()
    {
        UIState = 1;
        scoreManager.ReplayForMore();
        gameManager.restart();
        gameManager.SaveContent();

    }

    public void EnterShop()
    {
        UIState = 2;
        gameManager.SaveContent();

    }

    public void EnterMenu()
    {
        UIState = 0;
        scoreManager.AddToTotalScore();
        characterControl.camera.transform.position = characterControl.cameraPositionElse;
        characterControl.camera.transform.LookAt(gameManager.currentArena.transform.position);
        gameManager.restart();
        gameManager.SaveContent();

    }

    public void EnterArenaPage()
    {
        shopArenaPage.gameObject.SetActive(true);
        shopBallPage.gameObject.SetActive(false);
        shopCharacterPage.gameObject.SetActive(false);
        shopWatcherPage.gameObject.SetActive(false);
        characterControl.camera.transform.position = characterControl.cameraPositionElse;
        gameManager.SaveContent();

    }
    public void EnterBallPage()
    {
        shopArenaPage.gameObject.SetActive(false);
        shopBallPage.gameObject.SetActive(true);
        shopCharacterPage.gameObject.SetActive(false);
        shopWatcherPage.gameObject.SetActive(false);
        gameManager.SaveContent();

    }
    public void EnterCharacterPage()
    {
        shopArenaPage.gameObject.SetActive(false);
        shopBallPage.gameObject.SetActive(false);
        shopCharacterPage.gameObject.SetActive(true);
        shopWatcherPage.gameObject.SetActive(false);
        gameManager.SaveContent();

    }
    public void EnterWatcherPage()
    {
        shopArenaPage.gameObject.SetActive(false);
        shopBallPage.gameObject.SetActive(false);
        shopCharacterPage.gameObject.SetActive(false);
        shopWatcherPage.gameObject.SetActive(true);
        gameManager.SaveContent();
    }

}
