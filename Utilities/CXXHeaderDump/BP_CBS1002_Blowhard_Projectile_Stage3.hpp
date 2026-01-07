#ifndef UE4SS_SDK_BP_CBS1002_Blowhard_Projectile_Stage3_HPP
#define UE4SS_SDK_BP_CBS1002_Blowhard_Projectile_Stage3_HPP

class ABP_CBS1002_Blowhard_Projectile_Stage3_C : public APhasmidBasicProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)
    class UBoxComponent* Box_DamageRegion;                                            // 0x0640 (size: 0x8)
    class UParticleSystemComponent* PS_StormCloud;                                    // 0x0648 (size: 0x8)
    class UParticleSystemComponent* PS_LightningAttack;                               // 0x0650 (size: 0x8)
    float Timeline_0_NewTrack_1_5F05092E4664217AB806A68D2708A53B;                     // 0x0658 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5F05092E4664217AB806A68D2708A53B; // 0x065C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0660 (size: 0x8)
    bool isAttacking;                                                                 // 0x0668 (size: 0x1)
    bool isSafeToStep;                                                                // 0x0669 (size: 0x1)
    bool didLightningAttack?;                                                         // 0x066A (size: 0x1)
    class UParticleSystemComponent* NewVar_0;                                         // 0x0670 (size: 0x8)
    FVector ActualSpeed;                                                              // 0x0678 (size: 0xC)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveProjectileFired();
    void BndEvt__Box_DamageRegion_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CBS1002_Blowhard_Projectile_Stage3(int32 EntryPoint);
}; // Size: 0x684

#endif
