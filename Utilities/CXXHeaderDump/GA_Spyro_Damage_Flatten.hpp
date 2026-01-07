#ifndef UE4SS_SDK_GA_Spyro_Damage_Flatten_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Flatten_HPP

class UGA_Spyro_Damage_Flatten_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)
    bool IsShortVersion;                                                              // 0x0664 (size: 0x1)
    float DURATION_SHORT;                                                             // 0x0668 (size: 0x4)
    float DURATION_POST;                                                              // 0x066C (size: 0x4)
    FVector PrevScale;                                                                // 0x0670 (size: 0xC)

    void OnCancelled_491B349C4656E215E02B29B7ED72A87F();
    void OnInterrupted_491B349C4656E215E02B29B7ED72A87F();
    void OnBlendOut_491B349C4656E215E02B29B7ED72A87F();
    void OnCompleted_491B349C4656E215E02B29B7ED72A87F();
    void OnFinish_DDDAD2A14BFF2B6BFCFC6CA3D8E29CF2();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_Flatten(int32 EntryPoint);
}; // Size: 0x67C

#endif
