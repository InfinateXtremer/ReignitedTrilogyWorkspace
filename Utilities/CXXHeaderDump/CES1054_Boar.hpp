#ifndef UE4SS_SDK_CES1054_Boar_HPP
#define UE4SS_SDK_CES1054_Boar_HPP

class ACES1054_Boar_C : public ABP_Base_Enemy_C
{
    class UFalconEnemyStateComponent* MistyBogCharge;                                 // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolState;                                    // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* OriginState;                                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* ChargeState;                                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A20 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0xA28

#endif
