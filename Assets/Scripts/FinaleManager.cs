using UnityEngine;
using TMPro;

public class FinaleManager : MonoBehaviour
{
    [Header("오브젝트 할당")]
    public GameObject restaurantEnvironment;
    public ParticleSystem explosionEffect;
    public AudioClip explosionSound; // 기존 폭발(뾰잉) 사운드

    [Header("축하 사운드 설정")]
    public AudioClip celebrationBGM; // 새로 추가된 축하 BGM

    [Header("축하 사절단 설정")]
    public GameObject[] celebrationOMans;

    [Header("엔딩 프리팹 할당")]
    public GameObject baconSlidePrefab;
    public GameObject[] foodPrefabs;
    public string[] foodNames;
    public GameObject textLabelPrefab;

    private const float FIXED_RADIUS = 8.5f;
    private const float FIXED_HEIGHT = 8.2f;
    private const float FIXED_Z_ROTATION = -31.153f;

    private bool hasTriggered = false;

    public void TriggerRestaurantExplosion()
    {
        if (hasTriggered) return;
        hasTriggered = true;

        EnsurePlayerReady();

        if (explosionEffect != null) explosionEffect.Play();
        if (restaurantEnvironment != null) restaurantEnvironment.SetActive(false);

        // 1. 폭발 사운드 재생 (SFX)
        if (explosionSound != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(explosionSound);
        }

        // 2. 기존 BGM 중지 및 축하 BGM 재생
        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
            if (celebrationBGM != null)
            {
                SoundManager.Instance.PlayBGM(celebrationBGM);
            }
        }

        // 3. 축하 사절단 등장
        ShowCongratulators();

        // 4. 슬라이드 및 음식 생성
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
        // 씬에서 "Burger" 이름을 가진 오브젝트를 자동으로 탐색합니다.
        Transform burgerCenter = null;
        GameObject burgerObj = GameObject.Find("Burger");
        if (burgerObj != null)
        {
            burgerCenter = burgerObj.transform;
        }
        else
        {
            // 만약 "Burger"라는 이름이 없다면 매니저 자신의 위치를 임시 중앙으로 사용
            burgerCenter = this.transform;
            Debug.LogWarning("씬에서 'Burger' 오브젝트를 찾지 못해 FinaleManager의 위치를 중앙으로 사용합니다.");
        }

        for (int i = 0; i < 8; i++)
        {
            float angleDeg = i * 45f;
            float angleRad = angleDeg * Mathf.Deg2Rad;

            float x = Mathf.Sin(angleRad) * FIXED_RADIUS;
            float z = Mathf.Cos(angleRad) * FIXED_RADIUS;

            // 1. 슬라이드 생성
            Vector3 slideSpawnPos = burgerCenter.position + new Vector3(x, FIXED_HEIGHT, z);

            Vector3 directionFromCenter = (slideSpawnPos - burgerCenter.position).normalized;
            directionFromCenter.y = 0;

            Quaternion lookRotation = Quaternion.LookRotation(directionFromCenter);
            Quaternion finalRotation = lookRotation * Quaternion.Euler(0f, -90f, FIXED_Z_ROTATION);

            GameObject slide = Instantiate(baconSlidePrefab, slideSpawnPos, finalRotation);

            // 미끄럼틀 메시 콜라이더 세팅
            MeshCollider slideCollider = slide.GetComponent<MeshCollider>();
            if (slideCollider == null)
            {
                slideCollider = slide.AddComponent<MeshCollider>();
            }
            slideCollider.convex = false;

            // SlideTrigger 생성 (정밀 대칭 위치, SphereCollider, 라이더 부착)
            GameObject triggerObj = new GameObject("SlideTrigger");
            triggerObj.transform.SetParent(slide.transform);
            triggerObj.transform.localPosition = new Vector3(-11.33f, 9.67f, -0.05f);

            SphereCollider triggerSphere = triggerObj.AddComponent<SphereCollider>();
            triggerSphere.isTrigger = true;
            triggerSphere.radius = 1.2f;

            triggerObj.AddComponent<BaconSlideRider>();

            // 2. 음식 및 텍스트 생성
            if (foodPrefabs != null && foodPrefabs.Length > 0)
            {
                int foodIndex = i % foodPrefabs.Length;
                if (foodPrefabs[foodIndex] != null)
                {
                    Vector3 foodSpawnPos = slideSpawnPos + Vector3.up * 16.0f - (directionFromCenter * 6.5f);
                    Quaternion foodRotation = Quaternion.LookRotation(directionFromCenter, Vector3.up);

                    GameObject food = Instantiate(foodPrefabs[foodIndex], foodSpawnPos, foodRotation);
                    food.transform.localScale = new Vector3(4f, 4f, 4f);

                    // 3. 텍스트 라벨 생성
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