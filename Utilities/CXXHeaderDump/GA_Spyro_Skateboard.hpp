#ifndef UE4SS_SDK_GA_Spyro_Skateboard_HPP
#define UE4SS_SDK_GA_Spyro_Skateboard_HPP

class UGA_Spyro_Skateboard_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    FActiveGameplayEffectHandle SkateboardGameplayEffect;                             // 0x0648 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailLeft;                            // 0x0650 (size: 0x8)
    class UParticleSystemComponent* ParticleWingTrailRight;                           // 0x0658 (size: 0x8)
    class AActor* CustomCamera;                                                       // 0x0660 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0668 (size: 0x8)

    void DidNotSpawn_30CE06A5485B303A7FF02DB85B40C4EA(class AActor* SpawnedActor);
    void Success_30CE06A5485B303A7FF02DB85B40C4EA(class AActor* SpawnedActor);
    void OnEndSkateboard();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void OnCrash();
    void PostEndAbility(bool bWasCancelled);
    void OnStartSkateboard();
    void ExecuteUbergraph_GA_Spyro_Skateboard(int32 EntryPoint);
}; // Size: 0x670

#endif
