#ifndef UE4SS_SDK_ManagedCameraActor_HPP
#define UE4SS_SDK_ManagedCameraActor_HPP

class AManagedCameraActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0328 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float Offset;                                                                     // 0x0340 (size: 0x4)
    float Time;                                                                       // 0x0344 (size: 0x4)
    float StartTime;                                                                  // 0x0348 (size: 0x4)

    float PMCI_GetCurrentOffset();
    void ClearOffset(bool& Moved);
    void GetCurrentOffset(float& Offset);
    void SetOffset(float SetOffset, float Time, bool& Offset);
    void UserConstructionScript();
    void ApplyCameraSettings(FBP_CameraSettings CameraSettings);
    void ReceiveTick(float DeltaSeconds);
    void PMCI_SetOffset(float Offset, float Time);
    void PMCI_ApplyCameraSettings(FCameraSettings Settings);
    void ExecuteUbergraph_ManagedCameraActor(int32 EntryPoint);
}; // Size: 0x34C

#endif
