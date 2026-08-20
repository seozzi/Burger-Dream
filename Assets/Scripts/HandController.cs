using UnityEngine;
using UnityEngine.XR;

[RequireComponent(typeof(Animator))]
public class HandController : MonoBehaviour
{
    public enum HandType { Left, Right }

    [Header("References")]
    [SerializeField] private Transform controllerAnchor;
    [SerializeField] private HandType handType = HandType.Right;

    [Header("Calibration Offset")]
    [SerializeField] private Vector3 positionOffset;

    [Header("Grip Feel")]
    [SerializeField] private float gripBlendSpeed = 12f;

    private Animator animator;

    private static readonly int AnimatorGripParam = Animator.StringToHash("Grip");

    private float currentGrip;
    private bool isClimbGripping;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    private void Start()
    {
        if (controllerAnchor == null)
        {
            string controllerName = handType == HandType.Left ? "Left Controller" : "Right Controller";
            GameObject controllerObject = GameObject.Find(controllerName);
            if (controllerObject != null) controllerAnchor = controllerObject.transform;
        }
    }

    private void Update()
    {
        FollowController();
        UpdatePosture();
    }

    private void FollowController()
    {
        if (controllerAnchor == null) return;

        transform.position = controllerAnchor.TransformPoint(positionOffset);
        transform.rotation = controllerAnchor.rotation;
    }

    private void UpdatePosture()
    {
        float targetGrip = 0f;

        if (isClimbGripping)
        {
            targetGrip = 1f;
        }
        else
        {
            XRNode node = handType == HandType.Left ? XRNode.LeftHand : XRNode.RightHand;
            InputDevice device = InputDevices.GetDeviceAtXRNode(node);

            // Changed from CommonUsages.trigger to CommonUsages.grip (Middle Finger)
            if (device.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
            {
                targetGrip = gripValue;

                if (gripValue > 0.05f)
                {
                    Debug.Log($"[{handType}] Middle Finger Grip Value: {gripValue}");
                }
            }
        }

        currentGrip = Mathf.MoveTowards(currentGrip, targetGrip, gripBlendSpeed * Time.deltaTime);
        animator.SetFloat(AnimatorGripParam, currentGrip);
    }

    // =================================================================
    // 🚨 Essential functions for communicating with other scripts (e.g., Climbing) 🚨
    // =================================================================

    public void SetClimbGripping(bool gripping)
    {
        isClimbGripping = gripping;
    }

    public bool IsClimbGripping => isClimbGripping;

    // Returns the current grip value when requested by external scripts
    public float CurrentGrip => currentGrip;

    public float RawGripInput
    {
        get
        {
            XRNode node = handType == HandType.Left ? XRNode.LeftHand : XRNode.RightHand;
            InputDevice device = InputDevices.GetDeviceAtXRNode(node);

            // Changed from CommonUsages.trigger to CommonUsages.grip (Middle Finger)
            if (device.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
            {
                return gripValue;
            }
            return 0f;
        }
    }
}