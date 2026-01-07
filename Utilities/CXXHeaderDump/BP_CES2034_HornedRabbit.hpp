#ifndef UE4SS_SDK_BP_CES2034_HornedRabbit_HPP
#define UE4SS_SDK_BP_CES2034_HornedRabbit_HPP

class ABP_CES2034_HornedRabbit_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Turn;                          // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreIdle;                       // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PopUp;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Charge;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A30 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2034_HornedRabbit(int32 EntryPoint);
}; // Size: 0xA38

#endif
