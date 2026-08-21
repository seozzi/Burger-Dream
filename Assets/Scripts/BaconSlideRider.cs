using UnityEngine;
using System.Collections;

public class BaconSlideRider : MonoBehaviour
{
    [Header("슬라이드 탑(입구) 지정")]
    public Transform slideStartPoint;

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

        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
        }

        CharacterController cc = player.GetComponent<CharacterController>();
        Rigidbody rb = player.GetComponent<Rigidbody>();
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
        
        // 💡 [핵심 수정] 버거 중심에서 바깥쪽(미끄럼틀 진행 방향)으로 향하는 벡터를 계산합니다.
        Vector3 outwardDirection = Vector3.zero;
        GameObject burgerObj = GameObject.Find("Burger");
        if (burgerObj != null)
        {
            outwardDirection = (transform.position - burgerObj.transform.position).normalized;
            outwardDirection.y = 0; // 수평 방향만 적용하기 위해 y축 무시
            outwardDirection.Normalize();
        }
        else
        {
            outwardDirection = transform.forward;
            outwardDirection.y = 0;
            outwardDirection.Normalize();
        }

        // 위로 1.0f 띄우고, 바깥쪽으로 1.0f 밀어낸 위치를 최종 목표 지점으로 설정합니다.
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