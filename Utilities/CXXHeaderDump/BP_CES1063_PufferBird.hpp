#ifndef UE4SS_SDK_BP_CES1063_PufferBird_HPP
#define UE4SS_SDK_BP_CES1063_PufferBird_HPP

class ABP_CES1063_PufferBird_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolPostAttack;              // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PatrolAttack;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FaceOrigin;                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A48 (size: 0x8)
    class ABP_LS127_AchievementTracker_C* AchievementTrackerRef;                      // 0x0A50 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1063_PufferBird(int32 EntryPoint);
}; // Size: 0xA58

#endif
