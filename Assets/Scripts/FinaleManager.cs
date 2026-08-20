using UnityEngine;

public class FinaleManager : MonoBehaviour
{
    [Header("폭발 설정")]
    public GameObject restaurantEnvironment;
    public ParticleSystem explosionEffect;
    public AudioClip explosionSound; // 기존의 '뾰잉' 소리

    [Header("축하 사운드 설정")]
    public AudioClip celebrationBGM; // 새로 추가할 축하 BGM

    [Header("축하 사절단 설정")]
    public GameObject[] celebrationOMans; 

    public void TriggerRestaurantExplosion()
    {
        // 1. 파티클 폭발 및 식당 끄기
        if (explosionEffect != null) explosionEffect.Play();
        if (restaurantEnvironment != null) restaurantEnvironment.SetActive(false);
        
        // 2. 폭발(뾰잉) 사운드 재생 (SFX)
        if (explosionSound != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(explosionSound);
        }

        // 3. 기존 클라이밍 BGM 중지 및 축하 BGM 재생
        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM(); // 긴장감 넘치던 등반 음악 정지
            
            if (celebrationBGM != null)
            {
                SoundManager.Instance.PlayBGM(celebrationBGM); // 신나는 축하 음악 무한 반복 재생
            }
        }

        // 4. 사절단 등장
        ShowCongratulators();
    }

    private void ShowCongratulators()
    {
        foreach (GameObject oMan in celebrationOMans)
        {
            if (oMan != null)
            {
                oMan.SetActive(true); 
            }
        }
    }
}