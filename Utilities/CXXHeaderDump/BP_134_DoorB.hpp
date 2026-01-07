#ifndef UE4SS_SDK_BP_134_DoorB_HPP
#define UE4SS_SDK_BP_134_DoorB_HPP

class ABP_134_DoorB_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* LockDummy;                                            // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Key;                                                  // 0x0330 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0338 (size: 0x8)
    class USplineComponent* KeySpline;                                                // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SphereOverlapPoint;                                   // 0x0348 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    float Timeline_1_NewTrack_0_3C9EE3CB43A03BA194DC2EA4187C489B;                     // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3C9EE3CB43A03BA194DC2EA4187C489B; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0368 (size: 0x8)
    float Timeline_0_NewTrack_0_AE845D0E4C9D1C2EE45734A31BC3A4E9;                     // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AE845D0E4C9D1C2EE45734A31BC3A4E9; // 0x0374 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0378 (size: 0x8)
    class AActor* MyThief;                                                            // 0x0380 (size: 0x8)
    FVector Origin;                                                                   // 0x0388 (size: 0xC)
    class UParticleSystemComponent* KeyTrail;                                         // 0x0398 (size: 0x8)
    FVector TargetLocation;                                                           // 0x03A0 (size: 0xC)
    float DeltaZ;                                                                     // 0x03AC (size: 0x4)
    class AActor* MyIGC;                                                              // 0x03B0 (size: 0x8)
    class AActor* MyKey;                                                              // 0x03B8 (size: 0x8)
    class ABP_134_DoorB_C* OtherDoor;                                                 // 0x03C0 (size: 0x8)
    FPhasmidSoftReference SoftTarget;                                                 // 0x03C8 (size: 0x28)
    float KeyRotation;                                                                // 0x03F0 (size: 0x4)
    class AActor* DummyDoor;                                                          // 0x03F8 (size: 0x8)
    class UAkAudioEvent* SFX_DoorOpen;                                                // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_134_DoorB(int32 EntryPoint);
}; // Size: 0x408

#endif
