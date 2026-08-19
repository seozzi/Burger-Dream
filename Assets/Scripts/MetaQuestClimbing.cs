using UnityEngine;

public class MetaQuestClimbing : MonoBehaviour
{
    [System.Serializable]
    private class ClimbingHand
    {
        public Transform controller;
        public OVRInput.Controller inputController;

        // 수정됨: bool 대신 어떤 물체와 닿았는지 정확히 추적합니다.
        [HideInInspector] public GameObject touchedClimbable;
        [HideInInspector] public bool gripping;
        [HideInInspector] public Vector3 lastLocalPosition;
    }

    [Header("XR Rig")]
    [Tooltip("The transform that should move when climbing.")]
    public Transform xrRig;

    [Header("Hands")]
    public Transform leftHand;
    public Transform rightHand;

    [Header("Climbing")]
    public string climbableTag = "Climbable";

    [Tooltip("Radius around each controller used to detect climbable objects.")]
    public float grabRadius = 0.12f;

    [Tooltip("Multiplier for climbing movement.")]
    public float climbMultiplier = 1f;

    [Tooltip("If enabled, only vertical movement is transferred to the rig.")]
    public bool verticalOnly = false;

    [Tooltip("Maximum climbing movement per frame. Prevents large tracking jumps.")]
    public float maxMovementPerFrame = 0.5f;

    [Header("Layers")]
    [Tooltip("Layers containing climbable colliders.")]
    public LayerMask climbableLayers = ~0;

    private ClimbingHand left;
    private ClimbingHand right;

    private void Awake()
    {
        if (xrRig == null)
            xrRig = transform;

        left = new ClimbingHand
        {
            controller = leftHand,
            inputController = OVRInput.Controller.LTouch
        };

        right = new ClimbingHand
        {
            controller = rightHand,
            inputController = OVRInput.Controller.RTouch
        };
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

        // 수정됨: bool 반환에서 GameObject 반환으로 변경
        hand.touchedClimbable = GetTouchedClimbable(hand);

        bool gripHeld = OVRInput.Get(
            OVRInput.Button.PrimaryHandTrigger,
            hand.inputController
        );

        // Start climbing
        // 수정됨: touchedClimbable이 null이 아닐 때 작동하도록 조건 변경
        if (!hand.gripping && gripHeld && hand.touchedClimbable != null)
        {
            hand.gripping = true;
            hand.lastLocalPosition = hand.controller.localPosition;

            // [추가된 로직] 가짜 홀드인지 확인하고 낙하 루틴을 실행합니다.
            FakeClimbingHold fakeHold = hand.touchedClimbable.GetComponentInParent<FakeClimbingHold>();
            if (fakeHold != null)
            {
                fakeHold.TriggerFall(xrRig);
            }
        }

        // Release
        if (hand.gripping && !gripHeld)
        {
            hand.gripping = false;
        }

        // 손이 더 이상 등반 가능한 표면과 닿아있지 않으면 그립 해제
        if (hand.gripping && hand.touchedClimbable == null)
        {
            hand.gripping = false;
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

    // 수정됨: bool 반환에서 닿은 GameObject를 반환하도록 변경
    private GameObject GetTouchedClimbable(ClimbingHand hand)
    {
        Collider[] colliders = Physics.OverlapSphere(
            hand.controller.position,
            grabRadius,
            climbableLayers,
            QueryTriggerInteraction.Ignore // 만약 Trigger를 켜서 쓴다면 이전 대화처럼 Collide로 변경하세요.
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
        {
            Gizmos.DrawWireSphere(leftHand.position, grabRadius);
        }

        if (rightHand != null)
        {
            Gizmos.DrawWireSphere(rightHand.position, grabRadius);
        }
    }
}