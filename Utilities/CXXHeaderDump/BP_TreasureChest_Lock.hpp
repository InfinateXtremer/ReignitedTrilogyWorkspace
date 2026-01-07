#ifndef UE4SS_SDK_BP_TreasureChest_Lock_HPP
#define UE4SS_SDK_BP_TreasureChest_Lock_HPP

class ABP_TreasureChest_Lock_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class USplineComponent* Spline5;                                                  // 0x0628 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x0630 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x0638 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0640 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0648 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0650 (size: 0x8)
    class UParticleSystemComponent* KeyMagicVFX;                                      // 0x0658 (size: 0x8)
    class UStaticMeshComponent* TravellingKey;                                        // 0x0660 (size: 0x8)
    class USplineComponent* KeySpline;                                                // 0x0668 (size: 0x8)
    class USphereComponent* ActivateCollision;                                        // 0x0670 (size: 0x8)
    float Timeline_1_Rotation_71F814A84C45E2E82DB98C9ACB529FD6;                       // 0x0678 (size: 0x4)
    float Timeline_1_Move_71F814A84C45E2E82DB98C9ACB529FD6;                           // 0x067C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_71F814A84C45E2E82DB98C9ACB529FD6; // 0x0680 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0688 (size: 0x8)
    float KeySplineMovement_Rotation_461A72094B0785EC105314A499E75F16;                // 0x0690 (size: 0x4)
    float KeySplineMovement_NewTrack_0_461A72094B0785EC105314A499E75F16;              // 0x0694 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> KeySplineMovement__Direction_461A72094B0785EC105314A499E75F16; // 0x0698 (size: 0x1)
    class UTimelineComponent* KeySplineMovement;                                      // 0x06A0 (size: 0x8)
    class ATargetPoint* KeySpawn_TargetPoint;                                         // 0x06A8 (size: 0x8)
    bool isKeyCollected;                                                              // 0x06B0 (size: 0x1)
    class AController* Controller;                                                    // 0x06B8 (size: 0x8)
    class ABP_TreasureChest_LockChest_Key_C* SpawnedKeyRef;                           // 0x06C0 (size: 0x8)
    bool preventKeySpawn?;                                                            // 0x06C8 (size: 0x1)
    FPhasmidObjectSaveDataList LocalCheckpointData;                                   // 0x06D0 (size: 0x10)
    float Key Initial Rotation;                                                       // 0x06E0 (size: 0x4)
    float Key Final Rotation;                                                         // 0x06E4 (size: 0x4)
    bool NewVar_0;                                                                    // 0x06E8 (size: 0x1)
    class AActor* achievement;                                                        // 0x06F0 (size: 0x8)
    FGameplayTagContainer Supercharge Tags;                                           // 0x06F8 (size: 0x20)

    void derive damage values(FVector& Hit Direction, FVector& Impulse Dir, float& Impulse Strength);
    void UserConstructionScript();
    void KeySplineMovement__FinishedFunc();
    void KeySplineMovement__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__ActivateCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void saveParams(float Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void Begin();
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_TreasureChest_Lock(int32 EntryPoint);
}; // Size: 0x718

#endif
