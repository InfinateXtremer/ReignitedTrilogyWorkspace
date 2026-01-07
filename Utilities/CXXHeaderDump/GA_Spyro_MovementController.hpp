#ifndef UE4SS_SDK_GA_Spyro_MovementController_HPP
#define UE4SS_SDK_GA_Spyro_MovementController_HPP

class UGA_Spyro_MovementController_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    bool IsCharging;                                                                  // 0x0648 (size: 0x1)
    bool IsJumping;                                                                   // 0x0649 (size: 0x1)
    bool IsUnderwater;                                                                // 0x064A (size: 0x1)
    bool IsSuperCharging;                                                             // 0x064B (size: 0x1)
    class UAbilityTask_WaitGameplayTagAdded* WaitTaskSuperCharge;                     // 0x0650 (size: 0x8)
    FGameplayEffectSpecHandle SuperChargeJumpMaxSpec;                                 // 0x0658 (size: 0x18)
    bool QueueFly;                                                                    // 0x0670 (size: 0x1)
    class UAbilityTask_WaitGameplayTagAdded* StageOneWaitSuperCharge;                 // 0x0678 (size: 0x8)
    class UAbilityTask_WaitGameplayTagAdded* StageTwoWaitSuperCharge;                 // 0x0680 (size: 0x8)
    class UAbilityTask_WaitGameplayTagAdded* StageThreeWaitSuperCharge;               // 0x0688 (size: 0x8)
    class UAbilityTask_WaitGameplayTagAdded* StageZeroWaitSuperCharge;                // 0x0690 (size: 0x8)
    class UAbilityTask_WaitGameplayTagAdded* WaitForSuperJumpTask;                    // 0x0698 (size: 0x8)

    void Added_BCE15031450AA6F999ACAEB782946BCB();
    void Removed_05FDE7AF47B050255A7EF09D4821B8AF();
    void Added_F1127AF5437E0E08A8DF7A81DB39DDA6();
    void Added_533EB0114326E46FDFF3C8A97B63D5CE();
    void Removed_97421C314DE5401804B7CBAD3F8BDD1A();
    void Added_3DDD390D40C8F22AD448A9973F0CF2F3();
    void Removed_0EBE88584A249A1075CF4781168304E7();
    void Added_5C0AC0814F66B809C404AEAD6830904E();
    void Added_D06DDC0743F222A4F03BF2A1C7C951FE();
    void Added_1A2864B040514C12E83D1FABAD104B95();
    void Added_1A585EC0432E343EB3106C80BE121A48();
    void Added_C8F3D5904ECBDE2658832494CC5F3EF9();
    void Added_4BBD3EFC42992F0D30BA1AAD7A238738();
    void Removed_F7FA09F1422008ED73BBD7B699EED7A3();
    void WaitForUnderwater();
    void OnUnderwaterStarted();
    void OnUnderwaterEnded();
    void WaitForSuperCharge();
    void OnSuperChargeStarted();
    void OnSuperChargeEnded();
    void PostEndAbility(bool bWasCancelled);
    void OnJumpEnded();
    void WaitForFlight();
    void OnJumpStarted();
    void OnFlyStarted();
    void WaitForJump();
    void WaitForCharge();
    void OnChargeEnded();
    void OnChargeStarted();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void UpdateQueueFly();
    void CheckMovementContext();
    void EndSuperChargeWaitTasks();
    void WaitForSuperJump();
    void OnSuperJumpStarted();
    void OnSuperJumpEnded();
    void ExecuteUbergraph_GA_Spyro_MovementController(int32 EntryPoint);
}; // Size: 0x6A0

#endif
