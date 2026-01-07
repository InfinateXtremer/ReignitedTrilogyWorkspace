#ifndef UE4SS_SDK_GA_Spyro_Damage_BossKnockUp_HPP
#define UE4SS_SDK_GA_Spyro_Damage_BossKnockUp_HPP

class UGA_Spyro_Damage_BossKnockUp_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle DisableSomeInput;                                     // 0x065C (size: 0x8)

    void OnFinish_3A7383E04B9D1AE15872F1ADC1EF4BAF();
    void PostEndAbility(bool bWasCancelled);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void ExecuteUbergraph_GA_Spyro_Damage_BossKnockUp(int32 EntryPoint);
}; // Size: 0x664

#endif
