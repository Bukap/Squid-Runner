using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Watcher : MonoBehaviour
{   
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
            animator.SetBool("Green", true);
        }
        else
        {
            animator.SetBool("Green", false);
        }

        AnimatorClipInfo[] currentClip = this.animator.GetCurrentAnimatorClipInfo(0);

        if (time > gameManager.shortestTime)
        {
            if (currentClip[0].clip.name == "RotateToRed" && animator.GetCurrentAnimatorStateInfo(0).normalizedTime > 1)     //Gives true or false based on the current rotation    
                isWatching = true;
            else
                isWatching = false;
        }
    }
}
