#ifndef UE4SS_SDK_GA_Spyro_Damage_KnockBack_HPP
#define UE4SS_SDK_GA_Spyro_Damage_KnockBack_HPP

class UGA_Spyro_Damage_KnockBack_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x0658 (size: 0x8)
    float Duration;                                                                   // 0x0660 (size: 0x4)
    float DURATION_LONG;                                                              // 0x0664 (size: 0x4)
    float DURATION_BACKFLIP;                                                          // 0x0668 (size: 0x4)
    float Distance;                                                                   // 0x066C (size: 0x4)
    float DISTANCE_LONG;                                                              // 0x0670 (size: 0x4)
    float DISTANCE_BACKFLIP;                                                          // 0x0674 (size: 0x4)
    int32 KnockbackType;                                                              // 0x0678 (size: 0x4)
    float KnockbackDuration;                                                          // 0x067C (size: 0x4)
    float KnockbackHeight;                                                            // 0x0680 (size: 0x4)
    float KnockbackDistance;                                                          // 0x0684 (size: 0x4)
    float Height;                                                                     // 0x0688 (size: 0x4)
    float HEIGHT_LONG;                                                                // 0x068C (size: 0x4)
    float HEIGHT_BACKFLIP;                                                            // 0x0690 (size: 0x4)
    float GRACE_PERIOD;                                                               // 0x0694 (size: 0x4)
    FActiveGameplayEffectHandle InvulnerabilityGameplayEffect;                        // 0x0698 (size: 0x8)

    void SetKnockBackParameters(FGameplayTag Selection);
    void OnCancelled_0F0F480C408A9A55A6A0E584D6BA7AA7();
    void OnInterrupted_0F0F480C408A9A55A6A0E584D6BA7AA7();
    void OnBlendOut_0F0F480C408A9A55A6A0E584D6BA7AA7();
    void OnCompleted_0F0F480C408A9A55A6A0E584D6BA7AA7();
    void OnLanded_15736F1043F15A28304E6BAD9B084D06();
    void OnFinish_15736F1043F15A28304E6BAD9B084D06();
    void OnCancelled_69ACDEE145958FF9E4195BBB15DCA57A();
    void OnInterrupted_69ACDEE145958FF9E4195BBB15DCA57A();
    void OnBlendOut_69ACDEE145958FF9E4195BBB15DCA57A();
    void OnCompleted_69ACDEE145958FF9E4195BBB15DCA57A();
    void OnCancelled_8594BFC347795E0869CC30BE3DEED178();
    void OnInterrupted_8594BFC347795E0869CC30BE3DEED178();
    void OnBlendOut_8594BFC347795E0869CC30BE3DEED178();
    void OnCompleted_8594BFC347795E0869CC30BE3DEED178();
    void OnFinish_A3D25C9A4FE67D5CE5C918A70B5652AE();
    void OnFinish_D83CA5CA43A76DD901619998D759361B();
    void OnCancelled_036428494448189CA922F693203E61CA();
    void OnInterrupted_036428494448189CA922F693203E61CA();
    void OnBlendOut_036428494448189CA922F693203E61CA();
    void OnCompleted_036428494448189CA922F693203E61CA();
    void OnCancelled_96E3A77848ADFD914A5F84B158C6DF85();
    void OnInterrupted_96E3A77848ADFD914A5F84B158C6DF85();
    void OnBlendOut_96E3A77848ADFD914A5F84B158C6DF85();
    void OnCompleted_96E3A77848ADFD914A5F84B158C6DF85();
    void OnFinish_934FE6A54BFF4A0FE880A099B19E6FE4();
    void OnFinish_43E78F5B4337814448957F847170CAC1();
    void Added_3E5708924C34046A17526B98C3FCC563();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void OnFinish();
    void ExecuteUbergraph_GA_Spyro_Damage_KnockBack(int32 EntryPoint);
}; // Size: 0x6A0

#endif
