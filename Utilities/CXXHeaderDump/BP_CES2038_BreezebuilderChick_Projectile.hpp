#ifndef UE4SS_SDK_BP_CES2038_BreezebuilderChick_Projectile_HPP
#define UE4SS_SDK_BP_CES2038_BreezebuilderChick_Projectile_HPP

class ABP_CES2038_BreezebuilderChick_Projectile_C : public APhasmidBasicProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0640 (size: 0x8)
    float Timeline_0_Alpha_5F0E2A30496324E36E3E21AC0E6444A8;                          // 0x0648 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5F0E2A30496324E36E3E21AC0E6444A8; // 0x064C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0650 (size: 0x8)
    float ZHeight_Alpha_481402D94AB2DC9EB5B8FA913B7BB34F;                             // 0x0658 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ZHeight__Direction_481402D94AB2DC9EB5B8FA913B7BB34F; // 0x065C (size: 0x1)
    class UTimelineComponent* ZHeight;                                                // 0x0660 (size: 0x8)
    FVector ParentFiringPosition;                                                     // 0x0668 (size: 0xC)
    float DesiredHeight;                                                              // 0x0674 (size: 0x4)
    float StartingHeight;                                                             // 0x0678 (size: 0x4)

    void UserConstructionScript();
    void ZHeight__FinishedFunc();
    void ZHeight__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void SetHeight();
    void ReceiveProjectileFired();
    void ReceiveOnLifeSpanExpired();
    void ReceiveProjectileHit(class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    void ExecuteUbergraph_BP_CES2038_BreezebuilderChick_Projectile(int32 EntryPoint);
}; // Size: 0x67C

#endif
