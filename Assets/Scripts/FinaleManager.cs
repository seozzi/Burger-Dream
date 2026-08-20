using UnityEngine;

public class FinaleManager : MonoBehaviour
{
    [Header("폭발 설정")]
    public GameObject restaurantEnvironment;
    public ParticleSystem explosionEffect;
    public AudioClip explosionSound;

    [Header("축하 사절단 설정")]
    // 씬에 미리 배치해 둔 O Man 오브젝트들을 연결할 배열입니다.
    public GameObject[] celebrationOMans; 

    public void TriggerRestaurantExplosion()
    {
        // 1. 기존 폭발 로직
        if (explosionEffect != null) explosionEffect.Play();
        if (restaurantEnvironment != null) restaurantEnvironment.SetActive(false);
        if (explosionSound != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(explosionSound); //[cite: 1]
        }

        // 2. 미리 배치된 축하 사절단 등장시키기
        ShowCongratulators();
    }

    private void ShowCongratulators()
    {
        // 배열에 등록된 O Man 오브젝트들을 차례대로 활성화합니다.
        foreach (GameObject oMan in celebrationOMans)
        {
            if (oMan != null)
            {
                // 비활성화되어 있던 오브젝트를 켭니다. 
                // 켜지는 순간 Animator가 작동하며 박수 애니메이션이 자동 재생됩니다.
                oMan.SetActive(true); 
            }
        }
    }
}