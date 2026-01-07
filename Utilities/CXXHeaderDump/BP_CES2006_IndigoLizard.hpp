#ifndef UE4SS_SDK_BP_CES2006_IndigoLizard_HPP
#define UE4SS_SDK_BP_CES2006_IndigoLizard_HPP

class ABP_CES2006_IndigoLizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* Pickaxe;                                              // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleTaunt;                     // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChaseStart;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdlePostMove;                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeTurn;                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeTaunt;                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChaseTurn;                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChaseTaunt;                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChaseCower;                    // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Chase;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cower;                         // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move;                          // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Turn;                          // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CutsceneMove;                  // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CutsceneIdle;                  // 0x0A88 (size: 0x8)

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
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleTaunt_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cower_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cower_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChaseCower_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChaseCower_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Flee_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2006_IndigoLizard(int32 EntryPoint);
}; // Size: 0xA90

#endif
