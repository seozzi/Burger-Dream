using UnityEngine;

public class BaconSlideRider : MonoBehaviour
{
    private bool hasFinished = false;

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
        if (hasFinished) return;

        bool isPlayerBody = other.CompareTag("Player") ||
                            other.GetComponent<CharacterController>() != null ||
                            other.GetComponent<OVRCameraRig>() != null;

        if (!isPlayerBody) return;

        Debug.Log($"[BaconSlideRider] {gameObject.name} 플레이어 충돌 감지 완료!");
        TriggerEndingCredits();
    }

    private void TriggerEndingCredits()
    {
        hasFinished = true;

        EndingCreditsUI creditsUI = FindFirstObjectByType<EndingCreditsUI>();
        if (creditsUI != null)
        {
            GameObject burger = GameObject.Find("Burger");
            Vector3 burgerPos = burger != null ? burger.transform.position : Vector3.zero;

            // 미끄럼틀 본체 위치를 기준으로 계산
            Vector3 directionToSky = (transform.parent.position - burgerPos).normalized;
            directionToSky.y = 0;

            creditsUI.ShowCredits(directionToSky);
        }
    }
}