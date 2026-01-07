#ifndef UE4SS_SDK_BP_205_OrbTargets_HPP
#define UE4SS_SDK_BP_205_OrbTargets_HPP

class ABP_205_OrbTargets_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class USphereComponent* Trigger;                                                  // 0x0450 (size: 0x8)
    class UParticleSystemComponent* OrbPlacedVFX;                                     // 0x0458 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Generator;                                            // 0x0468 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0470 (size: 0x8)
    class UBP_StateComponent_C* State_Activated;                                      // 0x0478 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0480 (size: 0x8)
    FGameplayTagContainer SpitDamage;                                                 // 0x0488 (size: 0x20)
    bool IsActive;                                                                    // 0x04A8 (size: 0x1)
    class ABP_205_LightningStone_Controller_C* Controller;                            // 0x04B0 (size: 0x8)
    class ABP_205_SpitItem_C* ClosestItem;                                            // 0x04B8 (size: 0x8)

    void UserConstructionScript();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void BndEvt__State_Activated_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Activated_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_205_OrbTargets(int32 EntryPoint);
}; // Size: 0x4C0

#endif
