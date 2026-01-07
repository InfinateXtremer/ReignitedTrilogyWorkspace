#ifndef UE4SS_SDK_GA_Spyro_Damage_Base_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Base_HPP

class UGA_Spyro_Damage_Base_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class UParticleSystemComponent* StunnedStarsEmitter;                              // 0x0648 (size: 0x8)

    void K2_OnEndAbility(bool bWasCancelled);
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void CancelPlayerAbilities();
    void CancelFire();
    void ExecuteUbergraph_GA_Spyro_Damage_Base(int32 EntryPoint);
}; // Size: 0x650

#endif
