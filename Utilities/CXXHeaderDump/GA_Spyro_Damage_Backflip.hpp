#ifndef UE4SS_SDK_GA_Spyro_Damage_Backflip_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Backflip_HPP

class UGA_Spyro_Damage_Backflip_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)

    void OnCancelled_F6334E85458DF48EE68F8BBD3E51E3E6();
    void OnInterrupted_F6334E85458DF48EE68F8BBD3E51E3E6();
    void OnBlendOut_F6334E85458DF48EE68F8BBD3E51E3E6();
    void OnCompleted_F6334E85458DF48EE68F8BBD3E51E3E6();
    void OnFinish_14143CD247664C371D19F389CB691873();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_Backflip(int32 EntryPoint);
}; // Size: 0x664

#endif
