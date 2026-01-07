#ifndef UE4SS_SDK_BP_CBS1003_Metalhead_HPP
#define UE4SS_SDK_BP_CBS1003_Metalhead_HPP

class ABP_CBS1003_Metalhead_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCapsuleComponent* CapsuleShield;                                           // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* PreDeath;                                       // 0x0A00 (size: 0x8)
    class USceneComponent* ShootTargetInitialLocation;                                // 0x0A08 (size: 0x8)
    class UChildActorComponent* ShootTarget;                                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* PreThrow;                                       // 0x0A18 (size: 0x8)
    class USceneComponent* ThrowLocation;                                             // 0x0A20 (size: 0x8)
    class USceneComponent* HandMount;                                                 // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* CatchState;                                     // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* ShootState;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* LobState;                                       // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* ThrowState;                                     // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A68 (size: 0x8)
    class ABP_CBS1003_TargetDummy_C* TargetDummy;                                     // 0x0A70 (size: 0x8)
    bool DummyInPosition;                                                             // 0x0A78 (size: 0x1)
    float ShootOffset;                                                                // 0x0A7C (size: 0x4)
    float ShootStart;                                                                 // 0x0A80 (size: 0x4)
    class ATargetPoint* ThrowSpawn;                                                   // 0x0A88 (size: 0x8)
    class ABP_Base_Enemy_C* CurrentEnemyToThrow;                                      // 0x0A90 (size: 0x8)
    TArray<class ABP_Base_Enemy_C*> P1_Enemies;                                       // 0x0A98 (size: 0x10)
    TArray<class ABP_Base_Enemy_C*> P2_Enemies;                                       // 0x0AA8 (size: 0x10)
    class ATargetPoint* P2_TargetTeleport;                                            // 0x0AB8 (size: 0x8)
    FVector ShootStraightLocation;                                                    // 0x0AC0 (size: 0xC)
    TArray<class ABP_Base_Enemy_C*> P1_Copy;                                          // 0x0AD0 (size: 0x10)
    TArray<class ABP_Base_Enemy_C*> P2_Copy;                                          // 0x0AE0 (size: 0x10)
    FGameplayTagContainer ChargingSpyroTag;                                           // 0x0AF0 (size: 0x20)
    bool DidSpyroTakeDamage;                                                          // 0x0B10 (size: 0x1)
    class ABP_LS124_SkillPointWatcher_C* SkillPointWatcher;                           // 0x0B18 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ThrowState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__PreThrow_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__MoveState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__LobState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ShootState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__ShootState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__LobState_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__ThrowState_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__MoveState_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void CloseGates();
    void BndEvt__CapsuleL_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void ExecuteUbergraph_BP_CBS1003_Metalhead(int32 EntryPoint);
}; // Size: 0xB20

#endif
