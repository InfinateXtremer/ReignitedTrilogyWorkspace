#ifndef UE4SS_SDK_GA_Spyro_Damage_Simple_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Simple_HPP

class UGA_Spyro_Damage_Simple_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)

    void OnCancelled_6D410CC5423DC5BFEDF6529C698784B3();
    void OnInterrupted_6D410CC5423DC5BFEDF6529C698784B3();
    void OnBlendOut_6D410CC5423DC5BFEDF6529C698784B3();
    void OnCompleted_6D410CC5423DC5BFEDF6529C698784B3();
    void OnFinish_D4BA07F447B2D3F9BEC817857CA4A93B();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_Simple(int32 EntryPoint);
}; // Size: 0x664

#endif
