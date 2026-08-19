using UnityEngine;

public class MetaQuestClimbing : MonoBehaviour
{
    [System.Serializable]
    private class ClimbingHand
    {
        public Transform controller;
        public OVRInput.Controller inputController;

        [HideInInspector] public bool touchingClimbable;
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

        hand.touchingClimbable = IsTouchingClimbable(hand);

        bool gripHeld = OVRInput.Get(
            OVRInput.Button.PrimaryHandTrigger,
            hand.inputController
        );

        // Start climbing
        if (!hand.gripping && gripHeld && hand.touchingClimbable)
        {
            hand.gripping = true;

            // Important:
            // Store LOCAL position so movement caused by moving the XR rig
            // itself is not interpreted as controller movement.
            hand.lastLocalPosition = hand.controller.localPosition;
        }

        // Release
        if (hand.gripping && !gripHeld)
        {
            hand.gripping = false;
        }

        // If the hand is no longer touching a climbable surface,
        // stop that hand from climbing.
        if (hand.gripping && !hand.touchingClimbable)
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

        // Average movement when using two hands.
        Vector3 averageMovement = totalMovement / activeHands;

        // Pull hand DOWN -> move player UP.
        Vector3 rigMovement = -averageMovement * climbMultiplier;

        if (verticalOnly)
        {
            rigMovement.x = 0f;
            rigMovement.z = 0f;
        }

        // Prevent accidental huge movement caused by tracking glitches.
        if (rigMovement.magnitude > maxMovementPerFrame)
        {
            rigMovement =
                rigMovement.normalized * maxMovementPerFrame;
        }

        xrRig.position += rigMovement;
    }

    private Vector3 GetHandMovement(ClimbingHand hand)
    {
        Vector3 currentLocalPosition =
            hand.controller.localPosition;

        Vector3 localMovement =
            currentLocalPosition - hand.lastLocalPosition;

        // Update immediately.
        //
        // Because this is LOCAL position, movement of the XR rig itself
        // does not create artificial controller movement.
        hand.lastLocalPosition = currentLocalPosition;

        // Convert controller-local movement into world movement.
        Vector3 worldMovement =
            xrRig.TransformVector(localMovement);

        return worldMovement;
    }

    private bool IsTouchingClimbable(ClimbingHand hand)
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
                return true;
        }

        return false;
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.yellow;

        if (leftHand != null)
        {
            Gizmos.DrawWireSphere(
                leftHand.position,
                grabRadius
            );
        }

        if (rightHand != null)
        {
            Gizmos.DrawWireSphere(
                rightHand.position,
                grabRadius
            );
        }
    }
}