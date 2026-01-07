#ifndef UE4SS_SDK_BP_135_KeyDoor_HPP
#define UE4SS_SDK_BP_135_KeyDoor_HPP

class ABP_135_KeyDoor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Key;                                                  // 0x0330 (size: 0x8)
    class USplineComponent* KeySpline;                                                // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float Timeline_1_NewTrack_0_9A39271E4486360DD27B279189087212;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_9A39271E4486360DD27B279189087212; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0358 (size: 0x8)
    float Timeline_2_NewTrack_0_36729FE74453F65199193D89AA47A16C;                     // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_36729FE74453F65199193D89AA47A16C; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0368 (size: 0x8)
    float Timeline_0_NewTrack_0_2FCF0F5441073E48D0482F8F742DF80A;                     // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2FCF0F5441073E48D0482F8F742DF80A; // 0x0374 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0378 (size: 0x8)
    FVector Origin;                                                                   // 0x0380 (size: 0xC)
    FVector TargetLocation;                                                           // 0x038C (size: 0xC)
    class AActor* MyKey;                                                              // 0x0398 (size: 0x8)
    class AActor* My IGC;                                                             // 0x03A0 (size: 0x8)
    class AActor* MyThief;                                                            // 0x03A8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x03B0 (size: 0x10)
    class AActor* FlightController;                                                   // 0x03C0 (size: 0x8)
    float NewCap;                                                                     // 0x03C8 (size: 0x4)
    bool Flying?;                                                                     // 0x03CC (size: 0x1)
    FPhasmidSoftReference Thief;                                                      // 0x03D0 (size: 0x28)
    class UParticleSystemComponent* KeyTrail;                                         // 0x03F8 (size: 0x8)
    class ABP_CES1158_PlaneThief_C* PlaneThiefReference;                              // 0x0400 (size: 0x8)
    FPhasmidSoftReference PlaneThief2;                                                // 0x0408 (size: 0x28)
    class AActor* PlaneTheifLocal;                                                    // 0x0430 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveTick(float DeltaSeconds);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Begin();
    void ExecuteUbergraph_BP_135_KeyDoor(int32 EntryPoint);
}; // Size: 0x438

#endif
