using System.Collections;
using UnityEngine;

public class FakeClimbingHold : MonoBehaviour
{
    [Header("Fake Hold Settings")]
    [Tooltip("아래로 떨어지는 거리")]
    public float dropDistance = 3f;

    [Tooltip("떨어지는데 걸리는 시간 (초)")]
    public float dropDuration = 1f;

    // 추가됨: 이미 미끄러졌는지 여부를 외부에서 확인할 수 있는 프로퍼티
    public bool HasFallen { get; private set; } = false;

    private bool isFalling = false;

    public void TriggerFall(Transform xrRig)
    {
        // 수정됨: 아직 떨어지는 중이 아니고, 떨어진 적도 없을 때만 실행
        if (!isFalling && !HasFallen)
        {
            StartCoroutine(FallRoutine(xrRig));
        }
    }

    private IEnumerator FallRoutine(Transform xrRig)
    {
        isFalling = true;
        HasFallen = true; // 떨어지기 시작했음을 기록
        
        float elapsedTime = 0f;
        Vector3 startPosition = transform.position;
        Vector3 targetPosition = startPosition + (Vector3.down * dropDistance);

        while (elapsedTime < dropDuration)
        {
            float fallStep = (dropDistance / dropDuration) * Time.deltaTime;
            Vector3 movement = Vector3.down * fallStep;

            transform.position += movement;

            if (xrRig != null)
            {
                xrRig.position += movement;
            }

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        transform.position = targetPosition;
        isFalling = false;
    }
}