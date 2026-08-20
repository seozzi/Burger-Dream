using UnityEngine;

public class FinaleManager : MonoBehaviour
{
    [Header("폭발 설정")]
    public GameObject restaurantEnvironment;
    public ParticleSystem explosionEffect;
    public AudioClip explosionSound;

    [Header("축하 사절단 설정")]
    public GameObject[] celebrationOMans; 

    public void TriggerRestaurantExplosion()
    {
        // 파티클 폭발 및 식당 끄기
        if (explosionEffect != null) explosionEffect.Play();
        if (restaurantEnvironment != null) restaurantEnvironment.SetActive(false);
        
        // 폭발 사운드 재생
        if (explosionSound != null && SoundManager.Instance != null)
        {
            SoundManager.Instance.PlaySFX(explosionSound);
        }

        // 재생 중이던 클라이밍 BGM 멈추기
        if (SoundManager.Instance != null)
        {
            SoundManager.Instance.StopBGM();
        }

        // 사절단 등장
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