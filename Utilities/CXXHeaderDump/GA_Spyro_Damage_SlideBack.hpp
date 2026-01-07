#ifndef UE4SS_SDK_GA_Spyro_Damage_SlideBack_HPP
#define UE4SS_SDK_GA_Spyro_Damage_SlideBack_HPP

class UGA_Spyro_Damage_SlideBack_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)
    class UParticleSystemComponent* SlideTrail;                                       // 0x0668 (size: 0x8)

    void OnCancelled_1B20BFC5473A4198B602E39AA12B7BA2();
    void OnInterrupted_1B20BFC5473A4198B602E39AA12B7BA2();
    void OnBlendOut_1B20BFC5473A4198B602E39AA12B7BA2();
    void OnCompleted_1B20BFC5473A4198B602E39AA12B7BA2();
    void OnFinish_0A7E879A4418A0A316624CA598FF34C3();
    void OnFinish_70FF5B8C45864E3292924EA8F3D6F049();
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void StartAudioVisuals();
    void StopAudioVisuals();
    void ExecuteUbergraph_GA_Spyro_Damage_SlideBack(int32 EntryPoint);
}; // Size: 0x670

#endif
