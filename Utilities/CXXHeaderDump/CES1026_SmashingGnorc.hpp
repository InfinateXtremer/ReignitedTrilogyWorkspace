#ifndef UE4SS_SDK_CES1026_SmashingGnorc_HPP
#define UE4SS_SDK_CES1026_SmashingGnorc_HPP

class ACES1026_SmashingGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* AttackExitState;                                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownEnterState;                             // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* AttackOUTState;                                 // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* AttackLoopState;                                // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* AttackEnterState;                               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownLoopState;                              // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedOutState;                                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedLoopState;                               // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedEnterState;                              // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A50 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__AttackLoopState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackLoopState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__CooldownLoopState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackOutState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackOutState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CES1026_SmashingGnorc(int32 EntryPoint);
}; // Size: 0xA58

#endif
