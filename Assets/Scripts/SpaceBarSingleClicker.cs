using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Events;

public class SpaceBarSingleClicker : MonoBehaviour
{
    [Header("폭발 트리거 (Space바)")]
    [Tooltip("스페이스바를 누를 때 실행할 함수들을 인스펙터에서 연결하세요. (FinaleManager 폭발 등)")]
    public UnityEvent onSpacePressed;

    private InputAction spaceAction;
    private InputAction vKeyAction; // V키 전용 액션

    void Awake()
    {
        // 1. 기존 스페이스바 입력 설정 (폭발 이벤트용)
        spaceAction = new InputAction("SpaceSingleClick", InputActionType.Button);
        spaceAction.AddBinding("<Keyboard>/space");

        spaceAction.performed += ctx =>
        {
            Debug.Log("<color=cyan>[Input] 스페이스바 1회 입력 감지! (이벤트 실행)</color>");
            onSpacePressed?.Invoke();
        };

        // 2. 새로운 V키 입력 설정 (엔딩 크레딧 테스트용)
        vKeyAction = new InputAction("VKeySingleClick", InputActionType.Button);
        vKeyAction.AddBinding("<Keyboard>/v");

        vKeyAction.performed += ctx =>
        {
            Debug.Log("<color=green>[Input] V키 1회 입력 감지! (엔딩 크레딧 테스트 실행)</color>");

            // 씬에 생성된 미끄럼틀 트리거(BaconSlideRider) 중 가장 먼저 찾아지는 것을 가져옵니다.
            BaconSlideRider anySlideTrigger = FindFirstObjectByType<BaconSlideRider>();

            if (anySlideTrigger != null)
            {
                // BaconSlideRider는 투명 트리거에 붙어있으므로, 그 부모인 '미끄럼틀 본체'를 함수로 넘겨줍니다.
                TestTriggerEnding(anySlideTrigger.transform.parent.gameObject);
            }
            else
            {
                Debug.LogWarning("[Test] 씬에 미끄럼틀이 아직 없습니다! 스페이스바를 먼저 눌러 폭발을 진행해 주세요.");
            }
        };
    }

    // 특정 슬라이드 오브젝트를 던져주면 그 방향으로 엔딩을 강제 실행하는 테스트 함수
    public void TestTriggerEnding(GameObject slide)
    {
        Debug.Log($"[Test] 찾은 미끄럼틀({slide.name}) 방향으로 엔딩을 강제 실행합니다.");

        EndingCreditsUI creditsUI = FindFirstObjectByType<EndingCreditsUI>();
        if (creditsUI != null)
        {
            GameObject burger = GameObject.Find("Burger");
            Vector3 burgerPos = burger != null ? burger.transform.position : Vector3.zero;

            // 슬라이드 위치를 기준으로 하늘을 바라보는 방향 계산
            Vector3 directionToSky = (slide.transform.position - burgerPos).normalized;
            directionToSky.y = 0;

            creditsUI.ShowCredits(directionToSky);
        }
        else
        {
            Debug.LogError("씬에 EndingCreditsUI가 없습니다!");
        }
    }

    void OnEnable()
    {
        spaceAction.Enable();
        vKeyAction.Enable();
    }

    void OnDisable()
    {
        spaceAction.Disable();
        vKeyAction.Disable();
    }
}