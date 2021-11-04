using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Watcher : MonoBehaviour
{
    [SerializeField] private GameObject character;      

    [SerializeField] private float rotationSpeed;

    private GameObject watcherObject;

    private GameManager gameManager;

    public bool isWatching { get; set; }

    void Start()
    {
        watcherObject = this.gameObject;
        gameManager = FindObjectOfType<GameManager>();
    }

    void Update()
    {
        if(!gameManager.defeat && !gameManager.finish && gameManager.UImanager.UIState == 1)
        rotate();
    }

    void rotate()
    {
        float time = Time.time;

        if (gameManager.green)      //Rotates the head depending on the current bool methode
        {
            Quaternion desiredRotation = Quaternion.LookRotation(Vector3.forward, character.transform.position - watcherObject.transform.position);
            desiredRotation = Quaternion.Euler(0, -90, 0);
            watcherObject.transform.rotation = Quaternion.RotateTowards(watcherObject.transform.rotation, desiredRotation, rotationSpeed );
        }
        else
        {
            Quaternion desiredRotation = Quaternion.LookRotation(Vector3.forward, (watcherObject.transform.position + Vector3.forward) - watcherObject.transform.position);
            desiredRotation = Quaternion.Euler(0, 90, 0);
            watcherObject.transform.rotation = Quaternion.RotateTowards(watcherObject.transform.rotation, desiredRotation, rotationSpeed );
        }

        if (watcherObject.transform.eulerAngles.y > 90)         
            isWatching = false;                             
        else                                                
            isWatching = true;
    }
}
