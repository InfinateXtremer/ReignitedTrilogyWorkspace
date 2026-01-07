#ifndef UE4SS_SDK_BP_205_ThiefSpawnerController_HPP
#define UE4SS_SDK_BP_205_ThiefSpawnerController_HPP

class ABP_205_ThiefSpawnerController_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBoxComponent* Trigger_East;                                                // 0x0450 (size: 0x8)
    class UBoxComponent* Trigger_West;                                                // 0x0458 (size: 0x8)
    TArray<class ATargetPoint*> SpawnPoints_West;                                     // 0x0460 (size: 0x10)
    TArray<class ATargetPoint*> SpawnPoints_East;                                     // 0x0470 (size: 0x10)
    TArray<class ABP_CES2024_GearGrinderThief_C*> enemyList;                          // 0x0480 (size: 0x10)
    int32 enemyIndex;                                                                 // 0x0490 (size: 0x4)
    TArray<class ATargetPoint*> spawnList_ref;                                        // 0x0498 (size: 0x10)
    class ABP_CES2024_GearGrinderThief_C* newEnemyRef;                                // 0x04A8 (size: 0x8)
    class ABP_CES2024_GearGrinderThief_C* enemyWest;                                  // 0x04B0 (size: 0x8)
    class ABP_CES2024_GearGrinderThief_C* enemyEast;                                  // 0x04B8 (size: 0x8)
    class ATargetPoint* WP_Target;                                                    // 0x04C0 (size: 0x8)
    class APhasmidPatrolPath* PathWest;                                               // 0x04C8 (size: 0x8)
    class APhasmidPatrolPath* PathEast;                                               // 0x04D0 (size: 0x8)
    class AActor* IGC_Selector;                                                       // 0x04D8 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__Trigger_West_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Trigger_East_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void 205 Mission - Spawn Thief(bool isEast?);
    void BndEvt__Trigger_West_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Trigger_East_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BP_205_ThiefSpawnerController(int32 EntryPoint);
}; // Size: 0x4E0

#endif
