#ifndef UE4SS_SDK_BP_CES2019_WaterWorker_B_HPP
#define UE4SS_SDK_BP_CES2019_WaterWorker_B_HPP

class ABP_CES2019_WaterWorker_B_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start2;                        // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NoWater_Recovery;              // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoverySelector;              // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleSelector;                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NoWater_Patrol;                // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackFriendly;                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TauntFriendly;                 // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* ShockStick;                                           // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery;                      // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TauntPlayer;                   // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackPlayer;                  // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol;                        // 0x0A60 (size: 0x8)
    TArray<FPhasmidSoftReference> ActorTargets;                                       // 0x0A68 (size: 0x10)
    TArray<class AActor*> ResolvedActorTargets;                                       // 0x0A78 (size: 0x10)
    float TargetDistance;                                                             // 0x0A88 (size: 0x4)
    bool CanAttack;                                                                   // 0x0A8C (size: 0x1)
    bool WaterOn;                                                                     // 0x0A8D (size: 0x1)
    bool isPlayerReady;                                                               // 0x0A8E (size: 0x1)

    void PlayerReady(bool& NewParam);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
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
    void BndEvt__FalconEnemyState_Patrol_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Patrol_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FalconEnemyState_IdleSelector_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_NoWater_Patrol_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_NoWater_Patrol_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_RecoverySelector_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnPlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CES2019_WaterWorker_B(int32 EntryPoint);
}; // Size: 0xA8F

#endif
