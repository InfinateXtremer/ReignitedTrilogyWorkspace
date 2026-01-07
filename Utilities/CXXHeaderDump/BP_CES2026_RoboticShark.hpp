#ifndef UE4SS_SDK_BP_CES2026_RoboticShark_HPP
#define UE4SS_SDK_BP_CES2026_RoboticShark_HPP

class ABP_CES2026_RoboticShark_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NB_WatchPlayer;                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NB_Recovery;                   // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NB_Attack;                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NB_SeekPlayer;                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_NB_Patrol;                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WatchPlayer;                   // 0x0A20 (size: 0x8)
    class UCapsuleComponent* ExtendedHitbox;                                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recovery;                      // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol;                        // 0x0A50 (size: 0x8)
    class AActor* AchievementWatcher;                                                 // 0x0A58 (size: 0x8)
    bool TurnOffBubbles;                                                              // 0x0A60 (size: 0x1)
    bool IsChasing;                                                                   // 0x0A61 (size: 0x1)

    bool OnDealDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Recovery_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Patrol_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ChasePlayer();
    void WatchPlayer();
    void return();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void RumbleController();
    void ExecuteUbergraph_BP_CES2026_RoboticShark(int32 EntryPoint);
}; // Size: 0xA62

#endif
