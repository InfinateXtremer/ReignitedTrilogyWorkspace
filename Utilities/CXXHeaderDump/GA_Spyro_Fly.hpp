#ifndef UE4SS_SDK_GA_Spyro_Fly_HPP
#define UE4SS_SDK_GA_Spyro_Fly_HPP

class UGA_Spyro_Fly_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    FActiveGameplayEffectHandle GlidingGameplayEffect;                                // 0x0648 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailLeft;                            // 0x0650 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailRight;                           // 0x0658 (size: 0x8)
    int32 CamSettingsId;                                                              // 0x0660 (size: 0x4)
    class UParticleSystemComponent* CameraWindLines;                                  // 0x0668 (size: 0x8)
    bool DidCrashIntoGeo;                                                             // 0x0670 (size: 0x1)

    void SetCameraSettings();
    void OnCancelled_94CE886645DDC3BE2C051E814366576D();
    void OnInterrupted_94CE886645DDC3BE2C051E814366576D();
    void OnBlendOut_94CE886645DDC3BE2C051E814366576D();
    void OnCompleted_94CE886645DDC3BE2C051E814366576D();
    void OnStartFly();
    void OnEndFly();
    void OnCancelFly();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void OnFlap();
    void OnHover();
    void OnNewInputSource(EInputSource NewInputSource);
    void ExecuteUbergraph_GA_Spyro_Fly(int32 EntryPoint);
}; // Size: 0x671

#endif
