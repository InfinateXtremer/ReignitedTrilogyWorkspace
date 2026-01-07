#ifndef UE4SS_SDK_BP_CES1066_MaleNightmareBeast_HPP
#define UE4SS_SDK_BP_CES1066_MaleNightmareBeast_HPP

class ABP_CES1066_MaleNightmareBeast_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandRecoveryIdle;            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandTaunt;                   // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandAttack;                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandIdle;                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandAlert;                   // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandAlertIN;                 // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandIdle2;                   // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IslandAlertOUT;                // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A78 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1066_MaleNightmareBeast(int32 EntryPoint);
}; // Size: 0xA80

#endif
