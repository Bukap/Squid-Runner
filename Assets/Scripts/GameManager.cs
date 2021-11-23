using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private Watcher watcher;
    public UIManager UImanager;
    private CharacterControl characterControl;
    private ScoreManager scoreManager;

    [SerializeField] private GameObject player;     //Pointing at the player character and accesing its class
    [SerializeField] private GameObject[] characters;       //An array of all NPC characters

    #region Green Frequency
    [SerializeField] private float shortestTime;    // Defines the shortest possible time before changing the green value
    [SerializeField] private float longestTime;     // Defines the longest possible time before changing the green value
    [SerializeField] private float timeToSwitch;    // It is the value of the randomly generated number between the two abowe
    [SerializeField] private float timer;           // The clock that is counted up to the timeToSwitch, then it resets and the timeToSwitch value is generated again
    #endregion
    [SerializeField] public bool green { get; set; }        // Defines if the characters can move without lousing
    [SerializeField] public bool defeat { get; set; }       // Defines if the players character has been defeated
    [SerializeField] public bool finish { get; set; }
    
    #region Ball
    [SerializeField] private GameObject ball;               // Creates a clone of the ballPrefab
    [SerializeField] private float distance;                // Defines how far on the x axis the ball is created
    [SerializeField] private float hight;                   // Defines how high on the y axis the ball is created
    #endregion

    [SerializeField] private Transform restartPosition;     // Defines where the starting point for the player is for every gameloop
    [SerializeField] private float countDown;               // Defines after how many seconds after pressing the restart button the game will reset

    [SerializeField] public int NormalCurrency;        //Total amount of in game currency
    [SerializeField] public int PremiumCurrency;        //Total amount of premium currency

    [SerializeField] private GameObject currentCharacter;
    [SerializeField] private GameObject currentArena;        
    [SerializeField] private GameObject currentWatcher;         // OGARNIJ OBIEKTY W GRZE TAK ABY BYLY LATWE DO PODMIANY <----!
    [SerializeField] private GameObject currentBall;        

    

    void Start()
    {
        watcher = FindObjectOfType<Watcher>();
        characterControl = player.GetComponent<CharacterControl>();
        scoreManager = FindObjectOfType<ScoreManager>();
        UImanager = FindObjectOfType<UIManager>();

        finish = true;
    }

    // Update is called once per frame
    void Update()
    {
        redGreen();
        gameOver();
    }

    private void redGreen()
    {
        timer += Time.deltaTime;

        if (timer > timeToSwitch)               
        {
            if (green)
                green = false;
            else
                green = true;

            timeToSwitch = Random.Range(shortestTime, longestTime);
            timer = 0;
        }
    }       // Every randomly generated amount of time the boolerian value of green changes to the oposite, resets the timer and generates a new amount of time

    private void gameOver()
    {
        if(characterControl.speed>0 && watcher.isWatching && !defeat && !finish)
        {
            defeat = true;
            ball = Instantiate(currentBall);
            ball.transform.position = player.transform.position + (new Vector3(distance,hight));
        }
    }       // If !green and the player moves the defeat bool is set to true and a ball is created that hits the player

    public void Victory()
    {
        finish = true;
        scoreManager.AddToTotalScore();
    }       // Once the player will cross the finish line the function is called

    IEnumerator startRestartTimer()         // After the countDown amount of seconds the gameloop resets
    {
        yield return new WaitForSeconds(countDown);
        defeat = false;
        finish = false;
        Destroy(ball);
        player.transform.position = restartPosition.position;
        player.transform.rotation = restartPosition.rotation;
        scoreManager.RestartScore();
    } 

    public void restart()              //Invokes the startRestartTimer function
    {
        StartCoroutine(startRestartTimer());
    }



}
