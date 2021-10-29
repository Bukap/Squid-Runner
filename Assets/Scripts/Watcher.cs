using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Watcher : MonoBehaviour
{
    [SerializeField] private GameObject character;

    [SerializeField] private float rotationSpeed;

    private GameObject watcherObject;

    private GameManager gameManager;

    public bool isWatching;

    void Start()
    {
        watcherObject = this.gameObject;
        gameManager = FindObjectOfType<GameManager>();
    }

    void Update()
    {
        rotate();
    }

    void rotate()
    {
        float time = Time.time;

        if (gameManager.green)      //Rotates the head depending on the current bool methode
        {
            Quaternion desiredRotation = Quaternion.LookRotation(Vector3.forward, character.transform.position - watcherObject.transform.position);
            desiredRotation = Quaternion.Euler(0, 180, 0);
            watcherObject.transform.rotation = Quaternion.RotateTowards(watcherObject.transform.rotation, desiredRotation, rotationSpeed );
        }
        else
        {
            Quaternion desiredRotation = Quaternion.LookRotation(Vector3.forward, (watcherObject.transform.position + Vector3.forward) - watcherObject.transform.position);
            desiredRotation = Quaternion.Euler(0, 0, 0);
            watcherObject.transform.rotation = Quaternion.RotateTowards(watcherObject.transform.rotation, desiredRotation, rotationSpeed );
        }

        if (watcherObject.transform.rotation.y > 0)         // If the head is on its place returns true. I don't know how it works therefore I can't change anything. 
            isWatching = false;                             // When the hed is looking on the player isWatching is true, it becomes false once it turns all the way back. It becomes true again
        else                                                // once it is facing the player all the way
            isWatching = true;
    }
}
