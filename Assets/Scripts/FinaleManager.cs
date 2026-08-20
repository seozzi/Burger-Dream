using UnityEngine;

public class FinaleManager : MonoBehaviour
{
    [Header("오브젝트 할당")]
    public GameObject restaurantEnvironment;
    public ParticleSystem explosionEffect;

    [Header("사운드 할당")]
    public AudioClip explosionSound; // 인스펙터에서 할당할 펑 소리 파일

    public void TriggerRestaurantExplosion()
    {
        // 1. 폭발 파티클 재생
        if (explosionEffect != null)
        {
            explosionEffect.Play();
        }

        // 2. 식당 오브젝트 비활성화 (화면에서 사라짐)
        if (restaurantEnvironment != null)
        {
            restaurantEnvironment.SetActive(false);
        }

        // 3. SoundManager를 통한 효과음 재생
        if (explosionSound != null)
        {
            SoundManager.Instance.PlaySFX(explosionSound); // 제공된 SoundManager의 PlaySFX 호출
        }
    }
}