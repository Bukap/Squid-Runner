using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;
public class ScoreManager : MonoBehaviour
{
    [SerializeField] public int totalScore;        //Total amount of points earned during all games
    [SerializeField] public float currentScore;      //Current score during the run
    [SerializeField] private float sprintMultiplier = 1;      //Increments the score received
    [SerializeField] private float multiplierIncrease;      // Increases the sprintMultiplier when the player moves
    [SerializeField] private float multiplierDecrease;      // Decreases the sprintMultiplier when the player doesn't move
    [SerializeField] private float incrementValue;       //Amount of points earned every fixed amount of time
    [SerializeField] private float increaseFrequency;       //Once clock will reach this number it will increase the current score acording to a formula
    [SerializeField] private float clock;

    private CharacterControl characterControl;


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
        characterControl = FindObjectOfType<CharacterControl>();
    }

    void FixedUpdate()
    {
        clock += Time.deltaTime;
        gettingScore();
        multiplierHandler();
    }

    private void gettingScore()
    {
        if (characterControl.speed > 0 && clock > increaseFrequency)
        {
            currentScore += incrementValue * sprintMultiplier;
            clock = 0;
        }
    }

    private void multiplierHandler()
    {
        if(characterControl.speed>0)
            sprintMultiplier += multiplierIncrease;
        else if(sprintMultiplier>1)
            sprintMultiplier -= multiplierDecrease;

    }

    public void AddToTotalScore()
    {
        totalScore +=  (int)currentScore;
        RestartScore();
    }

    public void RestartScore()
    {
        currentScore = 0;
        sprintMultiplier = 1;
        clock = 0;
    }
}
