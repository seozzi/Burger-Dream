using UnityEngine;
using System.Collections;

public class BaconSlideRider : MonoBehaviour
{
    [Header("슬라이드 탑(입구) 지정")]
    public Transform slideStartPoint; // 미끄럼틀 시작점 (없으면 오프셋으로 자동 계산)

    private bool isRiding = false;

    private void OnTriggerEnter(Collider other)
    {
        // 이미 타고 있거나 플레이어가 아니면 패스
        if (isRiding) return;
        if (!other.CompareTag("Player") && other.GetComponent<CharacterController>() == null && other.GetComponent<OVRCameraRig>() == null) return;

        StartCoroutine(RideSlideRoutine(other.gameObject));
    }

    private IEnumerator RideSlideRoutine(GameObject player)
    {
        isRiding = true;

        // 1. OVR Rig / 캐릭터 컨트롤러 일시 비활성화 (위치 강제 이동을 위해)
        CharacterController cc = player.GetComponent<CharacterController>();
        Rigidbody rb = player.GetComponent<Rigidbody>();

        if (cc != null) cc.enabled = false;
        if (rb != null) rb.isKinematic = true;

        // 2. 미끄럼틀 입구 정위치로 스냅 (시작점 지정이 없다면 슬라이드 로컬 상단으로 계산)
        Vector3 targetPos = slideStartPoint != null ? slideStartPoint.position : transform.position + transform.up * 2f;

        float elapsedTime = 0f;
        Vector3 startPos = player.transform.position;

        // 부드럽게 입구로 빨려 들어가는 연출 (0.3초 동안 이동)
        while (elapsedTime < 0.3f)
        {
            player.transform.position = Vector3.Lerp(startPos, targetPos, elapsedTime / 0.3f);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        player.transform.position = targetPos;

        // 3. 물리 및 컨트롤러 활성화 후 중력 적용하여 미끄러지기 시작
        if (rb != null)
        {
            rb.isKinematic = false;
            rb.useGravity = true;
        }
        if (cc != null)
        {
            cc.enabled = true;
        }

        // 4. 미끄럼틀을 타고 내려오는 동안 추가 제어 (필요시 속도나 방향 보정 로직 추가 가능)
        // 여기서는 물리 충돌(Mesh Collider)을 믿고 자연스럽게 낙하하도록 둡니다.

        Debug.Log("미끄럼틀 탑승 완료! 시원하게 내려갑니다 🚀");
    }
}