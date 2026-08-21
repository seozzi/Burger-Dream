using UnityEngine;
using System.Collections;

public class BaconSlideRider : MonoBehaviour
{
    [Header("슬라이드 탑(입구) 지정")]
    public Transform slideStartPoint; // 미끄럼틀 시작점[cite: 4]

    private bool isRiding = false;

    private void OnTriggerEnter(Collider other)
    {
        if (isRiding) return;

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

        StartCoroutine(RideSlideRoutine(playerBody));
    }

    private IEnumerator RideSlideRoutine(GameObject player)
    {
        isRiding = true;

        CharacterController cc = player.GetComponent<CharacterController>();
        Rigidbody rb = player.GetComponent<Rigidbody>();
        MetaQuestClimbing climbing = player.GetComponent<MetaQuestClimbing>();
        if (climbing == null) climbing = player.GetComponentInChildren<MetaQuestClimbing>();

        // 1. 기존 조작 및 클라이밍 끄기 (미끄럼틀 타는 내내 꺼야 합니다!)
        if (climbing != null) climbing.enabled = false;
        if (cc != null) cc.enabled = false; 

        // 2. 물리 썰매(SphereCollider) 임시 장착
        SphereCollider sledCollider = player.GetComponent<SphereCollider>();
        if (sledCollider == null)
        {
            sledCollider = player.AddComponent<SphereCollider>();
            sledCollider.radius = 0.3f;
            sledCollider.center = new Vector3(0, 0.4f, 0); // 발끝에 썰매 부착
        }
        sledCollider.enabled = true;

        if (rb != null)
        {
            rb.isKinematic = true;
            // 얇은 미끄럼틀을 고속으로 뚫고 나가는 버그 방지
            rb.collisionDetectionMode = CollisionDetectionMode.Continuous; 
        }

        // 3. 입구 정위치로 부드럽게 흡입
        Vector3 targetPos = slideStartPoint != null ? slideStartPoint.position : transform.position + transform.up * 2f;
        float elapsedTime = 0f;
        Vector3 startPos = player.transform.position;

        while (elapsedTime < 0.3f)
        {
            player.transform.position = Vector3.Lerp(startPos, targetPos, elapsedTime / 0.3f);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        player.transform.position = targetPos;

        // 4. 낙하 시작 (물리 썰매를 타고 미끄러짐)
        if (rb != null)
        {
            rb.isKinematic = false;
            rb.useGravity = true;
        }

        Debug.Log("미끄럼틀 탑승 완료! 시원하게 내려갑니다 🚀");

        // 5. 바닥(Y좌표 2.0 이하)에 도착하거나 5초가 지날 때까지 대기
        float rideTimer = 0f;
        while (player.transform.position.y > 2.0f && rideTimer < 5.0f)
        {
            rideTimer += Time.deltaTime;
            yield return null;
        }

        // 6. 하차 및 원래 상태로 복구
        Debug.Log("바닥 도착! 미끄럼틀 하차 완료.");
        if (rb != null)
        {
            rb.isKinematic = true;
            rb.useGravity = false;
        }
        if (sledCollider != null) sledCollider.enabled = false; // 썰매 없애기
        if (cc != null) cc.enabled = true; // 걷기 복구
        if (climbing != null) climbing.enabled = true; // 클라이밍 복구

        isRiding = false;
    }
}