using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private Watcher watcher;
    private CharacterControl characterControl;

    [SerializeField] private GameObject player;
    [SerializeField] private GameObject[] characters;

    [SerializeField] private float shortestTime;
    [SerializeField] private float longestTime;
    [SerializeField] private float timeToSwitch;
    [SerializeField] private float timer;

    [SerializeField] public bool green;

    [SerializeField] public bool defeat;

    [SerializeField] private GameObject ballPrefab;
    [SerializeField] private GameObject ball;
    [SerializeField] private float distance;
    [SerializeField] private Transform restartPosition;
    [SerializeField] private float countDown;
    void Start()
    {
        watcher = FindObjectOfType<Watcher>();
        characterControl = player.GetComponent<CharacterControl>();
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
    }

    private void gameOver()
    {
        if(characterControl.speed>0 && watcher.isWatching)
        {
            defeat = true;
            ball = Instantiate(ballPrefab);
            ball.transform.position = player.transform.position + (new Vector3(distance,0));
        }
    }

    IEnumerator startRestartTimer()
    {
        yield return new WaitForSeconds(countDown);
        defeat = false;
        Destroy(ball);
        player.transform.position = restartPosition.position;
        player.transform.rotation = restartPosition.rotation;
    } 

    private void restart()
    {
        StartCoroutine(startRestartTimer());
    }
}
