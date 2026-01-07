#ifndef UE4SS_SDK_GA_Spyro_Damage_KnockBackShort_HPP
#define UE4SS_SDK_GA_Spyro_Damage_KnockBackShort_HPP

class UGA_Spyro_Damage_KnockBackShort_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    float Duration;                                                                   // 0x0658 (size: 0x4)
    FActiveGameplayEffectHandle GameplayEffect;                                       // 0x065C (size: 0x8)
    float DURATION_DIVING;                                                            // 0x0664 (size: 0x4)
    float Distance;                                                                   // 0x0668 (size: 0x4)
    FGameplayTag EventTag;                                                            // 0x0670 (size: 0x8)
    float DURATION_QUICK;                                                             // 0x0678 (size: 0x4)
    class UAbilityTask_ApplyRootMotionJumpForce* JumpForceTask;                       // 0x0680 (size: 0x8)
    float GRACE_PERIOD_QUICK;                                                         // 0x0688 (size: 0x4)

    FVector CalculateDamageDestination(FVector AttackerLocation);
    void OnLanded_0EBB2C8443DA3E1169B725B1FF9B7C49();
    void OnFinish_0EBB2C8443DA3E1169B725B1FF9B7C49();
    void OnCancelled_3B0962FA4BF5DABEDB10479D6015CC09();
    void OnInterrupted_3B0962FA4BF5DABEDB10479D6015CC09();
    void OnBlendOut_3B0962FA4BF5DABEDB10479D6015CC09();
    void OnCompleted_3B0962FA4BF5DABEDB10479D6015CC09();
    void OnFinish_92C48B9746F25EB0A5D3A9B8626544D0();
    void OnTimedOutAndDestinationReached_25E6E56143A308D96CC601825CAC6A70();
    void OnTimedOut_25E6E56143A308D96CC601825CAC6A70();
    void OnCancelled_FD3429C04D74317775925A919D0FFD18();
    void OnInterrupted_FD3429C04D74317775925A919D0FFD18();
    void OnBlendOut_FD3429C04D74317775925A919D0FFD18();
    void OnCompleted_FD3429C04D74317775925A919D0FFD18();
    void OnFinish_B2C3328C443A01D5D43B019C3A8DD358();
    void OnFinish_62C0F8964F362EDAE1907CB8340E54C2();
    void OnFinish_AA16650744E5839D24FC13883038A1BC();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void PostEndAbility(bool bWasCancelled);
    void ExecuteUbergraph_GA_Spyro_Damage_KnockBackShort(int32 EntryPoint);
}; // Size: 0x68C

#endif
