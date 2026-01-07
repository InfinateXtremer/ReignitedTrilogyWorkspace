#ifndef UE4SS_SDK_GA_Spyro_Damage_Eaten_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Eaten_HPP

class UGA_Spyro_Damage_Eaten_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)

    void OnCancelled_EE291F3748F55ADE3EF765BAB5977477();
    void OnInterrupted_EE291F3748F55ADE3EF765BAB5977477();
    void OnBlendOut_EE291F3748F55ADE3EF765BAB5977477();
    void OnCompleted_EE291F3748F55ADE3EF765BAB5977477();
    void OnLanded_2B7F0E5148C6443C121D46B78EBB4442();
    void OnFinish_2B7F0E5148C6443C121D46B78EBB4442();
    void OnCancelled_120090754D838326A0A1E3B641BBF1DE();
    void OnInterrupted_120090754D838326A0A1E3B641BBF1DE();
    void OnBlendOut_120090754D838326A0A1E3B641BBF1DE();
    void OnCompleted_120090754D838326A0A1E3B641BBF1DE();
    void OnCancelled_5860CFB84A90AB788373928AA7CB1264();
    void OnInterrupted_5860CFB84A90AB788373928AA7CB1264();
    void OnBlendOut_5860CFB84A90AB788373928AA7CB1264();
    void OnCompleted_5860CFB84A90AB788373928AA7CB1264();
    void OnFinish_8735F19444048C79548028A90B24802E();
    void OnFinish_1DC91B7A4E7B9E352991ADBDFDF9C259();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ToggleEffect_StunnedStars(bool StarsVisible);
    void ExecuteUbergraph_GA_Spyro_Damage_Eaten(int32 EntryPoint);
}; // Size: 0x664

#endif
