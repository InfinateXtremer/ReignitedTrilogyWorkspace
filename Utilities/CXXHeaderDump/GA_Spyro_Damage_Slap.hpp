#ifndef UE4SS_SDK_GA_Spyro_Damage_Slap_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Slap_HPP

class UGA_Spyro_Damage_Slap_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)

    void OnCancelled_0A399E6D46EC230378D62DAC7D5C4CDB();
    void OnInterrupted_0A399E6D46EC230378D62DAC7D5C4CDB();
    void OnBlendOut_0A399E6D46EC230378D62DAC7D5C4CDB();
    void OnCompleted_0A399E6D46EC230378D62DAC7D5C4CDB();
    void OnFinish_98452EEF43928B19399CA5B8E47A418C();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_Slap(int32 EntryPoint);
}; // Size: 0x664

#endif
