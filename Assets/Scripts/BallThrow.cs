using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallThrow : MonoBehaviour
{
    private AudioManager audioManager;

    private Rigidbody rigidbody;
    [SerializeField] float power;

    void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
        audioManager = FindObjectOfType<AudioManager>();
    }
    void Start()
    {
        rigidbody.AddForce(new Vector3(-power, 0, 0), ForceMode.Impulse);       //Right after the ball is spawned it is thrown into the character.
        audioManager.PlaySFX(audioManager.gameOverSFX);
    }
}
