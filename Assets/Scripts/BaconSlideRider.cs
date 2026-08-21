using UnityEngine;
using System.Collections;

public class BaconSlideRider : MonoBehaviour
{
    [Header("슬라이드 탑(입구) 지정")]
    public Transform slideStartPoint;

    private static bool hasFinished = false;
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
        if (hasFinished || isRiding) return;

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

        TriggerEndingCredits();
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

            Vector3 directionToSky = (transform.parent != null ? transform.parent.position : transform.position - burgerPos).normalized;
            directionToSky.y = 0;

            creditsUI.ShowCredits(directionToSky);
        }
    }

    private IEnumerator RideSlideRoutine(GameObject player)
    {
        isRiding = true;

        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
        }

        CharacterController cc = player.GetComponent<CharacterController>();
        Rigidbody rb = player.GetComponent<Rigidbody>();

        // 💡 [수정된 부분] Unity 6에서 에러가 나는 문자열 방식을 버리고 팀원분의 원본 코드로 복구!
        MetaQuestClimbing climbing = player.GetComponent<MetaQuestClimbing>();
        if (climbing == null) climbing = player.GetComponentInChildren<MetaQuestClimbing>();

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