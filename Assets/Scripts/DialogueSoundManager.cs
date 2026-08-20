using System.Collections;
using UnityEngine;

public class DialogueSoundManager : MonoBehaviour
{
    public static DialogueSoundManager Instance;

    [Header("Dialogue Audio Clips")]
    public AudioClip sound1;
    public AudioClip sound2;
    public AudioClip sound3;

    [Header("Spatial Audio Sources (Left, Center, Right)")]
    // Assign 3 AudioSources attached to specific positions relative to the player
    public AudioSource leftSource;
    public AudioSource centerSource;
    public AudioSource rightSource;

    void Awake()
    {
        // Implement Singleton pattern
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    // Public method called by external scripts (e.g., Act1Director)
    public void PlayOutdoorDialogues()
    {
        StartCoroutine(PlayDialogueSequenceRoutine());
    }

    // Coroutine to handle directional sound playback with a 1.5-second delay
    IEnumerator PlayDialogueSequenceRoutine()
    {
        // 1. Play Sound 1 from the LEFT
        if (sound1 != null && leftSource != null)
        {
            leftSource.PlayOneShot(sound1);
        }

        // Wait for 1.5 seconds
        yield return new WaitForSeconds(1.5f);

        // 2. Play Sound 2 from the CENTER (Player's position)
        if (sound2 != null && centerSource != null)
        {
            centerSource.PlayOneShot(sound2);
        }

        // Wait for 1.5 seconds
        yield return new WaitForSeconds(1.5f);

        // 3. Play Sound 3 from the RIGHT
        if (sound3 != null && rightSource != null)
        {
            rightSource.PlayOneShot(sound3);
        }
    }
}