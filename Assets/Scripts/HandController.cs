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
    private static readonly int TriggerParam = Animator.StringToHash("Trigger");

    private float currentTrigger;
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
        float targetTrigger = 0f;

        if (isClimbGripping)
        {
            targetTrigger = 1f;
        }
        else
        {
            XRNode node = handType == HandType.Left ? XRNode.LeftHand : XRNode.RightHand;
            InputDevice device = InputDevices.GetDeviceAtXRNode(node);

            if (device.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue))
            {
                targetTrigger = triggerValue;

                if (triggerValue > 0.05f)
                {
                    Debug.Log($"[{handType}] 검지 Trigger 값: {triggerValue}");
                }
            }
        }

        currentTrigger = Mathf.MoveTowards(currentTrigger, targetTrigger, gripBlendSpeed * Time.deltaTime);
        animator.SetFloat(TriggerParam, currentTrigger);
    }

    // =================================================================
    // 🚨 아래부터가 다른 스크립트(Climbing 등)와 통신하기 위해 꼭 필요한 함수들입니다! 🚨
    // =================================================================

    public void SetClimbGripping(bool gripping)
    {
        isClimbGripping = gripping;
    }

    public bool IsClimbGripping => isClimbGripping;

    // 외부에서 Grip(Trigger) 값을 요구할 때 현재 값을 넘겨줍니다.
    public float CurrentGrip => currentTrigger;

    public float RawGripInput
    {
        get
        {
            XRNode node = handType == HandType.Left ? XRNode.LeftHand : XRNode.RightHand;
            InputDevice device = InputDevices.GetDeviceAtXRNode(node);

            if (device.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue))
            {
                return triggerValue;
            }
            return 0f;
        }
    }
}