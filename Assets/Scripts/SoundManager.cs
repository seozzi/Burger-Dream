using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager Instance;
    private AudioSource audioSource;

    void Awake()
    {
        if (Instance == null) { Instance = this; }
        audioSource = GetComponent<AudioSource>();
    }

    public void PlaySFX(AudioClip clip)
    {
        if (clip != null) audioSource.PlayOneShot(clip);
    }
}