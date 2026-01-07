#ifndef UE4SS_SDK_BP_CES1016_Shepherd_HPP
#define UE4SS_SDK_BP_CES1016_Shepherd_HPP

class ABP_CES1016_Shepherd_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnToIdle;                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackLoop;                 // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttackIn;                   // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A28 (size: 0x8)
    float PlayerHealth;                                                               // 0x0A30 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CES1016_Shepherd(int32 EntryPoint);
}; // Size: 0xA34

#endif
