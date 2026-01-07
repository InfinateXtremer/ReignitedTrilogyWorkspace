#ifndef UE4SS_SDK_GA_Spyro_Damage_BounceWithRecovery_HPP
#define UE4SS_SDK_GA_Spyro_Damage_BounceWithRecovery_HPP

class UGA_Spyro_Damage_BounceWithRecovery_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)
    bool IsLong;                                                                      // 0x0664 (size: 0x1)
    class UAbilityTask_ApplyRootMotionJumpForce* JumpTask;                            // 0x0668 (size: 0x8)

    void OnFinish_0FD95255402705E0A5227BAED0C47678();
    void OnFinish_A479C2604E43FE11F47D1DBFDF9435EE();
    void OnLanded_1BF8771B410C495736A3BB92F04FD3F0();
    void OnFinish_1BF8771B410C495736A3BB92F04FD3F0();
    void OnCancelled_DB95E3534D4C6CAB30F7A5B5A0184DC3();
    void OnInterrupted_DB95E3534D4C6CAB30F7A5B5A0184DC3();
    void OnBlendOut_DB95E3534D4C6CAB30F7A5B5A0184DC3();
    void OnCompleted_DB95E3534D4C6CAB30F7A5B5A0184DC3();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void ExecuteUbergraph_GA_Spyro_Damage_BounceWithRecovery(int32 EntryPoint);
}; // Size: 0x670

#endif
