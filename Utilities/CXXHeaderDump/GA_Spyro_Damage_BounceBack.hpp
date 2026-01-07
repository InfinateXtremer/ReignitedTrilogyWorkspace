#ifndef UE4SS_SDK_GA_Spyro_Damage_BounceBack_HPP
#define UE4SS_SDK_GA_Spyro_Damage_BounceBack_HPP

class UGA_Spyro_Damage_BounceBack_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)

    void OnCancelled_2A535DA4482D0A0CE8B2CDB20E95629A();
    void OnInterrupted_2A535DA4482D0A0CE8B2CDB20E95629A();
    void OnBlendOut_2A535DA4482D0A0CE8B2CDB20E95629A();
    void OnCompleted_2A535DA4482D0A0CE8B2CDB20E95629A();
    void OnLanded_9FBD604C48AA72B9A82EC7AA8BE39689();
    void OnFinish_9FBD604C48AA72B9A82EC7AA8BE39689();
    void OnCancelled_A18F84C241CB538B5864EDA8716FC264();
    void OnInterrupted_A18F84C241CB538B5864EDA8716FC264();
    void OnBlendOut_A18F84C241CB538B5864EDA8716FC264();
    void OnCompleted_A18F84C241CB538B5864EDA8716FC264();
    void OnFinish_7B91A5734E59EC3FAC18C5B9E2584F2B();
    void OnFinish_AAF1A4874CD667A7234D089DE969AA3B();
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_BounceBack(int32 EntryPoint);
}; // Size: 0x664

#endif
