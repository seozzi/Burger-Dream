using UnityEngine;
using UnityEngine.XR;

/// <summary>
/// Attaches a hand model to an XR Controller and drives its
/// grip posture via an Animator blend tree.
/// </summary>
[RequireComponent(typeof(Animator))]
public class HandController : MonoBehaviour
{
    public enum HandType { Left, Right }

    [Header("References")]
    [Tooltip("Assign the Left/Right Controller from your XR Origin")]
    [SerializeField] private Transform controllerAnchor;
    [SerializeField] private HandType handType = HandType.Right;

    [Header("Calibration Offset")]
    [Tooltip("Local offset from the controller anchor to the model's grip point")]
    [SerializeField] private Vector3 positionOffset;
    [SerializeField] private Vector3 rotationOffsetEuler;

    [Header("Grip Feel")]
    [Tooltip("How fast the posture blends toward its target value")]
    [SerializeField] private float gripBlendSpeed = 12f;

    private Animator animator;
    private static readonly int GripParam = Animator.StringToHash("Grip");

    private float currentGrip;
    private bool isClimbGripping;

    private void Awake()
    {
        animator = GetComponent<Animator>();
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
        transform.rotation = controllerAnchor.rotation * Quaternion.Euler(rotationOffsetEuler);
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
            // OVRInput 대신 유니티 표준 범용 XR 입력을 사용합니다!
            XRNode node = handType == HandType.Left ? XRNode.LeftHand : XRNode.RightHand;
            InputDevice device = InputDevices.GetDeviceAtXRNode(node);

            // 컨트롤러의 Grip 트리거 값을 가져옵니다
            if (device.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
            {
                targetGrip = gripValue;
            }
        }

        currentGrip = Mathf.MoveTowards(currentGrip, targetGrip, gripBlendSpeed * Time.deltaTime);
        animator.SetFloat(GripParam, currentGrip);
    }

    public void SetClimbGripping(bool gripping)
    {
        isClimbGripping = gripping;
    }

    public bool IsClimbGripping => isClimbGripping;
    public float CurrentGrip => currentGrip;

    public float RawGripInput
    {
        get
        {
            XRNode node = handType == HandType.Left ? XRNode.LeftHand : XRNode.RightHand;
            InputDevice device = InputDevices.GetDeviceAtXRNode(node);
            if (device.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
            {
                return gripValue;
            }
            return 0f;
        }
    }
}