#ifndef UE4SS_SDK_BP_CES2019_WaterWorker_HPP
#define UE4SS_SDK_BP_CES2019_WaterWorker_HPP

class ABP_CES2019_WaterWorker_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* ShockStick;                                           // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery;                      // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackPlayer;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackFriendly;                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Peek;                          // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointsLooped;               // 0x0A38 (size: 0x8)
    class AActor* Target;                                                             // 0x0A40 (size: 0x8)
    float TargetDistance;                                                             // 0x0A48 (size: 0x4)
    float TargetHalfAngle;                                                            // 0x0A4C (size: 0x4)
    bool CanAttack;                                                                   // 0x0A50 (size: 0x1)
    FTimerHandle PeekTimer;                                                           // 0x0A58 (size: 0x8)
    class AActor* PlayerProxy;                                                        // 0x0A60 (size: 0x8)
    bool PlayerReady;                                                                 // 0x0A68 (size: 0x1)

    void isPlayerReady(bool& NewParam);
    bool OnDamage(const FGameplayEventData Payload);
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
    void BndEvt__FalconEnemyState_WaypointsLooped_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WaypointsLooped_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Recovery_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Recovery_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnPlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CES2019_WaterWorker(int32 EntryPoint);
}; // Size: 0xA69

#endif
