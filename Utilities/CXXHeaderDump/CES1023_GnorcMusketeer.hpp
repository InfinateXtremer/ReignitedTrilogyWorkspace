#ifndef UE4SS_SDK_CES1023_GnorcMusketeer_HPP
#define UE4SS_SDK_CES1023_GnorcMusketeer_HPP

class ACES1023_GnorcMusketeer_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* AttackOUTState;                                 // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* AttackFIREState;                                // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* AttackINState;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* ShieldLoopCoolDownState;                        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* ShieldPeekState;                                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* ShieldLoopState;                                // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* AwakenState;                                    // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* SleepState;                                     // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* Shield;                                               // 0x0A38 (size: 0x8)
    class UStaticMeshComponent* Musket;                                               // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* ShieldEnterState;                               // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* AlertState;                                     // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A70 (size: 0x8)
    int32 AwakenTimer;                                                                // 0x0A78 (size: 0x4)
    bool Sleeping;                                                                    // 0x0A7C (size: 0x1)

    void UserConstructionScript();
    void BndEvt__SleepState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Fire Immune();
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SleepState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CES1023_GnorcMusketeer(int32 EntryPoint);
}; // Size: 0xA7D

#endif
