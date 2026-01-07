#ifndef UE4SS_SDK_BP_205_MovingPlatform_HPP
#define UE4SS_SDK_BP_205_MovingPlatform_HPP

class ABP_205_MovingPlatform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Platform;                                             // 0x0328 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0330 (size: 0x8)
    float PlatformTimeline_PercentG_A8712E39460A2E6EC02D9892ECD4C81A;                 // 0x0338 (size: 0x4)
    float PlatformTimeline_PercentF_A8712E39460A2E6EC02D9892ECD4C81A;                 // 0x033C (size: 0x4)
    float PlatformTimeline_PercentE_A8712E39460A2E6EC02D9892ECD4C81A;                 // 0x0340 (size: 0x4)
    float PlatformTimeline_PercentC_A8712E39460A2E6EC02D9892ECD4C81A;                 // 0x0344 (size: 0x4)
    float PlatformTimeline_PercentB_A8712E39460A2E6EC02D9892ECD4C81A;                 // 0x0348 (size: 0x4)
    float PlatformTimeline_PercentA_A8712E39460A2E6EC02D9892ECD4C81A;                 // 0x034C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlatformTimeline__Direction_A8712E39460A2E6EC02D9892ECD4C81A; // 0x0350 (size: 0x1)
    class UTimelineComponent* PlatformTimeline;                                       // 0x0358 (size: 0x8)
    int32 TimelineType;                                                               // 0x0360 (size: 0x4)
    float SplinePercent;                                                              // 0x0364 (size: 0x4)
    bool debugOn?;                                                                    // 0x0368 (size: 0x1)
    bool endInside?;                                                                  // 0x0369 (size: 0x1)
    class UAkAudioEvent* SFX_Movement;                                                // 0x0370 (size: 0x8)
    FTimerHandle SFX_Timer;                                                           // 0x0378 (size: 0x8)

    void UserConstructionScript();
    void PlatformTimeline__FinishedFunc();
    void PlatformTimeline__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void PlaySFX();
    void ExecuteUbergraph_BP_205_MovingPlatform(int32 EntryPoint);
}; // Size: 0x380

#endif
