#ifndef UE4SS_SDK_BP_CFS1166_Sheep_HPP
#define UE4SS_SDK_BP_CFS1166_Sheep_HPP

class ABP_CFS1166_Sheep_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* Statue;                                               // 0x09F8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0A00 (size: 0x8)
    class UDestructibleComponent* DestructibleStatue;                                 // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* State_Free;                                     // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* State_Stone;                                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* State_Respawn;                                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dead;                                     // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnButterfly;                // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathFireSpawn;                // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathInstant;                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathFire;                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)
    class ABP_LS102_AchievementTracker_C* AchievementTrackerRef;                      // 0x0A60 (size: 0x8)
    FVector Starting_Location;                                                        // 0x0A68 (size: 0xC)
    float StartingGravity;                                                            // 0x0A74 (size: 0x4)
    class AActor* 224AchievementWatcher;                                              // 0x0A78 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__FalconEnemyState_DeathInstant_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_DeathFire_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_DeathFire_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__State_Respawn_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Dead_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__State_Dead_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CFS1166_Sheep(int32 EntryPoint);
}; // Size: 0xA80

#endif
