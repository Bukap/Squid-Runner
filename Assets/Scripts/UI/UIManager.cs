using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class UIManager : MonoBehaviour
{
    private GameManager gameManager;
    private ScoreManager scoreManager;
    private CharacterControl characterControl;
    
    private GameObject canvas;

    #region UIobjects
    [SerializeField] private GameObject gameCurrency;
    [SerializeField] private GameObject currentCurrency;
    [SerializeField] private GameObject premiumCurrency;
    [SerializeField] private GameObject playButton;
    [SerializeField] private GameObject restartButton;
    [SerializeField] private GameObject optionsButton;
    [SerializeField] private GameObject shopButton;
    [SerializeField] private GameObject adBlock;
    [SerializeField] private GameObject title;
    #endregion
    private Text currentCurrencyText;
    private Text gameCurrencyText;

    public int UIState = 0;


    void Start()
    {
        gameManager = FindObjectOfType<GameManager>();
        scoreManager = FindObjectOfType<ScoreManager>();
        characterControl = FindObjectOfType<CharacterControl>();
        canvas = this.gameObject;
        currentCurrencyText = currentCurrency.GetComponentInChildren<Text>();
        gameCurrencyText = gameCurrency.GetComponentInChildren<Text>();
    }


    void Update()
    {
        switch (UIState)
        {
            case 0:     //Main Menu
                mainMenuDisplayUI();
                break;
            case 1:     //Gameplay
                gamePlayDisplayUI();
                break;
        }
        currentCurrencyText.text = ((int)scoreManager.currentScore).ToString();
        gameCurrencyText.text = scoreManager.totalScore.ToString();


    }

    private void mainMenuDisplayUI()
    {
        gameCurrency.gameObject.SetActive(true);
        premiumCurrency.gameObject.SetActive(true);
        playButton.gameObject.SetActive(true);
        optionsButton.gameObject.SetActive(true);
        shopButton.gameObject.SetActive(true);
        adBlock.gameObject.SetActive(true);
        title.gameObject.SetActive(true);
        restartButton.gameObject.SetActive(false);
    }

    private void gamePlayDisplayUI()
    {
        gameCurrency.gameObject.SetActive(true);
        premiumCurrency.gameObject.SetActive(true);
        playButton.gameObject.SetActive(false);
        optionsButton.gameObject.SetActive(false);
        shopButton.gameObject.SetActive(false);
        adBlock.gameObject.SetActive(true);
        title.gameObject.SetActive(false);

        if(gameManager.defeat || gameManager.finish)
            restartButton.gameObject.SetActive(true);
        else
            restartButton.gameObject.SetActive(false);
    }

    public void StartGame()
    {
        UIState = 1; 
        gameManager.restart();
    }

    public void RestartGame()
    {
        UIState = 1;
        gameManager.restart();
    }

    // Create all nesesery obcejts on the screen and handle whitch ones are visable at the moment
}
