#ifndef UE4SS_SDK_BP_CES1059_ArmoredTurtle_HPP
#define UE4SS_SDK_BP_CES1059_ArmoredTurtle_HPP

class ABP_CES1059_ArmoredTurtle_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryLit;                   // 0x09F8 (size: 0x8)
    class UCapsuleComponent* CapsuleColliderBig;                                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleLitAlt;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToUnlit;              // 0x0A10 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToLit;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToUnlit;                       // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackLit;                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleLit;                       // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryUnlit;                 // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackUnlit;                   // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleUnlit;                     // 0x0A58 (size: 0x8)
    FVector GrowBigCapsule_Scale_1864BF19461E58659FEA9FA11F978B2F;                    // 0x0A60 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> GrowBigCapsule__Direction_1864BF19461E58659FEA9FA11F978B2F; // 0x0A6C (size: 0x1)
    class UTimelineComponent* GrowBigCapsule;                                         // 0x0A70 (size: 0x8)
    FVector ShrinkBigCapsule_Scale_7D16FDF9411C1943EFB603BE86E7611E;                  // 0x0A78 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> ShrinkBigCapsule__Direction_7D16FDF9411C1943EFB603BE86E7611E; // 0x0A84 (size: 0x1)
    class UTimelineComponent* ShrinkBigCapsule;                                       // 0x0A88 (size: 0x8)
    bool Shrunk;                                                                      // 0x0A90 (size: 0x1)
    bool Attacking;                                                                   // 0x0A91 (size: 0x1)
    bool isDying;                                                                     // 0x0A92 (size: 0x1)
    bool IsSmall;                                                                     // 0x0A93 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ShrinkBigCapsule__FinishedFunc();
    void ShrinkBigCapsule__UpdateFunc();
    void GrowBigCapsule__FinishedFunc();
    void GrowBigCapsule__UpdateFunc();
    void BndEvt__FalconEnemyState_ModelSwapToUnlit_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_ToLit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ToUnlit_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ToLit_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_AttackUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackUnlit_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void LightsOn();
    void LightsOff();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1059_ArmoredTurtle(int32 EntryPoint);
}; // Size: 0xA94

#endif
