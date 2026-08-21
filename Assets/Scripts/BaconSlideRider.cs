using UnityEngine;
using System.Collections; // 코루틴을 위해 추가

public class BaconSlideRider : MonoBehaviour
{
    [Header("슬라이드 탑(입구) 지정")]
    public Transform slideStartPoint;

    // 유저님의 중복 실행 방지 변수 (이전처럼 static으로 유지하여 한 번만 실행되게 함)
    private static bool hasFinished = false;
    // 팀원분의 탑승 중복 방지 변수
    private bool isRiding = false;

    private void Start()
    {
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb == null)
        {
            rb = gameObject.AddComponent<Rigidbody>();
            rb.isKinematic = true;
            rb.useGravity = false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // 두 조건 중 하나라도 진행 중이면 막음
        if (hasFinished || isRiding) return;

        // 팀원분의 꼼꼼한 플레이어 체크 로직 적용
        bool isPlayer = other.CompareTag("Player") ||
                        other.GetComponentInParent<CharacterController>() != null ||
                        other.GetComponentInParent<OVRCameraRig>() != null;

        if (!isPlayer) return;

        GameObject playerBody = other.gameObject;
        if (other.GetComponentInParent<OVRCameraRig>() != null)
        {
            playerBody = other.GetComponentInParent<OVRCameraRig>().gameObject;
        }
        else if (other.GetComponentInParent<CharacterController>() != null)
        {
            playerBody = other.GetComponentInParent<CharacterController>().gameObject;
        }

        Debug.Log($"[BaconSlideRider] {gameObject.name} 플레이어 충돌 감지! 탑승 및 엔딩을 동시에 시작합니다.");

        // 1. 유저님의 엔딩 크레딧 연출 시작
        TriggerEndingCredits();

        // 2. 팀원분의 미끄럼틀 탑승 물리 연출 시작
        StartCoroutine(RideSlideRoutine(playerBody));
    }

    private void TriggerEndingCredits()
    {
        hasFinished = true;

        EndingCreditsUI creditsUI = FindFirstObjectByType<EndingCreditsUI>();
        if (creditsUI != null)
        {
            GameObject burger = GameObject.Find("Burger");
            Vector3 burgerPos = burger != null ? burger.transform.position : Vector3.zero;

            // 미끄럼틀 본체(parent) 위치를 기준으로 하늘 방향 계산
            Vector3 directionToSky = (transform.parent != null ? transform.parent.position : transform.position - burgerPos).normalized;
            directionToSky.y = 0;

            creditsUI.ShowCredits(directionToSky);
        }
    }

    // 팀원분이 작성하신 미끄럼틀 물리 이동 코루틴 (깨진 부분 복구 완료)
    private IEnumerator RideSlideRoutine(GameObject player)
    {
        isRiding = true;

        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
        }

        CharacterController cc = player.GetComponent<CharacterController>();
        Rigidbody rb = player.GetComponent<Rigidbody>();

        // MetaQuestClimbing 컴포넌트 안전하게 가져오기
        MonoBehaviour climbing = null;
        var climbingComp = player.GetComponent("MetaQuestClimbing");
        if (climbingComp == null) climbingComp = player.GetComponentInChildren("MetaQuestClimbing");
        if (climbingComp != null) climbing = climbingComp as MonoBehaviour;

        if (climbing != null) climbing.enabled = false;
        if (cc != null) cc.enabled = false;

        SphereCollider sledCollider = player.GetComponent<SphereCollider>();
        if (sledCollider == null)
        {
            sledCollider = player.AddComponent<SphereCollider>();
            sledCollider.radius = 0.3f;
            sledCollider.center = new Vector3(0, 0.4f, 0);
        }
        sledCollider.enabled = true;

        RigidbodyConstraints originalConstraints = RigidbodyConstraints.None;

        if (rb != null)
        {
            originalConstraints = rb.constraints;
            rb.isKinematic = true;
            rb.collisionDetectionMode = CollisionDetectionMode.Continuous;
            rb.constraints = RigidbodyConstraints.FreezeRotation;
        }

        Vector3 basePos = slideStartPoint != null ? slideStartPoint.position : transform.position + transform.up * 2f;

        Vector3 outwardDirection = Vector3.zero;
        GameObject burgerObj = GameObject.Find("Burger");
        if (burgerObj != null)
        {
            outwardDirection = (transform.position - burgerObj.transform.position).normalized;
            outwardDirection.y = 0;
            outwardDirection.Normalize();
        }
        else
        {
            outwardDirection = transform.forward;
            outwardDirection.y = 0;
            outwardDirection.Normalize();
        }

        Vector3 targetPos = basePos + (Vector3.up * 1.0f) + (outwardDirection * 1.0f);

        float elapsedTime = 0f;
        Vector3 startPos = player.transform.position;

        // [복구된 부분] 0.3초 동안 플레이어를 미끄럼틀 시작 위치로 부드럽게 끌어당김
        while (elapsedTime < 0.3f)
        {
            player.transform.position = Vector3.Lerp(startPos, targetPos, elapsedTime / 0.3f);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        player.transform.position = targetPos;

        if (rb != null)
        {
            rb.isKinematic = false;
            rb.useGravity = true;
        }

        Debug.Log("미끄럼틀 탑승 완료! 시원하게 내려갑니다 🚀");

        float rideTimer = 0f;
        while (player.transform.position.y > 2.0f && rideTimer < 5.0f)
        {
            rideTimer += Time.deltaTime;
            yield return null;
        }

        Debug.Log("바닥 도착! 미끄럼틀 하차 완료.");
        if (rb != null)
        {
            rb.isKinematic = true;
            rb.useGravity = false;
            rb.constraints = originalConstraints;
        }
        if (sledCollider != null) sledCollider.enabled = false;
        if (cc != null) cc.enabled = true;
        if (climbing != null) climbing.enabled = true;

        isRiding = false;
    }
}