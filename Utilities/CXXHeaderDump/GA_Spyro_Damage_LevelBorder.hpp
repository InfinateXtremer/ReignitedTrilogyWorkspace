#ifndef UE4SS_SDK_GA_Spyro_Damage_LevelBorder_HPP
#define UE4SS_SDK_GA_Spyro_Damage_LevelBorder_HPP

class UGA_Spyro_Damage_LevelBorder_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)
    class AActor* Instigator;                                                         // 0x0668 (size: 0x8)

    void OnCancelled_0178751848BBAED5C8F61EB37F2B901D();
    void OnInterrupted_0178751848BBAED5C8F61EB37F2B901D();
    void OnBlendOut_0178751848BBAED5C8F61EB37F2B901D();
    void OnCompleted_0178751848BBAED5C8F61EB37F2B901D();
    void OnLanded_2DE46F2348D2A9B1314AB59A5BA61C09();
    void OnFinish_2DE46F2348D2A9B1314AB59A5BA61C09();
    void OnFinish_7A4568254A1BC35C5F68C9891CFC8AA8();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void ExecuteUbergraph_GA_Spyro_Damage_LevelBorder(int32 EntryPoint);
}; // Size: 0x670

#endif
