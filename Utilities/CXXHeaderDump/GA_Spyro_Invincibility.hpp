#ifndef UE4SS_SDK_GA_Spyro_Invincibility_HPP
#define UE4SS_SDK_GA_Spyro_Invincibility_HPP

class UGA_Spyro_Invincibility_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    FActiveGameplayEffectHandle SideRollGameplayEffect;                               // 0x0648 (size: 0x8)
    float SideRollDirection;                                                          // 0x0650 (size: 0x4)
    bool IsSideRollPressed;                                                           // 0x0654 (size: 0x1)
    class UParticleSystemComponent* InvincibilityIndicator;                           // 0x0658 (size: 0x8)
    class UParticleSystemComponent* InvincibilityEffects;                             // 0x0660 (size: 0x8)

    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Invincibility(int32 EntryPoint);
}; // Size: 0x668

#endif
