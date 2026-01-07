#ifndef UE4SS_SDK_BP_CES1057_ClockFool_HPP
#define UE4SS_SDK_BP_CES1057_ClockFool_HPP

class ABP_CES1057_ClockFool_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ClockWakeup;                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleB;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WakeUp;                        // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToFool;               // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToClock;              // 0x0A18 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DuoLoop;                       // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ClockRinging;                  // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ClockLoop;                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ClockTakeHit;                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A50 (size: 0x8)
    class ABP_CES1057_ClockFool_C* OtherFool;                                         // 0x0A58 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_ClockLoop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_WakeUp_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_DuoLoop_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToFool_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToClock_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ClockTakeHit_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wakeup_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1057_ClockFool(int32 EntryPoint);
}; // Size: 0xA60

#endif
