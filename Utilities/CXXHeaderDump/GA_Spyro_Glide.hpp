#ifndef UE4SS_SDK_GA_Spyro_Glide_HPP
#define UE4SS_SDK_GA_Spyro_Glide_HPP

class UGA_Spyro_Glide_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    FActiveGameplayEffectHandle GlidingGameplayEffect;                                // 0x0648 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailLeft;                            // 0x0650 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailRight;                           // 0x0658 (size: 0x8)
    float HoverTypePayload;                                                           // 0x0660 (size: 0x4)
    int32 CamSettingsId;                                                              // 0x0664 (size: 0x4)
    bool DidCrashIntoGeo;                                                             // 0x0668 (size: 0x1)
    float ZVelocityComponent;                                                         // 0x066C (size: 0x4)

    void CheckShouldCrashOnStart(bool& Crashed);
    void SetInitialGlideVelocity();
    void OnCancelled_CB3BA12642923DC97948B8A327F7DCBA();
    void OnInterrupted_CB3BA12642923DC97948B8A327F7DCBA();
    void OnBlendOut_CB3BA12642923DC97948B8A327F7DCBA();
    void OnCompleted_CB3BA12642923DC97948B8A327F7DCBA();
    void OnStartGlide();
    void OnEndGlide();
    void OnHover(float EventMagnitude);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void MinGlideThresholdForHover();
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void OnCrash();
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Glide(int32 EntryPoint);
}; // Size: 0x670

#endif
