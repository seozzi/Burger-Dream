using UnityEngine;
using UnityEngine.XR;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(Rigidbody))] // Rigidbody가 없으면 자동으로 추가해 주는 안전장치입니다.
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
    private Rigidbody rb; // Rigidbody 변수 추가

    private static readonly int AnimatorGripParam = Animator.StringToHash("Grip");

    private float currentGrip;
    private bool isClimbGripping;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody>(); // 컴포넌트 가져오기
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

    // 물리 연산이 아닌 애니메이션이나 입력 처리는 Update에서 그대로 유지합니다.
    private void Update()
    {
        UpdatePosture();
    }

    // 물리 연산(Rigidbody 이동)은 반드시 FixedUpdate에서 처리해야 합니다.
    private void FixedUpdate()
    {
        FollowController();
    }

    private void FollowController()
    {
        if (controllerAnchor == null) return;

        // 목표 위치와 회전값 계산
        Vector3 targetPosition = controllerAnchor.TransformPoint(positionOffset);
        Quaternion targetRotation = controllerAnchor.rotation;

        if (rb != null && rb.isKinematic)
        {
            // Rigidbody를 통한 물리적 이동 (트리거 감지 정상화)
            rb.MovePosition(targetPosition);
            rb.MoveRotation(targetRotation);
        }
        else
        {
            // Rigidbody가 없거나 Kinematic이 아닐 경우 기존 방식(Transform) 사용
            transform.position = targetPosition;
            transform.rotation = targetRotation;
        }
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

            if (device.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
            {
                targetGrip = gripValue;

                if (gripValue > 0.05f)
                {
                    // Debug.Log($"[{handType}] Middle Finger Grip Value: {gripValue}");
                }
            }
        }

        currentGrip = Mathf.MoveTowards(currentGrip, targetGrip, gripBlendSpeed * Time.deltaTime);
        animator.SetFloat(AnimatorGripParam, currentGrip);
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