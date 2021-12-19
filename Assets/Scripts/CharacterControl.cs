using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Assertions;

public class CharacterControl : MonoBehaviour
{
    private GameObject player;
    public GameManager gameManager;
    public UIManager uiManager;
    private ScoreManager scoreManager;

    #region Movement
    [SerializeField] private float acceleration;        // How fast we do reach top speed
    [SerializeField] private float slowingProportion;     // Defines how much faster the character slows down in comparation to speeding up
    [SerializeField] private float slowingTime;         // Defines how long after the last click the caracter will start to slow down
    [SerializeField] public float speed { get; set; }               // Current speed of the character
    [SerializeField] private float topSpeed;            // Highest possible speed of the character
    [SerializeField] private bool go;                   // Checks if the character should run or slow down and stop
    private float timeBeforeSlowing;                    // Clock 
    #endregion

    #region Camera position
    public Camera camera;
    [SerializeField] private float cameraSpeed;
    private float currentCameraSpeed;
    [SerializeField] private Vector3 cameraPositionGameplay;
    [SerializeField] public Vector3 cameraPositionElse;
    #endregion

    //Physics
    public Rigidbody rigidbody;

    private Animator animator;
    void Awake()
    {
        Assert.IsTrue(acceleration > 0);
        Assert.IsTrue(slowingProportion>0);
        Assert.IsTrue(slowingTime>0);
        Assert.IsTrue(topSpeed > 0);
    }

    void Start()
    {
        player = this.gameObject;
        gameManager = FindObjectOfType<GameManager>();
        scoreManager = FindObjectOfType<ScoreManager>();
        rigidbody = this.GetComponent<Rigidbody>();
        uiManager = FindObjectOfType<UIManager>();
        camera = FindObjectOfType<Camera>(); 
        gameManager.scoreManager.characterControl = this.GetComponent<CharacterControl>();
        scoreManager.characterControl = GetComponent<CharacterControl>();
        gameManager.characterControl = GetComponent<CharacterControl>();

        animator = this.GetComponent<Animator>();
        animator.speed = 0;

        camera.transform.position =  cameraPositionElse;
        camera.transform.LookAt(gameManager.currentArena.transform.position);
    }

    void Update()
    {
        if (!gameManager.defeat && !gameManager.finish && gameManager.UImanager.UIState == 1)        // Needed to separate the accelerating to keep a steady framework and get the button pressed read
        {
            accelerating();
            animator.speed = speed / topSpeed;
        }
        else
            animator.speed = 0;

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!gameManager.defeat && !gameManager.finish)        // Prevents the player from moving and stops him in place to take a shot
        {
            move();
            cameraFollow();
            rigidbody.isKinematic = true;
        }
        else
        {
            go = false;
            speed = 0;
            if (gameManager.defeat) 
                rigidbody.isKinematic = false;
        }
    }

    private void move()
    {
        if (go)         // Signal that the character needs to get moving
        {
            if (speed < topSpeed)       // Linearly speeds up the character until it reaches max speed
                speed += acceleration;
            else
                speed = topSpeed;       // Hold the character at max speed
        }
        else if (!go && speed > 0)      //Signals that the character needs start to slow down
        {
            if (speed <= topSpeed)      // Linearly slowes down the character. The slow is 
                speed -= acceleration * slowingProportion;
        }
        else                            // If the speed goes below 0 it is set to 0
        {
            speed = 0;
        }


        player.transform.position = new Vector3(player.transform.position.x, player.transform.position.y, player.transform.position.z + speed);     //Moves the character
    }

    private void accelerating()
    {
        timeBeforeSlowing += Time.deltaTime;

        if (Input.GetKeyDown(KeyCode.Mouse0))       // Once the screeen is pressed go is set true. After timeBeforSlowing it is set to false
        {
            go = true;
            timeBeforeSlowing = 0;
        }
        if (timeBeforeSlowing > slowingTime)
        {
            go = false;
        }

    }

    private void cameraFollow()     //Makes the camera follow the player
    {
        if (speed < cameraSpeed)        //Defines the speed of the camera so it can follow the player during the gameplay and move slowly during UI activities
        {
            currentCameraSpeed = cameraSpeed;
        }
        else
        {
            currentCameraSpeed = speed;
        }

        if (uiManager.UIState == 1) //Gameplay
        {
            camera.transform.position = Vector3.Lerp(camera.transform.position, cameraPositionGameplay + player.transform.position, currentCameraSpeed);
            camera.transform.LookAt(gameManager.watcher.transform.position);
        }
        else
        {
            camera.transform.position = Vector3.MoveTowards(camera.transform.position, cameraPositionElse, currentCameraSpeed);
            camera.transform.LookAt(gameManager.currentArena.transform.position);
        }
    }



    private void OnTriggerExit(Collider collision)
    {
        if(collision.tag == "Finish")       //Triggers the Victiory function once the line is crossed
        {
            gameManager.Victory();
        }

        if(collision.tag == "Start")
        {
            gameManager.CrossLine = true;
        }
    }


}

