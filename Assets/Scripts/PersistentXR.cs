using UnityEngine;

public class PersistentXR : MonoBehaviour
{
    private static PersistentXR instance;

    void Awake()
    {
        // 이미 유지되고 있는 인스턴스가 있다면 중복 생성 방지
        if (instance != null)
        {
            Destroy(gameObject);
            return;
        }

        instance = this;
        DontDestroyOnLoad(gameObject);
    }
}