#ifndef UE4SS_SDK_GA_Spyro_Climb_HPP
#define UE4SS_SDK_GA_Spyro_Climb_HPP

class UGA_Spyro_Climb_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    FActiveGameplayEffectHandle ClimbingGameplayEffect;                               // 0x0648 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailLeft;                            // 0x0650 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailRight;                           // 0x0658 (size: 0x8)
    bool JumpApexReached;                                                             // 0x0660 (size: 0x1)
    int32 CamSettingsId;                                                              // 0x0664 (size: 0x4)

    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void ReAttachToSurface();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void ExecuteUbergraph_GA_Spyro_Climb(int32 EntryPoint);
}; // Size: 0x668

#endif
