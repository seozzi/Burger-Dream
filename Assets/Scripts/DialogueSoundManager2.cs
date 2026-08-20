using System.Collections;
using UnityEngine;

public class DialogueSoundManager2 : MonoBehaviour
{
    public static DialogueSoundManager2 Instance;

    [Header("Character References")]
    public Animator cakemanAnimator;
    public Animator omanAnimator;
    // Oman's Transform is required to rotate the character
    public Transform omanTransform;

    [Header("Spatial Audio Sources")]
    public AudioSource cakemanSpeaker;
    public AudioSource omanSpeaker;

    [Header("Dialogue Audio Clips")]
    public AudioClip cakemanDialogue;
    public AudioClip omanDialogue1;
    public AudioClip omanDialogue2;

    [Header("Animation Triggers")]
    public string cakemanAngryTrigger = "doAngryPoint";
    public string omanSaysNoTrigger = "saysNo";
    public string omanKillsTrigger = "killsCakeman";
    public string omanIdleTrigger = "isIdle";

    [Header("Timing & Movement Setup")]
    public float delayBeforeKick = 3.0f;
    public float delayBeforeReturnToIdle = 2.5f;
    [Tooltip("How long it takes for Oman to smoothly rotate (in seconds)")]
    public float rotationDuration = 0.5f;

    void Awake()
    {
        if (Instance == null) Instance = this;
        else Destroy(gameObject);
    }

    void Start()
    {
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

        // ==========================================
        // 2. OMAN SEQUENCE - PART 1 ("No" & Dialogue 1)
        // ==========================================
        yield return new WaitForSeconds(10f);

        if (omanAnimator != null) omanAnimator.SetTrigger(omanSaysNoTrigger);
        if (omanSpeaker != null && omanDialogue1 != null) omanSpeaker.PlayOneShot(omanDialogue1);

        // ==========================================
        // 3. OMAN SEQUENCE - PART 2 (Turn Right 90 & Kick)
        // ==========================================
        yield return new WaitForSeconds(delayBeforeKick);

        // Turn RIGHT by 90 degrees on the Y-axis smoothly
        if (omanTransform != null)
        {
            yield return StartCoroutine(SmoothRotate(omanTransform, 90f, rotationDuration));
        }

        if (omanAnimator != null) omanAnimator.SetTrigger(omanKillsTrigger);

        // ==========================================
        // 4. OMAN SEQUENCE - PART 3 (Turn Left 120, Idle & Dialogue 2)
        // ==========================================
        yield return new WaitForSeconds(delayBeforeReturnToIdle);

        // Turn LEFT by 120 degrees on the Y-axis smoothly (so -120f)
        if (omanTransform != null)
        {
            yield return StartCoroutine(SmoothRotate(omanTransform, -120f, rotationDuration));
        }

        if (omanAnimator != null) omanAnimator.SetTrigger(omanIdleTrigger);
        if (omanSpeaker != null && omanDialogue2 != null) omanSpeaker.PlayOneShot(omanDialogue2);
    }

    // Coroutine for smooth rotation to avoid snapping instantly
    IEnumerator SmoothRotate(Transform target, float angle, float duration)
    {
        Quaternion startRotation = target.rotation;
        Quaternion endRotation = target.rotation * Quaternion.Euler(0, angle, 0);
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            target.rotation = Quaternion.Slerp(startRotation, endRotation, elapsedTime / duration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        target.rotation = endRotation; // Ensure it reaches the exact target rotation
    }
}