using System.Collections;
using UnityEngine;

public class DialogueSoundManager2 : MonoBehaviour
{
    public static DialogueSoundManager2 Instance;

    [Header("Character Animators")]
    public Animator cakemanAnimator;
    public Animator omanAnimator;

    [Header("Spatial Audio Sources")]
    public AudioSource cakemanSpeaker;
    public AudioSource omanSpeaker;

    [Header("Dialogue Audio Clips")]
    public AudioClip cakemanDialogue;
    public AudioClip omanDialogue1; // The first part (during 'No' animation)
    public AudioClip omanDialogue2; // The second part (after returning to 'Idle')

    [Header("Animation Triggers (Cakeman)")]
    public string cakemanAngryTrigger = "doAngryPoint";

    [Header("Animation Triggers (Oman)")]
    // These match the parameters visible in your screenshot exactly
    public string omanSaysNoTrigger = "saysNo";
    public string omanKillsTrigger = "killsCakeman";
    public string omanIdleTrigger = "isIdle";

    [Header("Timing Setup (Adjust in Inspector)")]
    [Tooltip("How many seconds to wait after saying 'No' before executing the flying kick.")]
    public float delayBeforeKick = 3.0f;
    [Tooltip("How many seconds to wait for the kick animation to finish before returning to idle and saying Dialogue 2.")]
    public float delayBeforeReturnToIdle = 2.5f;

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
        // ==========================================
        // 1. CAKEMAN SEQUENCE
        // ==========================================
        yield return new WaitForSeconds(4f);

        if (cakemanAnimator != null) cakemanAnimator.SetTrigger(cakemanAngryTrigger);
        if (cakemanSpeaker != null && cakemanDialogue != null) cakemanSpeaker.PlayOneShot(cakemanDialogue);

        Debug.Log("Cakeman: AngryPoint Animation & Dialogue Triggered");

        // ==========================================
        // 2. OMAN SEQUENCE - PART 1 ("No" & Dialogue 1)
        // ==========================================
        yield return new WaitForSeconds(10f);

        if (omanAnimator != null) omanAnimator.SetTrigger(omanSaysNoTrigger);
        if (omanSpeaker != null && omanDialogue1 != null) omanSpeaker.PlayOneShot(omanDialogue1);

        Debug.Log("Oman: 'No' Animation & Dialogue 1 Triggered");

        // ==========================================
        // 3. OMAN SEQUENCE - PART 2 (Flying Kick)
        // ==========================================
        // Wait while Oman says the first dialogue, then trigger the kick
        yield return new WaitForSeconds(delayBeforeKick);

        if (omanAnimator != null) omanAnimator.SetTrigger(omanKillsTrigger);
        Debug.Log("Oman: Flying Knee Punch Triggered");

        // ==========================================
        // 4. OMAN SEQUENCE - PART 3 (Idle & Dialogue 2)
        // ==========================================
        // Wait for the kick animation to land/finish
        yield return new WaitForSeconds(delayBeforeReturnToIdle);

        if (omanAnimator != null) omanAnimator.SetTrigger(omanIdleTrigger);
        if (omanSpeaker != null && omanDialogue2 != null) omanSpeaker.PlayOneShot(omanDialogue2);

        Debug.Log("Oman: Returned to Idle & Dialogue 2 Triggered");
    }
}