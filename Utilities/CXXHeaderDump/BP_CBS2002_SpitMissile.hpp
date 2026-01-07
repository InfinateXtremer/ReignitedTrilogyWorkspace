#ifndef UE4SS_SDK_BP_CBS2002_SpitMissile_HPP
#define UE4SS_SDK_BP_CBS2002_SpitMissile_HPP

class ABP_CBS2002_SpitMissile_C : public ABP_SpitItemPlacement_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0740 (size: 0x8)
    bool Consumed;                                                                    // 0x0748 (size: 0x1)
    class APhasmidProjectileActor* Projectile;                                        // 0x0750 (size: 0x8)

    void UserConstructionScript();
    void ConsumeItem();
    void BindToSpitItemProjectile(class APhasmidProjectileActor* SpitItemProjectile);
    void ReceiveTick(float DeltaSeconds);
    void OnProjectileDestroyed(class APhasmidProjectileActor* Projectile, class AActor* OtherActor);
    void ProjectileOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_CBS2002_SpitMissile(int32 EntryPoint);
}; // Size: 0x758

#endif
