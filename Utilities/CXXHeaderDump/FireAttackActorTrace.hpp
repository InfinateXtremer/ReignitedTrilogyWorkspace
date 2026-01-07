#ifndef UE4SS_SDK_FireAttackActorTrace_HPP
#define UE4SS_SDK_FireAttackActorTrace_HPP

class AFireAttackActorTrace_C : public ASpyroFlameBreathActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E0 (size: 0x8)
    class ABP_WEEDS_TfbGrassManager_C* GrassManager;                                  // 0x04E8 (size: 0x8)
    FGameplayTagContainer AttackTags;                                                 // 0x04F0 (size: 0x20)
    class UParticleSystemComponent* Emitter;                                          // 0x0510 (size: 0x8)
    TArray<class UParticleSystemComponent*> ImpactEmitter;                            // 0x0518 (size: 0x10)
    bool CanSpawnImpact;                                                              // 0x0528 (size: 0x1)

    void CleanupImpacts();
    void UserConstructionScript();
    void ReceiveFinishSpawnAndEnable();
    void SetDamageTags(FGameplayTagContainer Collision Tags);
    void ReceiveOnReleaseToPool();
    void SpawnVFX(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, FName AttachPointName);
    void ExecuteUbergraph_FireAttackActorTrace(int32 EntryPoint);
}; // Size: 0x529

#endif
