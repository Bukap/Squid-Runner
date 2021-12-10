using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;
public class ScoreManager : MonoBehaviour
{
    [SerializeField] public float currentScore;      //Current score during the run
    [SerializeField] private float sprintMultiplier = 1;      //Increments the score received
    [SerializeField] private float multiplierIncrease;      // Increases the sprintMultiplier when the player moves
    [SerializeField] private float multiplierDecrease;      // Decreases the sprintMultiplier when the player doesn't move
    [SerializeField] private float incrementValue;       //Amount of points earned every fixed amount of time
    [SerializeField] private float increaseFrequency;       //Once clock will reach this number it will increase the current score acording to a formula
    [SerializeField] private float clock;

    [SerializeField] private float MinMultiplyer;
    [SerializeField] private float MaxMultiplyer;
    [SerializeField] private float ReplayMultiplayer;
    public bool replay;

    public CharacterControl characterControl;
    public GameManager gameManager;




    void Awake()
    {
        Assert.AreEqual(1, sprintMultiplier);
        Assert.IsTrue(multiplierIncrease>0);
        Assert.IsTrue(multiplierDecrease>0);
        Assert.IsTrue(incrementValue>0);
        Assert.IsTrue(increaseFrequency>0);
    }

    void Start()
    {
        gameManager = FindObjectOfType<GameManager>(); 
    }

    void FixedUpdate()
    {
        if (!replay)
        {
            clock += Time.deltaTime;
            gettingScore();
            multiplierHandler();
        }
    }

    private void gettingScore()     //increase score if the speed is > than 0
    {
        if (characterControl.speed > 0 && clock > increaseFrequency && gameManager.CrossLine)
        {
            currentScore += incrementValue * sprintMultiplier;
            clock = 0;
        }
    }

    private void multiplierHandler() //increase multiplier if the speed is > than 0
    {
        if (gameManager.CrossLine)
        {
            if (characterControl.speed > 0)
                sprintMultiplier += multiplierIncrease;
            else if (sprintMultiplier > 1)
                sprintMultiplier -= multiplierDecrease;
        }
    }

    public void ReplayForMore()
    {
        ReplayMultiplayer = Random.Range(MinMultiplyer, MaxMultiplyer);
        currentScore *= Mathf.Round(ReplayMultiplayer);
        replay = true;
    }

    public void AddToTotalScore()       // Gives the option to restart the run for a bigger price or to add the current run score to the total score
    {
        gameManager.NormalCurrency +=  (int)currentScore;
        replay = false;
        RestartScore();
    }

    public void RestartScore()      // resets the current score and sprint multiplier
    {
        if (!replay)
        {
            currentScore = 0;
            sprintMultiplier = 1;
            clock = 0;
        }                                       // Zrób aby klikniêcie GOIN nie resetowa³o score do zera tylko go mno¿y³o
    }
}
