#ifndef UE4SS_SDK_BP_CBS1002_Blowhard_Projectile_HPP
#define UE4SS_SDK_BP_CBS1002_Blowhard_Projectile_HPP

class ABP_CBS1002_Blowhard_Projectile_C : public APhasmidBasicProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)
    class UBoxComponent* Box_DamageRegion;                                            // 0x0640 (size: 0x8)
    class UParticleSystemComponent* PS_StormCloud;                                    // 0x0648 (size: 0x8)
    class UParticleSystemComponent* PS_LightningAttack;                               // 0x0650 (size: 0x8)
    float Timeline_0_NewTrack_1_8E8C7849426E801811803E879682424B;                     // 0x0658 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8E8C7849426E801811803E879682424B; // 0x065C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0660 (size: 0x8)
    bool isAttacking;                                                                 // 0x0668 (size: 0x1)
    bool isSafeToStep;                                                                // 0x0669 (size: 0x1)
    bool didLightningAttack?;                                                         // 0x066A (size: 0x1)
    class ABP_DecalProjectile_C* NewVar_0;                                            // 0x0670 (size: 0x8)
    class UDecalComponent* NewVar_1;                                                  // 0x0678 (size: 0x8)
    class UParticleSystemComponent* NewVar_2;                                         // 0x0680 (size: 0x8)
    FVector ActualSpeed;                                                              // 0x0688 (size: 0xC)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveProjectileFired();
    void BndEvt__Box_DamageRegion_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CBS1002_Blowhard_Projectile(int32 EntryPoint);
}; // Size: 0x694

#endif
