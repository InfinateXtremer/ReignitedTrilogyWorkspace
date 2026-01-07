#ifndef UE4SS_SDK_GA_Spyro_Damage_Tornado_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Tornado_HPP

class UGA_Spyro_Damage_Tornado_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)

    void OnCancelled_39BD01B8490124E7F7DCB5AC0B54DC45();
    void OnInterrupted_39BD01B8490124E7F7DCB5AC0B54DC45();
    void OnBlendOut_39BD01B8490124E7F7DCB5AC0B54DC45();
    void OnCompleted_39BD01B8490124E7F7DCB5AC0B54DC45();
    void OnFinish_B6BC25BC4F41DE4310B0218E9F2D5D44();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_Tornado(int32 EntryPoint);
}; // Size: 0x664

#endif
