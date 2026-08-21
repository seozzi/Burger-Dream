using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class EndingCreditsUI : MonoBehaviour
{
    [Header("UI 연결")]
    public GameObject creditsCanvas;
    public RectTransform contentRect;

    [Header("스크롤 설정")]
    public float scrollSpeed = 200f;

    [Header("하늘(Open Sky) 위치 설정")]
    public float spawnDistance = 2.0f;
    public float spawnHeight = 0.0f;

    [Header("사운드 설정")]
    public AudioClip endingPhraseVoice;
    public AudioClip endingBGM;

    private bool isRunning = false;
    private Material runtimeSkybox;
    private CanvasGroup fadeCanvasGroup;

    private void Start()
    {
        if (creditsCanvas != null)
        {
            creditsCanvas.SetActive(false);
            creditsCanvas.transform.localScale = new Vector3(0.002f, 0.002f, 0.002f);
        }

        CreateFadeCanvas();
    }

    private void CreateFadeCanvas()
    {
        Camera centerEyeCam = GetPlayerCamera();
        if (centerEyeCam == null) return;

        GameObject fadeObj = new GameObject("VR_FadeBlackout_Fixed");
        fadeObj.transform.SetParent(centerEyeCam.transform);

        Canvas canvas = fadeObj.AddComponent<Canvas>();
        canvas.renderMode = RenderMode.WorldSpace;
        canvas.sortingOrder = 32767;

        RectTransform rt = fadeObj.GetComponent<RectTransform>();
        rt.localPosition = new Vector3(0, 0, 0.15f);
        rt.localRotation = Quaternion.identity;
        rt.sizeDelta = new Vector2(10f, 10f);
        rt.localScale = Vector3.one;

        Image blackImage = fadeObj.AddComponent<Image>();
        blackImage.color = new Color(0, 0, 0, 0);

        fadeCanvasGroup = fadeObj.AddComponent<CanvasGroup>();
        fadeCanvasGroup.alpha = 0f;
        fadeCanvasGroup.blocksRaycasts = false;
    }

    private Camera GetPlayerCamera()
    {
        OVRCameraRig ovrRig = FindFirstObjectByType<OVRCameraRig>();
        if (ovrRig != null && ovrRig.centerEyeAnchor != null)
        {
            return ovrRig.centerEyeAnchor.GetComponent<Camera>();
        }
        if (Camera.main != null) return Camera.main;
        return null;
    }

    public void ShowCredits(Vector3 lookDirection)
    {
        if (isRunning) return;

        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
        }

        if (endingBGM != null)
        {
            StartCoroutine(FadeInBGMRoutine());
        }

        StartCoroutine(FadeAndScrollRoutine(lookDirection));
    }

    private IEnumerator FadeInBGMRoutine()
    {
        AudioSource bgmSource = gameObject.AddComponent<AudioSource>();
        bgmSource.clip = endingBGM;
        bgmSource.loop = true;
        bgmSource.volume = 0f;
        bgmSource.Play();

        float fadeTime = 3.0f;
        float elapsed = 0f;
        while (elapsed < fadeTime)
        {
            bgmSource.volume = Mathf.Lerp(0f, 1f, elapsed / fadeTime);
            elapsed += Time.deltaTime;
            yield return null;
        }
        bgmSource.volume = 1f;
    }

    private IEnumerator FadeAndScrollRoutine(Vector3 lookDirection)
    {
        isRunning = true;

        // [타이머 시작] 1. BGM과 함께 4초간 대기 (누적 4초)
        yield return new WaitForSeconds(4.0f);

        if (RenderSettings.skybox != null)
        {
            runtimeSkybox = new Material(RenderSettings.skybox);
            RenderSettings.skybox = runtimeSkybox;
        }

        float startExposure = 1f;
        Color startTint = Color.gray;
        if (runtimeSkybox != null)
        {
            if (runtimeSkybox.HasProperty("_Exposure")) startExposure = runtimeSkybox.GetFloat("_Exposure");
            if (runtimeSkybox.HasProperty("_Tint")) startTint = runtimeSkybox.GetColor("_Tint");
        }

        Light[] allLights = FindObjectsByType<Light>(FindObjectsSortMode.None);
        float[] startIntensities = new float[allLights.Length];
        for (int i = 0; i < allLights.Length; i++)
        {
            startIntensities[i] = allLights[i].intensity;
        }

        Color startAmbientColor = RenderSettings.ambientLight;
        float startReflection = RenderSettings.reflectionIntensity;

        // 2. 5초 동안 리얼 암전 진행 (누적 9초)
        float fadeDuration = 5.0f;
        float elapsed = 0f;

        while (elapsed < fadeDuration)
        {
            float t = elapsed / fadeDuration;
            float smoothT = Mathf.SmoothStep(0f, 1f, t);

            for (int i = 0; i < allLights.Length; i++)
            {
                if (allLights[i] != null)
                    allLights[i].intensity = Mathf.Lerp(startIntensities[i], 0f, smoothT);
            }
            RenderSettings.ambientLight = Color.Lerp(startAmbientColor, Color.black, smoothT);
            RenderSettings.reflectionIntensity = Mathf.Lerp(startReflection, 0f, smoothT);

            if (runtimeSkybox != null)
            {
                if (runtimeSkybox.HasProperty("_Exposure"))
                    runtimeSkybox.SetFloat("_Exposure", Mathf.Lerp(startExposure, 0f, smoothT));
                if (runtimeSkybox.HasProperty("_Tint"))
                    runtimeSkybox.SetColor("_Tint", Color.Lerp(startTint, Color.black, smoothT));
            }

            if (fadeCanvasGroup != null)
            {
                fadeCanvasGroup.alpha = Mathf.Lerp(0f, 1f, smoothT);
            }

            elapsed += Time.deltaTime;
            yield return null;
        }

        if (fadeCanvasGroup != null) fadeCanvasGroup.alpha = 1f;

        // --- [핵심] 씬에 있는 모든 3D 메쉬를 완전히 꺼버리기 (삭제와 동일한 효과) ---
        // Destroy를 쓰면 다른 스크립트가 고장 날 수 있으므로 껍데기(Renderer)만 끄는 것이 가장 안전합니다.
        MeshRenderer[] allMeshes = FindObjectsByType<MeshRenderer>(FindObjectsSortMode.None);
        foreach (MeshRenderer mesh in allMeshes)
        {
            mesh.enabled = false;
        }

        SkinnedMeshRenderer[] allSkinnedMeshes = FindObjectsByType<SkinnedMeshRenderer>(FindObjectsSortMode.None);
        foreach (SkinnedMeshRenderer smr in allSkinnedMeshes)
        {
            smr.enabled = false;
        }

        Camera playerCam = GetPlayerCamera();
        if (playerCam != null)
        {
            playerCam.clearFlags = CameraClearFlags.SolidColor;
            playerCam.backgroundColor = Color.black;
            // 레이어 마스크 기능은 제거했습니다. (메쉬를 다 껐으므로 굳이 안 써도 됨)
        }

        // 암전 장막 치우기
        if (fadeCanvasGroup != null) fadeCanvasGroup.alpha = 0f;

        // 3. 1초 대기 (누적 10초)
        yield return new WaitForSeconds(1.0f);

        // 4. 트리거 발동 정확히 10초 뒤에 보이스 재생 및 크레딧 시작!
        if (endingPhraseVoice != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(endingPhraseVoice);
        }

        if (creditsCanvas != null)
        {
            creditsCanvas.SetActive(true);
        }
        PositionCanvasInSky(lookDirection);

        if (contentRect != null)
        {
            float targetY = contentRect.rect.height + 500f;
            while (contentRect.anchoredPosition.y < targetY)
            {
                contentRect.anchoredPosition += Vector2.up * scrollSpeed * Time.deltaTime;
                yield return null;
            }
        }

        Debug.Log("엔딩 크레딧 스크롤 완벽 종료!");
        isRunning = false;
    }

    private void PositionCanvasInSky(Vector3 directionToSlide)
    {
        if (creditsCanvas == null) return;

        Camera playerCam = GetPlayerCamera();
        if (playerCam != null)
        {
            Vector3 playerPos = playerCam.transform.position;
            Vector3 targetPosition = playerPos + (directionToSlide * spawnDistance) + (Vector3.up * spawnHeight);

            creditsCanvas.transform.position = targetPosition;
            creditsCanvas.transform.rotation = Quaternion.LookRotation(creditsCanvas.transform.position - playerPos);
        }
    }

    private void OnDestroy()
    {
        if (runtimeSkybox != null)
        {
            Destroy(runtimeSkybox);
        }
    }
}