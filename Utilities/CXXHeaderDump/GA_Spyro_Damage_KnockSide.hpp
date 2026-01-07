#ifndef UE4SS_SDK_GA_Spyro_Damage_KnockSide_HPP
#define UE4SS_SDK_GA_Spyro_Damage_KnockSide_HPP

class UGA_Spyro_Damage_KnockSide_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Distance;                                                                   // 0x0658 (size: 0x4)
    float Duration;                                                                   // 0x065C (size: 0x4)
    FVector Destination;                                                              // 0x0660 (size: 0xC)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x066C (size: 0x8)

    void Get RollDirection(class AActor* Instigator, FGameplayTag Tag);
    void OnTimedOutAndDestinationReached_A487E1B749408059B5C5378A175B02C6();
    void OnTimedOut_A487E1B749408059B5C5378A175B02C6();
    void OnCancelled_8C06D45040B4C11514844A833033695E();
    void OnInterrupted_8C06D45040B4C11514844A833033695E();
    void OnBlendOut_8C06D45040B4C11514844A833033695E();
    void OnCompleted_8C06D45040B4C11514844A833033695E();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_KnockSide(int32 EntryPoint);
}; // Size: 0x674

#endif
