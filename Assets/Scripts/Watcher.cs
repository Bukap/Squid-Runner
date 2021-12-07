using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Watcher : MonoBehaviour
{   
    [SerializeField] private float rotationSpeed;

    private GameObject watcherObject;
    private Animator animator;
    private Animation anim;

    public GameManager gameManager;

    public bool isWatching { get; set; }

    void Start()
    {
        watcherObject = this.gameObject;
        gameManager = FindObjectOfType<GameManager>();
        gameManager.watcher = GetComponent<Watcher>();
        animator = GetComponent<Animator>();
        anim = GetComponent<Animation>();
    }

    void FixedUpdate()
    {
        rotate();
    }

    void rotate()
    {
        float time = Time.time;
        

        if (gameManager.green)      //Rotates the head depending on the current bool methode
        {
            //Quaternion desiredRotation = Quaternion.LookRotation(Vector3.forward, gameManager.currentCharacter.transform.position - watcherObject.transform.position);
            //desiredRotation = Quaternion.Euler(0, -90, 0);
            // watcherObject.transform.rotation = Quaternion.RotateTowards(watcherObject.transform.rotation, desiredRotation, rotationSpeed );
            animator.SetBool("Green", true);
        }
        else
        {
            //Quaternion desiredRotation = Quaternion.LookRotation(Vector3.forward, (watcherObject.transform.position + Vector3.forward) - watcherObject.transform.position);
            //desiredRotation = Quaternion.Euler(0, 90, 0);
            //watcherObject.transform.rotation = Quaternion.RotateTowards(watcherObject.transform.rotation, desiredRotation, rotationSpeed );
            animator.SetBool("Green", false);
        }

        AnimatorClipInfo[] currentClip = this.animator.GetCurrentAnimatorClipInfo(0);
        Debug.Log(currentClip[0].clip.name);

        if (currentClip[0].clip.name == "RotateToRed" && animator.GetCurrentAnimatorStateInfo(0).normalizedTime > 1)     //Gives true or false based on the current rotation    
            isWatching = true;                             
        else                                                
            isWatching = false;
    }
}
