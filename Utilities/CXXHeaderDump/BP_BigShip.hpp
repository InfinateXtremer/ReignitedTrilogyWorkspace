#ifndef UE4SS_SDK_BP_BigShip_HPP
#define UE4SS_SDK_BP_BigShip_HPP

class ABP_BigShip_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Collision_Wing_L;                                     // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Collision_Wing_R;                                     // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Collision_Stern;                                      // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Collision_Bow;                                        // 0x0340 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0348 (size: 0x8)
    class UChildActorComponent* ChildActor1;                                          // 0x0350 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0358 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0360 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0368 (size: 0x8)
    float Timeline_0_MoveTrack_B972F46B412B586C418951B9E28680F9;                      // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B972F46B412B586C418951B9E28680F9; // 0x0374 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0378 (size: 0x8)
    TArray<class AActor*> Campfires;                                                  // 0x0380 (size: 0x10)
    TArray<class AActor*> FireFighters;                                               // 0x0390 (size: 0x10)
    TSet<AActor*> Lit Campfires;                                                      // 0x03A0 (size: 0x50)
    class AActor* BlubberBucket;                                                      // 0x03F0 (size: 0x8)
    bool Moved;                                                                       // 0x03F8 (size: 0x1)
    class AActor* FleePath;                                                           // 0x0400 (size: 0x8)
    class AActor* IGCActor;                                                           // 0x0408 (size: 0x8)
    class AEmitter* VFX_Smoke1;                                                       // 0x0410 (size: 0x8)
    class AEmitter* VFX_Smoke2;                                                       // 0x0418 (size: 0x8)
    float OffsetZ;                                                                    // 0x0420 (size: 0x4)
    float StartLocZ;                                                                  // 0x0424 (size: 0x4)
    float Z_Previous;                                                                 // 0x0428 (size: 0x4)
    TArray<class AActor*> LootandChestsOnboard;                                       // 0x0430 (size: 0x10)
    int32 NumberCheck;                                                                // 0x0440 (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__BumpTrack__EventFunc();
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
    void ReceiveTick(float DeltaSeconds);
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Bucket StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void CampfireCheck();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void 214 Ship - Adjust Loot Onboard();
    void PlayerReady();
    void ExecuteUbergraph_BP_BigShip(int32 EntryPoint);
}; // Size: 0x444

#endif
