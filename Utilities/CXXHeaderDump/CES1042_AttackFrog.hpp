#ifndef UE4SS_SDK_CES1042_AttackFrog_HPP
#define UE4SS_SDK_CES1042_AttackFrog_HPP

class ACES1042_AttackFrog_C : public ABP_Base_Enemy_C
{
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedState;                                   // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* WanderState;                                    // 0x0A10 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0xA18

#endif
