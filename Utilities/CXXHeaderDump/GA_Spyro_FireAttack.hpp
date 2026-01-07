#ifndef UE4SS_SDK_GA_Spyro_FireAttack_HPP
#define UE4SS_SDK_GA_Spyro_FireAttack_HPP

class UGA_Spyro_FireAttack_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class APhasmidCollisionRegion* DamageRegion;                                      // 0x0648 (size: 0x8)
    FPhasmidProjectileEmitterStruct SuperFire_LoopingParticle;                        // 0x0650 (size: 0x30)
    FPhasmidProjectileEmitterStruct SuperFire_OnHitParticle;                          // 0x0680 (size: 0x30)
    FPhasmidProjectileEmitterStruct SuperFire_OnExpireParticle;                       // 0x06B0 (size: 0x30)
    FPhasmidProjectileEmitterStruct IceBreath_LoopingParticle;                        // 0x06E0 (size: 0x30)
    FPhasmidProjectileEmitterStruct IceBreath_OnHitParticle;                          // 0x0710 (size: 0x30)
    FPhasmidProjectileEmitterStruct IceBreath_OnExpireParticle;                       // 0x0740 (size: 0x30)
    class UParticleSystem* ParticleSystem;                                            // 0x0770 (size: 0x8)
    bool ComboWindowStart;                                                            // 0x0778 (size: 0x1)
    bool ComboQueued;                                                                 // 0x0779 (size: 0x1)
    class UAbilityTask_WaitDelay* ComboQueuedTask;                                    // 0x0780 (size: 0x8)
    class UAbilityTask_WaitDelay* ComboWindowStartTask;                               // 0x0788 (size: 0x8)
    FPhasmidProjectileEmitterStruct SuperBubble_LoopingParticle;                      // 0x0790 (size: 0x30)
    FPhasmidProjectileEmitterStruct SuperBubble_OnHitParticle;                        // 0x07C0 (size: 0x30)
    FPhasmidProjectileEmitterStruct SuperBubble_OnExpireParticle;                     // 0x07F0 (size: 0x30)
    class UFollowCameraComponent* NewVar_0;                                           // 0x0820 (size: 0x8)
    FPhasmidProjectileStruct SpitItemProjectileStruct;                                // 0x0830 (size: 0x2F0)
    float SPIT_MAX_TARGET_DIST;                                                       // 0x0B20 (size: 0x4)

    void GetTargetActors(float MaxDistance, float FieldOfView, float MaxHeight, class AActor*& Target);
    bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);
    void AdjsutFreelookTarget(class ABP_SpitItemPlacement_Base_C* ProjectileActor, bool IsFreeLooking, FPhasmidProjectileStruct& StructOut);
    void InitFireAttackActor(class AFireAttackActorTrace_C* SpawnedActor, class AFireAttackActorTrace_C*& _);
    bool CancelAbilityOnSpecialCases();
    class UCameraComponent* GetCurrentViewTarget(class AActor* PlayerActor);
    FTransform SpawnTransform();
    void OnCancelled_6B8595B54B311AC8716804A57CC96E6F();
    void OnInterrupted_6B8595B54B311AC8716804A57CC96E6F();
    void OnBlendOut_6B8595B54B311AC8716804A57CC96E6F();
    void OnCompleted_6B8595B54B311AC8716804A57CC96E6F();
    void Added_F7E946F34B280B16310F88BF4D0351FB();
    void OnFinish_AE12D0274D12D24E047192BE46A2A129();
    void OnCancelled_F0CDFDDD49C5B67F736AC488F703B7AC();
    void OnInterrupted_F0CDFDDD49C5B67F736AC488F703B7AC();
    void OnBlendOut_F0CDFDDD49C5B67F736AC488F703B7AC();
    void OnCompleted_F0CDFDDD49C5B67F736AC488F703B7AC();
    void OnCancelled_DF8A2E0E4652117C7D1F7ABD14D43535();
    void OnInterrupted_DF8A2E0E4652117C7D1F7ABD14D43535();
    void OnBlendOut_DF8A2E0E4652117C7D1F7ABD14D43535();
    void OnCompleted_DF8A2E0E4652117C7D1F7ABD14D43535();
    void Removed_5998434A4DF3EBCB9BA9ED85EA581B3E();
    void Added_71392CBC4A6A8AA817D5C3AC8933E6A5();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void DoSpitItem();
    void DoIceBreath();
    void DoSuperBubble();
    void DoSuperFire();
    void DoBubbles();
    void DoFire();
    void PostEndAbility(bool bWasCancelled);
    void DoSpitItemAttempted();
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void ComboFireAttack();
    void DoCustomProjectile();
    void DoRapidFire();
    void OnRapidFire End();
    void OnRapidFireCleanUp();
    void ExecuteUbergraph_GA_Spyro_FireAttack(int32 EntryPoint);
}; // Size: 0xB24

#endif
