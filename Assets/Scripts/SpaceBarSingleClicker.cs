using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Events;

public class SpaceBarSingleClicker : MonoBehaviour
{
    [Header("Actions on Space Press")]
    [Tooltip("스페이스바를 누를 때 실행할 함수들을 인스펙터에서 연결하세요.")]
    public UnityEvent onSpacePressed;

    private InputAction spaceAction;

    void Awake()
    {
        // New Input System을 이용해 키보드 스페이스바 입력 설정
        spaceAction = new InputAction("SpaceSingleClick", InputActionType.Button);
        spaceAction.AddBinding("<Keyboard>/space");

        // 스페이스바가 눌릴 때(performed) 함수 실행
        spaceAction.performed += ctx =>
        {
            Debug.Log("<color=cyan>[SpaceBarTrigger] 스페이스바 1회 입력 감지!</color>");
            onSpacePressed?.Invoke();
        };
    }

    void OnEnable()
    {
        spaceAction.Enable();
    }

    void OnDisable()
    {
        spaceAction.Disable();
    }
}