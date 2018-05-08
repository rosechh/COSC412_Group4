using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioSource fxSource;
    public AudioSource musSource;
    public static SoundManager instance = null;

    //+- 5% of original pitch for sound variation
    public float lowPitchRange = .95f;
    public float highPitchRange = 1.05f;

	// Use this for initialization
	void Awake ()
    {
        if (instance == null)
            instance = this;
        else if (instance != this)
            Destroy(gameObject);

        //keeps music between scenes
        DontDestroyOnLoad(gameObject);
	}

    //public to call from other scripts that execute game logic
    public void PlaySingle(AudioClip clip)
    {
        fxSource.clip = clip;
        fxSource.Play();

    }

    //Input comma list of arguments of type clip i.e. clip array
    public void RandomFX(params AudioClip[] clips)
    {
        int randomIndex = Random.Range(0, clips.Length);
        float randomPitch = Random.Range(lowPitchRange, highPitchRange);

        fxSource.pitch = randomPitch;
        fxSource.clip = clips[randomIndex];
        fxSource.Play();

    }
}
