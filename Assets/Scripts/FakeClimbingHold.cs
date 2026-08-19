using System.Collections;
using UnityEngine;

public class FakeClimbingHold : MonoBehaviour
{
    [Header("Fake Hold Settings")]
    [Tooltip("아래로 떨어지는 거리")]
    public float dropDistance = 3f;

    [Tooltip("떨어지는데 걸리는 시간 (초)")]
    public float dropDuration = 1f;

    private bool isFalling = false;

    // 플레이어가 이 홀드를 처음 잡았을 때 MetaQuestClimbing에서 호출합니다.
    public void TriggerFall(Transform xrRig)
    {
        if (!isFalling)
        {
            StartCoroutine(FallRoutine(xrRig));
        }
    }

    private IEnumerator FallRoutine(Transform xrRig)
    {
        isFalling = true;
        float elapsedTime = 0f;
        
        Vector3 startPosition = transform.position;
        Vector3 targetPosition = startPosition + (Vector3.down * dropDistance);

        while (elapsedTime < dropDuration)
        {
            // 한 프레임당 이동해야 할 거리 계산
            float fallStep = (dropDistance / dropDuration) * Time.deltaTime;
            Vector3 movement = Vector3.down * fallStep;

            // 1. 홀드 자체를 아래로 이동
            transform.position += movement;

            // 2. 홀드를 잡고 있는 플레이어(XR Rig)도 함께 아래로 이동
            if (xrRig != null)
            {
                xrRig.position += movement;
            }

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        // 최종 위치 보정
        transform.position = targetPosition;
    }
}