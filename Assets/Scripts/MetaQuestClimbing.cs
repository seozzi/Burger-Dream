using UnityEngine;

public class MetaQuestClimbing : MonoBehaviour
{
    [System.Serializable]
    private class ClimbingHand
    {
        public Transform controller;
        public OVRInput.Controller inputController;

        [HideInInspector] public GameObject touchedClimbable;
        [HideInInspector] public bool gripping;
        [HideInInspector] public Vector3 lastLocalPosition;
    }

    [Header("XR Rig")]
    public Transform xrRig;

    [Header("Hands")]
    public Transform leftHand;
    public Transform rightHand;

    [Header("Climbing")]
    public string climbableTag = "Climbable";
    public float grabRadius = 0.12f;
    public float climbMultiplier = 1f;
    public bool verticalOnly = false;
    public float maxMovementPerFrame = 0.5f;

    [Header("Layers")]
    public LayerMask climbableLayers = ~0;

    // ==========================================
    // 새로 추가된 사운드 설정 부분
    // ==========================================
    [Header("Sounds")]
    [Tooltip("일반 홀드(또는 이미 미끄러진 가짜 홀드)를 잡았을 때 나는 소리")]
    public AudioClip normalClimbingSound;
    
    [Tooltip("가짜 홀드가 처음 미끄러질 때 나는 소리")]
    public AudioClip slippingSound;
    // ==========================================

    private ClimbingHand left;
    private ClimbingHand right;

    private void Awake()
    {
        if (xrRig == null)
            xrRig = transform;

        left = new ClimbingHand { controller = leftHand, inputController = OVRInput.Controller.LTouch };
        right = new ClimbingHand { controller = rightHand, inputController = OVRInput.Controller.RTouch };
    }

    private void Update()
    {
        UpdateHand(left);
        UpdateHand(right);

        ProcessClimbing();
    }

    private void UpdateHand(ClimbingHand hand)
    {
        if (hand.controller == null)
            return;

        hand.touchedClimbable = GetTouchedClimbable(hand);

        bool gripHeld = OVRInput.Get(OVRInput.Button.PrimaryHandTrigger, hand.inputController);

        // Start climbing
        if (!hand.gripping && gripHeld && hand.touchedClimbable != null)
        {
            hand.gripping = true;
            hand.lastLocalPosition = hand.controller.localPosition;

            FakeClimbingHold fakeHold = hand.touchedClimbable.GetComponentInParent<FakeClimbingHold>();
            
            // 추가된 로직: 가짜 홀드이고, 아직 미끄러지지 않은 상태일 때
            if (fakeHold != null && !fakeHold.HasFallen)
            {
                fakeHold.TriggerFall(xrRig);
                PlaySound(slippingSound); // 미끄러지는 사운드 재생
            }
            // 일반 홀드이거나, 이미 미끄러져서 일반 홀드가 된 가짜 홀드일 때
            else 
            {
                PlaySound(normalClimbingSound); // 일반 등반 사운드 재생
            }
        }

        // Release
        if (hand.gripping && !gripHeld)
        {
            hand.gripping = false;
        }

        // If the hand is no longer touching a climbable surface
        if (hand.gripping && hand.touchedClimbable == null)
        {
            hand.gripping = false;
        }
    }

    // 사운드 재생을 위한 헬퍼 함수
    private void PlaySound(AudioClip clip)
    {
        if (clip != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(clip);
        }
    }

    private void ProcessClimbing()
    {
        int activeHands = 0;
        Vector3 totalMovement = Vector3.zero;

        if (left.gripping)
        {
            Vector3 movement = GetHandMovement(left);
            totalMovement += movement;
            activeHands++;
        }

        if (right.gripping)
        {
            Vector3 movement = GetHandMovement(right);
            totalMovement += movement;
            activeHands++;
        }

        if (activeHands == 0)
            return;

        Vector3 averageMovement = totalMovement / activeHands;
        Vector3 rigMovement = -averageMovement * climbMultiplier;

        if (verticalOnly)
        {
            rigMovement.x = 0f;
            rigMovement.z = 0f;
        }

        if (rigMovement.magnitude > maxMovementPerFrame)
        {
            rigMovement = rigMovement.normalized * maxMovementPerFrame;
        }

        xrRig.position += rigMovement;
    }

    private Vector3 GetHandMovement(ClimbingHand hand)
    {
        Vector3 currentLocalPosition = hand.controller.localPosition;
        Vector3 localMovement = currentLocalPosition - hand.lastLocalPosition;
        hand.lastLocalPosition = currentLocalPosition;

        Vector3 worldMovement = xrRig.TransformVector(localMovement);
        return worldMovement;
    }

    private GameObject GetTouchedClimbable(ClimbingHand hand)
    {
        Collider[] colliders = Physics.OverlapSphere(
            hand.controller.position,
            grabRadius,
            climbableLayers,
            QueryTriggerInteraction.Ignore
        );

        foreach (Collider collider in colliders)
        {
            if (collider.CompareTag(climbableTag))
                return collider.gameObject;
        }

        return null;
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;

        if (leftHand != null)
            Gizmos.DrawWireSphere(leftHand.position, grabRadius);

        if (rightHand != null)
            Gizmos.DrawWireSphere(rightHand.position, grabRadius);
    }
}