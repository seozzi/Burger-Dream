using UnityEngine;
using UnityEngine.Events;

public class ButtonTrigger : MonoBehaviour
{
    // 인스펙터에서 축하 모션, 폭발 효과 등을 연결할 이벤트 슬롯입니다.
    public UnityEvent onButtonPressed; 
    private bool isPressed = false;

    private void OnTriggerEnter(Collider other)
    {
        // 손이나 컨트롤러의 태그가 "PlayerHand"로 설정되어 있는지 확인합니다.
        if (other.CompareTag("PlayerHand") && !isPressed)
        {
            isPressed = true;
            onButtonPressed.Invoke();
            Debug.Log("버튼이 눌렸습니다!");
        }
    }
}