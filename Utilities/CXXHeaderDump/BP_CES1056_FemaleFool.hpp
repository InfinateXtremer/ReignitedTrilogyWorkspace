#ifndef UE4SS_SDK_BP_CES1056_FemaleFool_HPP
#define UE4SS_SDK_BP_CES1056_FemaleFool_HPP

class ABP_CES1056_FemaleFool_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToBig;                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToSmall;              // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryAlertSmall;            // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOutSmall;                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertInSmall;                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertSmall;                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdleBig;               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOutBig;                   // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertInBig;                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertBig;                      // 0x0A40 (size: 0x8)
    class UCapsuleComponent* CapsuleColliderBig;                                      // 0x0A48 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SmallToBig;                    // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BigToSmall;                    // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackSmall;                   // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleSmall;                     // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackBig;                     // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleBig;                       // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveBig;                       // 0x0A90 (size: 0x8)
    bool IsSmall;                                                                     // 0x0A98 (size: 0x1)
    bool isAttacking;                                                                 // 0x0A99 (size: 0x1)
    bool IsAlert;                                                                     // 0x0A9A (size: 0x1)
    int32 StateEnum;                                                                  // 0x0A9C (size: 0x4)
    class ABP_LS125_AchievementTracker_C* AchievementTrackerRef;                      // 0x0AA0 (size: 0x8)
    bool GateKeepers;                                                                 // 0x0AA8 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_AlertBig_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertBig_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToSmall_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToBig_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_AlertInBig_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertOutBig_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackBig_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleBig_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RecoveryIdleBig_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertOutSmall_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertInSmall_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackSmall_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RecoveryAlertSmall_K2Node_ComponentBoundEvent_9_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertSmall_K2Node_ComponentBoundEvent_10_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_11_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleSmall_K2Node_ComponentBoundEvent_12_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CES1056_FemaleFool(int32 EntryPoint);
}; // Size: 0xAA9

#endif
