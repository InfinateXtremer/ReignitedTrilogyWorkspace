#ifndef UE4SS_SDK_BP_CES1067_FemaleNightmareBeast_HPP
#define UE4SS_SDK_BP_CES1067_FemaleNightmareBeast_HPP

class ABP_CES1067_FemaleNightmareBeast_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleRecover;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryIdleRecover;         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryAlertOUT;            // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryAlert;               // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryAlertIN;             // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryAttack;              // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryIdle;                // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Turn;                          // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Charge;                        // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Charge_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CES1067_FemaleNightmareBeast(int32 EntryPoint);
}; // Size: 0xA60

#endif
