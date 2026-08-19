using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class Act1Director : MonoBehaviour
{
    [Header("1. Shop Approach Sequence")]
    [SerializeField] private Transform burgerShop;
    [SerializeField] private Transform targetPlayer;
    [SerializeField] private float moveDuration = 10f;
    [SerializeField] private float moveDistance = 8f;
    [SerializeField] private AudioSource walkingAudioSource;

    [Header("2. Door & Push Sequence")]
    [SerializeField] private float delayBeforeDoorOpen = 1.0f;
    [SerializeField] private AudioClip doorOpenSound;

    [SerializeField] private float pushDuration = 0.2f;
    [SerializeField] private float pushDistance = 3f;
    [SerializeField] private AudioClip pushSound;

    [SerializeField] private float delayAfterPush = 1.0f;
    [SerializeField] private float doorCloseDelay = 0.8f;
    [SerializeField] private AudioClip doorCloseSound;

    [Header("3. Blackout & Scene Transition")]
    [SerializeField] private string nextSceneName = "BurgerScene";

    private Vector3 startPosition;

    void Start()
    {
        if (burgerShop != null) startPosition = burgerShop.position;
        StartCoroutine(PlayAct1Sequence());
    }

    IEnumerator PlayAct1Sequence()
    {
        // ==========================================
        // SCENE 1: The Burger Shop approaches
        // ==========================================
        float elapsedTime = 0f;
        Vector3 finalShopPos = startPosition;

        float zDirection = (startPosition.z > targetPlayer.position.z) ? -1f : 1f;
        finalShopPos.z = startPosition.z + (zDirection * moveDistance);

        if (walkingAudioSource != null) walkingAudioSource.Play();

        while (elapsedTime < moveDuration)
        {
            burgerShop.position = Vector3.Lerp(startPosition, finalShopPos, elapsedTime / moveDuration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }

        burgerShop.position = finalShopPos;
        if (walkingAudioSource != null) walkingAudioSource.Stop();

        // ==========================================
        // SCENE 2: Door Opens
        // ==========================================
        yield return new WaitForSeconds(delayBeforeDoorOpen);

        if (SoundManager.Instance != null && doorOpenSound != null)
        {
            SoundManager.Instance.PlaySFX(doorOpenSound);
            yield return new WaitForSeconds(doorOpenSound.length);
        }

        // ==========================================
        // SCENE 3: Pushed into the shop
        // ==========================================
        if (SoundManager.Instance != null && pushSound != null)
        {
            SoundManager.Instance.PlaySFX(pushSound);
        }

        Vector3 playerStart = targetPlayer.position;
        Vector3 playerEnd = playerStart + new Vector3(0f, 0f, pushDistance);

        elapsedTime = 0f;
        while (elapsedTime < pushDuration)
        {
            targetPlayer.position = Vector3.Lerp(playerStart, playerEnd, elapsedTime / pushDuration);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        targetPlayer.position = playerEnd; // Push complete!

        // ==========================================
        // SCENE 4: LIGHTS OUT (Immediately after push ends)
        // ==========================================
        // 💡 Turn off all lights right after the player is pushed inside
        Light[] allSceneLights = FindObjectsOfType<Light>();
        foreach (Light lightObj in allSceneLights)
        {
            if (lightObj != null) lightObj.enabled = false;
        }

        RenderSettings.ambientIntensity = 0f;
        RenderSettings.reflectionIntensity = 0f;
        RenderSettings.skybox = null;

        // ==========================================
        // SCENE 5: Door Closes in Darkness & Scene Transition
        // ==========================================
        yield return new WaitForSeconds(delayAfterPush);
        yield return new WaitForSeconds(doorCloseDelay);

        if (SoundManager.Instance != null && doorCloseSound != null)
        {
            SoundManager.Instance.PlaySFX(doorCloseSound);
            yield return new WaitForSeconds(doorCloseSound.length);
        }

        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(nextSceneName);
    }
}