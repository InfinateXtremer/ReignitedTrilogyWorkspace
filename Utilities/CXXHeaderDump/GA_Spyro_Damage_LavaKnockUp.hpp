#ifndef UE4SS_SDK_GA_Spyro_Damage_LavaKnockUp_HPP
#define UE4SS_SDK_GA_Spyro_Damage_LavaKnockUp_HPP

class UGA_Spyro_Damage_LavaKnockUp_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle DisableSomeInput;                                     // 0x065C (size: 0x8)
    bool IsZapDamage;                                                                 // 0x0664 (size: 0x1)
    class UParticleSystemComponent* LoopingTrail;                                     // 0x0668 (size: 0x8)
    bool IsAcidDamage;                                                                // 0x0670 (size: 0x1)
    bool IsLaserDamage;                                                               // 0x0671 (size: 0x1)
    bool IsWaterDamage;                                                               // 0x0672 (size: 0x1)
    bool IsLiquidKnockUp;                                                             // 0x0673 (size: 0x1)
    class AActor* Instigator;                                                         // 0x0678 (size: 0x8)

    void OnCancelled_FB0B45284194DB8ECD141380D352AF65();
    void OnInterrupted_FB0B45284194DB8ECD141380D352AF65();
    void OnBlendOut_FB0B45284194DB8ECD141380D352AF65();
    void OnCompleted_FB0B45284194DB8ECD141380D352AF65();
    void OnFinish_E6ACB4334F7DABE1A15626AD2D936069();
    void OnCancelled_C7BC4A2C42D406BF3F47F786AF0C82A8();
    void OnInterrupted_C7BC4A2C42D406BF3F47F786AF0C82A8();
    void OnBlendOut_C7BC4A2C42D406BF3F47F786AF0C82A8();
    void OnCompleted_C7BC4A2C42D406BF3F47F786AF0C82A8();
    void OnCancelled_2A40DC59470C718AD9573BBB80E34DB3();
    void OnInterrupted_2A40DC59470C718AD9573BBB80E34DB3();
    void OnBlendOut_2A40DC59470C718AD9573BBB80E34DB3();
    void OnCompleted_2A40DC59470C718AD9573BBB80E34DB3();
    void OnCancelled_0DAAC11A4592375459D6BABDCE75291F();
    void OnInterrupted_0DAAC11A4592375459D6BABDCE75291F();
    void OnBlendOut_0DAAC11A4592375459D6BABDCE75291F();
    void OnCompleted_0DAAC11A4592375459D6BABDCE75291F();
    void OnCancelled_14FA7AF24F18A11A224E6091CE2B4D73();
    void OnInterrupted_14FA7AF24F18A11A224E6091CE2B4D73();
    void OnBlendOut_14FA7AF24F18A11A224E6091CE2B4D73();
    void OnCompleted_14FA7AF24F18A11A224E6091CE2B4D73();
    void OnCancelled_602A24D148225DB808D6DB8BFA41C7A5();
    void OnInterrupted_602A24D148225DB808D6DB8BFA41C7A5();
    void OnBlendOut_602A24D148225DB808D6DB8BFA41C7A5();
    void OnCompleted_602A24D148225DB808D6DB8BFA41C7A5();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void TriggerAudioVisuals();
    void ExecuteUbergraph_GA_Spyro_Damage_LavaKnockUp(int32 EntryPoint);
}; // Size: 0x680

#endif
