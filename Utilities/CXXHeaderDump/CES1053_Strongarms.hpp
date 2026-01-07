#ifndef UE4SS_SDK_CES1053_Strongarms_HPP
#define UE4SS_SDK_CES1053_Strongarms_HPP

class ACES1053_Strongarms_C : public ABP_Base_Enemy_C
{
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* WakeUpState;                                    // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* SleepingState;                                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* IdleDelightState;                               // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* LaunchState;                                    // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A28 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0xA30

#endif
