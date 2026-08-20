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

    [Header("Sounds")]
    public AudioClip normalClimbingSound;
    public AudioClip slippingSound;
    public AudioClip climbingBGM;
    private bool hasStartedClimbing = false;

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

            // 최초 등반 시 BGM 재생
            if (!hasStartedClimbing)
            {
                hasStartedClimbing = true;
                if (climbingBGM != null && SoundManager.Instance != null)
                {
                    SoundManager.Instance.PlayBGM(climbingBGM);
                }
            }

            FakeClimbingHold fakeHold = hand.touchedClimbable.GetComponentInParent<FakeClimbingHold>();
            
            if (fakeHold != null && !fakeHold.HasFallen)
            {
                fakeHold.TriggerFall(xrRig);
                PlaySound(slippingSound); 
            }
            else 
            {
                PlaySound(normalClimbingSound); 
            }
        }

        // Release
        if (hand.gripping && !gripHeld)
        {
            hand.gripping = false;
        }

        if (hand.gripping && hand.touchedClimbable == null)
        {
            hand.gripping = false;
        }
    }

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