#ifndef UE4SS_SDK_BP_CES1008_BulltamingGnorc_HPP
#define UE4SS_SDK_BP_CES1008_BulltamingGnorc_HPP

class ABP_CES1008_BulltamingGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* IdleRoarState;                                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FleeIdleState;                                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* AlertIdleState;                                 // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FleeState;                                      // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* ScaredState;                                    // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A38 (size: 0x8)

    void UserConstructionScript();
    void Bull Defeated();
    void ExecuteUbergraph_BP_CES1008_BulltamingGnorc(int32 EntryPoint);
}; // Size: 0xA40

#endif
