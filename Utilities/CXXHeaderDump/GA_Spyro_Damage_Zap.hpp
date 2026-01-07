#ifndef UE4SS_SDK_GA_Spyro_Damage_Zap_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Zap_HPP

class UGA_Spyro_Damage_Zap_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x0658 (size: 0x8)
    float DurationZap;                                                                // 0x0660 (size: 0x4)
    float DurationZapLong;                                                            // 0x0664 (size: 0x4)
    bool IsZapLong;                                                                   // 0x0668 (size: 0x1)
    class UParticleSystemComponent* ZapEffects;                                       // 0x0670 (size: 0x8)
    float DurationCoolDown;                                                           // 0x0678 (size: 0x4)

    void OnCancelled_86C2C3F547D0F99FED0C7C89FD5D49DE();
    void OnInterrupted_86C2C3F547D0F99FED0C7C89FD5D49DE();
    void OnBlendOut_86C2C3F547D0F99FED0C7C89FD5D49DE();
    void OnCompleted_86C2C3F547D0F99FED0C7C89FD5D49DE();
    void OnFinish_3AED65B64598325C65A6D4A0DB1A92F3();
    void OnFinish_74F5886C4F6E252059091C80BB289669();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void StopAudioVisuals();
    void ExecuteUbergraph_GA_Spyro_Damage_Zap(int32 EntryPoint);
}; // Size: 0x67C

#endif
