using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{


    [SerializeField] private AudioListener audioListener;
    [SerializeField] private AudioSource sourceSFX;
    [SerializeField] public AudioSource sourceMusicMenu;
    [SerializeField] public AudioSource sourceMusicGame;

    [SerializeField] private float fadeSpeed;

    [SerializeField] public AudioClip buttonPressSFX;
    [SerializeField] public AudioClip purchaseConfirmationSFX;
    [SerializeField] public AudioClip gameOverSFX;



    public void ChangeTrack(AudioSource nowPlaying, AudioSource nextPlaying)
    {
        /*if (sourceMusicMenu.volume == 1)
        {
            nowPlaying = sourceMusicMenu;
            nextPlaying = sourceMusicGame;
        }
        else
        {
            nextPlaying = sourceMusicMenu;
            nowPlaying = sourceMusicGame;
        }*/
        fadeOutTrack(nowPlaying);

        if (fadeOutTrack(nowPlaying) == 0)
            fadeInTrack(nextPlaying);
    }

    public void PlaySFX(AudioClip play)
    {
        sourceSFX.PlayOneShot(play);
    }

    public void MuteAll()
    {
        if (!sourceSFX.mute || !sourceMusicMenu.mute || !sourceMusicGame.mute)
        {
            sourceSFX.mute = true;
            sourceMusicMenu.mute = true;
            sourceMusicGame.mute = true;
        }
        else
        {
            sourceSFX.mute = false;
            sourceMusicMenu.mute = false;
            sourceMusicGame.mute = false;
        }

    }

    private float fadeOutTrack(AudioSource audioSource)
    {
        if (audioSource.volume > 0)
            audioSource.volume -= fadeSpeed;
        else
            audioSource.volume = 0;

        return audioSource.volume;
    }

    private float fadeInTrack(AudioSource audioSource)
    {
        if (audioSource.volume < 1)
            audioSource.volume += fadeSpeed;
        else
            audioSource.volume = 1;

        return audioSource.volume;
    }


}
