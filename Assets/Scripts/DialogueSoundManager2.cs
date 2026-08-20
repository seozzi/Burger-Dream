using System.Collections;
using UnityEngine;

public class DialogueSoundManager2 : MonoBehaviour
{
    public static DialogueSoundManager2 Instance;

    [Header("Character Animators")]
    public Animator cakemanAnimator;
    public Animator omanAnimator;

    [Header("Spatial Audio Sources")]
    // Assign the AudioSource components from your CakemanSpeaker and OmanSpeaker GameObjects
    public AudioSource cakemanSpeaker;
    public AudioSource omanSpeaker;

    [Header("Dialogue Audio Clips")]
    public AudioClip cakemanDialogue;
    public AudioClip omanDialogue;

    [Header("Animation Triggers")]
    // Parameter names that must match the Triggers in the Animator Controller
    public string cakemanAngryTrigger = "doAngryPoint";
    public string omanActionTrigger = "doOmanAction"; // Placeholder trigger for Oman

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

    void Start()
    {
        // Start the sequence immediately when the scene loads
        StartCoroutine(PlayAct2SequenceRoutine());
    }

    IEnumerator PlayAct2SequenceRoutine()
    {
        // 1. Wait for 4 seconds after the scene is loaded
        yield return new WaitForSeconds(4f);

        // 2. Transition Cakeman's animation (Empty -> AngryPoint) and play dialogue
        if (cakemanAnimator != null)
        {
            cakemanAnimator.SetTrigger(cakemanAngryTrigger);
        }

        if (cakemanSpeaker != null && cakemanDialogue != null)
        {
            cakemanSpeaker.PlayOneShot(cakemanDialogue);
        }

        Debug.Log("Cakeman: AngryPoint Animation & Dialogue Triggered");

        // 3. Wait for 10 seconds after Cakeman's action
        yield return new WaitForSeconds(10f);

        // 4. Play Oman's dialogue and transition to placeholder animation
        if (omanAnimator != null)
        {
            // Trigger to transition to Oman's upcoming animation
            omanAnimator.SetTrigger(omanActionTrigger);
        }

        if (omanSpeaker != null && omanDialogue != null)
        {
            omanSpeaker.PlayOneShot(omanDialogue);
        }

        Debug.Log("Oman: Placeholder Animation & Dialogue Triggered");
    }
}