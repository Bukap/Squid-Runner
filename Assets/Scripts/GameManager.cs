using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public Watcher watcher;
    public UIManager UImanager;
    public CharacterControl characterControl;
    public ScoreManager scoreManager;
    public ShopManager shopManager;

    [SerializeField] private GameObject[] characters;       //An array of all NPC characters

    #region Green Frequency
    [SerializeField] public float shortestTime;    // Defines the shortest possible time before changing the green value
    [SerializeField] private float longestTime;     // Defines the longest possible time before changing the green value
    [SerializeField] private float timeToSwitch;    // It is the value of the randomly generated number between the two abowe
    [SerializeField] private float timer;           // The clock that is counted up to the timeToSwitch, then it resets and the timeToSwitch value is generated again
    #endregion
    [SerializeField] public bool green { get; set; }        // Defines if the characters can move without lousing
    [SerializeField] public bool defeat { get; set; }       // Defines if the players character has been defeated
    [SerializeField] public bool finish { get; set; }

    public bool CrossLine;

    #region Ball
    [SerializeField] private GameObject ball;               // Creates a clone of the ballPrefab
    [SerializeField] private float distance;                // Defines how far on the x axis the ball is created
    [SerializeField] private float hight;                   // Defines how high on the y axis the ball is created
    #endregion

    [SerializeField] private Transform restartPosition;     // Defines where the starting point for the player is for every gameloop
    [SerializeField] private float countDown;               // Defines after how many seconds after pressing the restart button the game will reset

    [SerializeField] public int NormalCurrency;        //Total amount of in game currency
    [SerializeField] public int PremiumCurrency;        //Total amount of premium currency

    [SerializeField] public GameObject currentCharacter;
    [SerializeField] public GameObject currentArena;
    [SerializeField] public GameObject currentWatcher;         
    [SerializeField] public GameObject currentBall;



    void Awake()
    {
        QualitySettings.vSyncCount = 0;
        Application.targetFrameRate = 60;
        instantiateObjects();
        getComponents();
        LoadContent();

    }

    void Start()
    {
        
        finish = true;
        green = true;
    }

    void Update()
    {
        redGreen();
        gameOver();
    }

    private void redGreen()
    {
        if (!defeat && !finish && UImanager.UIState == 1 && CrossLine)
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
        if (characterControl.speed > 0 && watcher.isWatching && !defeat && !finish && CrossLine)
        {
            defeat = true;
            ball = Instantiate(currentBall);
            ball.transform.position = currentCharacter.transform.position + (new Vector3(distance, hight));
            scoreManager.RestartScore();
            characterControl.speed = 0;
        }
        SaveContent();
    }       // If !green and the player moves the defeat bool is set to true and a ball is created that hits the player

    public void Victory()
    {
        finish = true;
        SaveContent();
        characterControl.speed = 0;
        //scoreManager.AddToTotalScore();
    }       // Once the player will cross the finish line the function is called

    public void restart()              //Resets player position and rotation, rotates the watcher, and resets score
    {
        //StartCoroutine(startRestartTimer());
        defeat = false;
        finish = false;
        Destroy(ball);
        currentCharacter.transform.position = restartPosition.position;
        currentCharacter.transform.rotation = restartPosition.rotation;
        scoreManager.RestartScore();
        CrossLine = false;
        green = true;
        timer = 0;
    }

    public void instantiateObjects()
    {
        currentCharacter = Instantiate(currentCharacter);
        currentArena = Instantiate(currentArena);
        currentWatcher = Instantiate(currentWatcher);        
    }

    public void getComponents()
    {
        #region gameMangers accesses
        watcher = currentWatcher.GetComponent<Watcher>();
        characterControl = currentCharacter.GetComponent<CharacterControl>();
        scoreManager = FindObjectOfType<ScoreManager>();
        UImanager = FindObjectOfType<UIManager>();
        shopManager = FindObjectOfType<ShopManager>();
        #endregion
        #region scoreManagers accesess
        scoreManager.gameManager = this.GetComponent<GameManager>();
        #endregion
        #region watcher accesses
        watcher.gameManager = this.GetComponent<GameManager>();
        #endregion
    }

    public void SaveContent()
    {
        SaveSystem.SaveProgress(scoreManager, this.GetComponent<GameManager>(), shopManager);
    }

    public void LoadContent()
    {
        scoreManager.ReplayMultiplayer = SaveSystem.LoadProgress().ReplayMultiplier;

        NormalCurrency = SaveSystem.LoadProgress().NormalCurrency;
        PremiumCurrency = SaveSystem.LoadProgress().PremiumCurrency;

        shopManager.CharacterPage.GetComponent<Page>().isPicked = new List<bool>(SaveSystem.LoadProgress().CurrentCharacterPicked);
        shopManager.WatcherPage.GetComponent<Page>().isPicked = new List<bool>(SaveSystem.LoadProgress().CurrentWatcherPicked);
        shopManager.ArenaPage.GetComponent<Page>().isPicked = new List<bool>(SaveSystem.LoadProgress().CurrentArenaPicked);
        shopManager.CharacterPage.GetComponent<Page>().isBought = new List<bool>(SaveSystem.LoadProgress().CharacterPageItemsBought);
        shopManager.WatcherPage.GetComponent<Page>().isBought = new List<bool>(SaveSystem.LoadProgress().ArenaPageItemsBought);
        shopManager.ArenaPage.GetComponent<Page>().isBought = new List<bool>(SaveSystem.LoadProgress().WatcherPageItemsBought);
    }

}
