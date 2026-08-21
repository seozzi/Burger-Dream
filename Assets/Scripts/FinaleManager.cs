using UnityEngine;
using TMPro;

public class FinaleManager : MonoBehaviour
{
    [Header("오브젝트 할당")]
    public GameObject restaurantEnvironment;
    public ParticleSystem explosionEffect;
    public AudioClip explosionSound;

    [Header("축하 사운드 설정")]
    public AudioClip celebrationBGM;

    [Header("축하 사절단 설정")]
    public GameObject[] celebrationOMans;

    [Header("엔딩 프리팹 할당")]
    public GameObject baconSlidePrefab;
    public GameObject[] foodPrefabs;
    public string[] foodNames;
    public GameObject textLabelPrefab;

    // ==========================================
    // 상수(const)였던 값들을 인스펙터에서 조절 가능하도록 변경했습니다.
    // ==========================================
    [Header("미끄럼틀 생성 위치 조절")]
    [Tooltip("버거 중심으로부터의 거리 (기존: 8.5)")]
    public float slideRadius = 8.5f;
    [Tooltip("버거 중심 기준 미끄럼틀의 높이 (기존: 8.2)")]
    public float slideHeight = 8.2f;
    [Tooltip("미끄럼틀의 기울기 각도 (기존: -31.153)")]
    public float slideZRotation = -31.153f;

    private bool hasTriggered = false;

    public void TriggerRestaurantExplosion()
    {
        if (hasTriggered) return;
        hasTriggered = true;

        EnsurePlayerReady();

        if (explosionEffect != null) explosionEffect.Play();
        if (restaurantEnvironment != null) restaurantEnvironment.SetActive(false);

        if (explosionSound != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(explosionSound);
        }

        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
            if (celebrationBGM != null)
            {
                SoundManager.Instance.PlayBGM(celebrationBGM);
            }
        }

        ShowCongratulators();
        SpawnSlidesAndFood();
    }

    private void ShowCongratulators()
    {
        if (celebrationOMans != null)
        {
            foreach (GameObject oMan in celebrationOMans)
            {
                if (oMan != null)
                {
                    oMan.SetActive(true);
                }
            }
        }
    }

    private void EnsurePlayerReady()
    {
        OVRCameraRig ovrRig = FindFirstObjectByType<OVRCameraRig>();
        GameObject playerObj = null;

        if (ovrRig != null)
        {
            playerObj = ovrRig.gameObject;
        }
        else
        {
            CharacterController cc = FindFirstObjectByType<CharacterController>();
            if (cc != null) playerObj = cc.gameObject;
        }

        if (playerObj != null)
        {
            try
            {
                if (!playerObj.CompareTag("Player"))
                {
                    playerObj.tag = "Player";
                }
            }
            catch { }

            if (playerObj.GetComponent<CharacterController>() == null && playerObj.GetComponent<Rigidbody>() == null)
            {
                Rigidbody rb = playerObj.AddComponent<Rigidbody>();
                rb.useGravity = false;
                rb.isKinematic = true;
            }
        }
    }

    private void SpawnSlidesAndFood()
    {
        Transform burgerCenter = null;
        GameObject burgerObj = GameObject.Find("Burger");
        if (burgerObj != null)
        {
            burgerCenter = burgerObj.transform;
        }
        else
        {
            burgerCenter = this.transform;
        }

        for (int i = 0; i < 8; i++)
        {
            float angleDeg = i * 45f;
            float angleRad = angleDeg * Mathf.Deg2Rad;

            // 새로 만든 변수를 적용합니다.
            float x = Mathf.Sin(angleRad) * slideRadius;
            float z = Mathf.Cos(angleRad) * slideRadius;

            Vector3 slideSpawnPos = burgerCenter.position + new Vector3(x, slideHeight, z);

            Vector3 directionFromCenter = (slideSpawnPos - burgerCenter.position).normalized;
            directionFromCenter.y = 0;

            Quaternion lookRotation = Quaternion.LookRotation(directionFromCenter);
            Quaternion finalRotation = lookRotation * Quaternion.Euler(0f, -90f, slideZRotation);

            GameObject slide = Instantiate(baconSlidePrefab, slideSpawnPos, finalRotation);

            MeshCollider slideCollider = slide.GetComponent<MeshCollider>();
            if (slideCollider == null)
            {
                slideCollider = slide.AddComponent<MeshCollider>();
            }
            slideCollider.convex = false;

            GameObject triggerObj = new GameObject("SlideTrigger");
            triggerObj.transform.SetParent(slide.transform);
            triggerObj.transform.localPosition = new Vector3(-11.33f, 9.67f, -0.05f);

            SphereCollider triggerSphere = triggerObj.AddComponent<SphereCollider>();
            triggerSphere.isTrigger = true;
            triggerSphere.radius = 1.2f;

            triggerObj.AddComponent<BaconSlideRider>();

            if (foodPrefabs != null && foodPrefabs.Length > 0)
            {
                int foodIndex = i % foodPrefabs.Length;
                if (foodPrefabs[foodIndex] != null)
                {
                    Vector3 foodSpawnPos = slideSpawnPos + Vector3.up * 16.0f - (directionFromCenter * 6.5f);
                    Quaternion foodRotation = Quaternion.LookRotation(directionFromCenter, Vector3.up);

                    GameObject food = Instantiate(foodPrefabs[foodIndex], foodSpawnPos, foodRotation);
                    food.transform.localScale = new Vector3(4f, 4f, 4f);

                    if (textLabelPrefab != null && foodNames != null && foodNames.Length > foodIndex)
                    {
                        Vector3 textSpawnPos = foodSpawnPos + Vector3.up * 0.8f;
                        GameObject textObj = Instantiate(textLabelPrefab, textSpawnPos, Quaternion.identity);
                        textObj.transform.SetParent(food.transform);

                        TextMeshPro textMesh = textObj.GetComponent<TextMeshPro>();
                        if (textMesh != null)
                        {
                            textMesh.text = foodNames[foodIndex];
                            textObj.transform.forward = directionFromCenter;
                        }
                    }
                }
            }
        }
    }
}