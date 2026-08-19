using UnityEngine;
using System.Collections;

public class PlayerHeightCalibrator : MonoBehaviour
{
    [Header("Calibration Settings")]
    [SerializeField] private Transform cameraRigRoot; // The main [BuildingBlock] Camera Rig
    [SerializeField] private Transform centerEyeAnchor; // The actual VR camera (headset)
    [SerializeField] private float targetEyeLevel = 1.36f; // The exact height we want the player to be

    void Start()
    {
        StartCoroutine(CalibrateHeight());
    }

    private IEnumerator CalibrateHeight()
    {
        // 1. Wait a brief moment to ensure the VR headset has initialized its real-world tracking
        yield return new WaitForSeconds(0.5f);

        if (cameraRigRoot != null && centerEyeAnchor != null)
        {
            // 2. Get the current physical height of the player's headset
            float currentPhysicalHeight = centerEyeAnchor.position.y;

            // 3. Calculate how much we need to shift the world to match the target height
            // Example: If player is 1.8m, offset = 1.36 - 1.8 = -0.44m
            float offset = targetEyeLevel - currentPhysicalHeight;

            // 4. Move the entire rig up or down by that offset
            cameraRigRoot.position = new Vector3(
                cameraRigRoot.position.x,
                cameraRigRoot.position.y + offset,
                cameraRigRoot.position.z
            );

            Debug.Log($"[Height Calibrator] Player real height: {currentPhysicalHeight}m. Adjusted to target height: {targetEyeLevel}m.");
        }
    }
}