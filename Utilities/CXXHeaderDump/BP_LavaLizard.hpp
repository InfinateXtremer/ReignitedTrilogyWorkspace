#ifndef UE4SS_SDK_BP_LavaLizard_HPP
#define UE4SS_SDK_BP_LavaLizard_HPP

class ABP_LavaLizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitBeforeEating;              // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Spawn;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ShakeEgg;                      // 0x0A08 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreIdle;                       // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FakeDeath;                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait;                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToGuy;                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_EatGuy;                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToGuy;                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)
    class ABP_CNS2221B_CavemanBoneBuilderBaby_C* MyGuy;                               // 0x0A60 (size: 0x8)
    FVector originalLocation;                                                         // 0x0A68 (size: 0xC)
    bool RunningGuy;                                                                  // 0x0A74 (size: 0x1)
    float RunningGuyDelay;                                                            // 0x0A78 (size: 0x4)
    class ABP_DestructibleEgg_C* MyEgg;                                               // 0x0A80 (size: 0x8)
    TArray<class ABP_LavaLizard_C*> ResetLizards;                                     // 0x0A88 (size: 0x10)
    FGameplayTagContainer NewVar_0;                                                   // 0x0A98 (size: 0x20)
    class AActor* ResetLocation;                                                      // 0x0AB8 (size: 0x8)
    float MyMaxStepHeight;                                                            // 0x0AC0 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_PreIdle_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FakeDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ShakeEgg_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Spawn_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void BndEvt__FalconEnemyState_EatGuy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_WalkToGuy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_LavaLizard(int32 EntryPoint);
}; // Size: 0xAC4

#endif
