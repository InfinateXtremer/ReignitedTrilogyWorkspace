#ifndef UE4SS_SDK_GA_Spyro_Damage_Drown_HPP
#define UE4SS_SDK_GA_Spyro_Damage_Drown_HPP

class UGA_Spyro_Damage_Drown_C : public UGA_Spyro_Damage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    FActiveGameplayEffectHandle OnlyJumpInputEffect;                                  // 0x0658 (size: 0x8)
    bool WillDrown;                                                                   // 0x0660 (size: 0x1)
    class UParticleSystemComponent* EffectWaterLoop;                                  // 0x0668 (size: 0x8)
    FVector VFXSpawnLocation;                                                         // 0x0670 (size: 0xC)
    class UParticleSystem* SourceEmitterStart;                                        // 0x0680 (size: 0x8)
    class UParticleSystem* SourceEmitterLoop;                                         // 0x0688 (size: 0x8)
    class UParticleSystem* SourceEmitterJump;                                         // 0x0690 (size: 0x8)
    class UAkAudioEvent* SFX_Start;                                                   // 0x0698 (size: 0x8)
    class UAkAudioEvent* SFX_End;                                                     // 0x06A0 (size: 0x8)

    FVector GetEffectsSpawnLocation();
    void OnFinish_0239E9C64735B5A8D85DCE8A58D5227A();
    void OnNotifyEnd_7CAA9B8A402F7ABAE7B856BCA8A8FB87(FName NotifyName);
    void OnNotifyBegin_7CAA9B8A402F7ABAE7B856BCA8A8FB87(FName NotifyName);
    void OnInterrupted_7CAA9B8A402F7ABAE7B856BCA8A8FB87(FName NotifyName);
    void OnBlendOut_7CAA9B8A402F7ABAE7B856BCA8A8FB87(FName NotifyName);
    void OnCompleted_7CAA9B8A402F7ABAE7B856BCA8A8FB87(FName NotifyName);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void CauseDeath();
    void PostEndAbility(bool bWasCancelled);
    void OnDrownStartEffects();
    void OnDrownEndEffects();
    void OnDrownJumpOutEffects();
    void SetUpEffectContext(FGameplayTag EventTag, class AActor* Instigator, float Magnitude);
    void OnPlayerJumpOut();
    void ExecuteUbergraph_GA_Spyro_Damage_Drown(int32 EntryPoint);
}; // Size: 0x6A8

#endif
