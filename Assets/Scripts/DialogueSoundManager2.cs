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
    public AudioClip omanDialogue1;
    public AudioClip omanDialogue2;

    [Header("SFX Audio Clips (New!)")]
    [Tooltip("Sound played exactly when the kick hits")]
    public AudioClip punchSound;
    [Tooltip("Sound played as Cakeman falls down")]
    public AudioClip deathSound;

    [Header("Animation Parameters (Bool)")]
    public string cakemanAngryBool = "doAngryPoint";
    public string cakemanDeadBool = "isDead";
    public string omanSaysNoBool = "saysNo";
    public string omanKillsBool = "killsCakeman";
    public string omanIdleBool = "isIdle"; // State transitioning to Cheering

    [Header("Timing & Movement Setup")]
    [Tooltip("Delay before Cakeman starts his first animation")]
    public float initialDelay = 1.0f;

    [Tooltip("Delay between Cakeman's action and Oman's first reply (shortened to 5.5s)")]
    public float delayBeforeOmanReply = 5.5f;

    [Tooltip("Delay before executing the knee kick after the 'No' dialogue")]
    public float delayBeforeKick = 3.0f;

    [Tooltip("Time it takes for the knee kick to impact Cakeman")]
    public float delayBeforeImpact = 0.5f;

    [Tooltip("Delay between the punch impact and the death sound")]
    public float delayBeforeDeathSound = 0.5f;

    [Tooltip("Remaining time until the knee kick animation fully finishes after impact")]
    public float kickFollowThroughDuration = 1.0f;

    [Tooltip("Duration to hold the final knee kick pose in the air")]
    public float poseHoldDuration = 3.0f;

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
        // 1. CAKEMAN SEQUENCE (Starts after initial delay)
        // ==========================================
        yield return new WaitForSeconds(initialDelay);

        if (cakemanAnimator != null)
        {
            cakemanAnimator.SetBool(cakemanAngryBool, true);
        }

        if (cakemanSpeaker != null && cakemanDialogue != null) cakemanSpeaker.PlayOneShot(cakemanDialogue);

        // ==========================================
        // 2. OMAN SEQUENCE - PART 1 ("No" & Dialogue 1)
        // ==========================================
        // Wait for the adjusted delay time (now 5.5 seconds)
        yield return new WaitForSeconds(delayBeforeOmanReply);

        if (omanAnimator != null)
        {
            omanAnimator.SetBool(omanSaysNoBool, true);
        }

        if (omanSpeaker != null && omanDialogue1 != null) omanSpeaker.PlayOneShot(omanDialogue1);

        // ==========================================
        // 3. OMAN SEQUENCE - PART 2 (Kick)
        // ==========================================
        yield return new WaitForSeconds(delayBeforeKick);

        if (omanAnimator != null)
        {
            omanAnimator.applyRootMotion = true;
            omanAnimator.SetBool(omanKillsBool, true);
        }

        // ==========================================
        // 4. CAKEMAN DEAD (Impact & SFX)
        // ==========================================
        yield return new WaitForSeconds(delayBeforeImpact);

        // Play the punch impact sound
        if (cakemanSpeaker != null && punchSound != null)
        {
            cakemanSpeaker.PlayOneShot(punchSound);
        }

        // Trigger the falling down animation
        if (cakemanAnimator != null)
        {
            cakemanAnimator.SetBool(cakemanDeadBool, true);
        }

        // Wait 0.5 seconds before playing the death groan
        yield return new WaitForSeconds(delayBeforeDeathSound);

        // Play the death sound
        if (cakemanSpeaker != null && deathSound != null)
        {
            cakemanSpeaker.PlayOneShot(deathSound);
        }

        // ==========================================
        // 5. OMAN SEQUENCE - PART 3 (Hold pose, Relocate Speaker, Turn & Cheer)
        // ==========================================

        // Subtract the time we already waited for the death sound to keep the sequence perfectly synced
        float remainingFollowThrough = Mathf.Max(0f, kickFollowThroughDuration - delayBeforeDeathSound);
        yield return new WaitForSeconds(remainingFollowThrough);

        // Relocate Oman's speaker to Oman's new physical location so the sound doesn't stay behind
        if (omanSpeaker != null && omanAnimator != null)
        {
            omanSpeaker.transform.position = omanAnimator.transform.position;
        }

        // Hold the final knee kick pose in the air for the specified duration
        yield return new WaitForSeconds(poseHoldDuration);

        // After holding the pose, turn off root motion, rotate, transition to cheering, and play dialogue
        if (omanAnimator != null)
        {
            omanAnimator.applyRootMotion = false;

            // Turn Oman ITSELF left by 120 degrees (-120f)
            yield return StartCoroutine(SmoothRotate(omanAnimator.transform, -120f, rotationDuration));

            // Enter Cheering state
            omanAnimator.SetBool(omanIdleBool, true);
        }

        if (omanSpeaker != null && omanDialogue2 != null) omanSpeaker.PlayOneShot(omanDialogue2);
    }

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

        target.rotation = endRotation;
    }
}