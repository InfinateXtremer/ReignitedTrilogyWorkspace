#ifndef UE4SS_SDK_BP_Gulp_EnergyProjectile_HPP
#define UE4SS_SDK_BP_Gulp_EnergyProjectile_HPP

class ABP_Gulp_EnergyProjectile_C : public APhasmidBasicProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0638 (size: 0x8)
    class UParticleSystemComponent* FloorSpot;                                        // 0x0640 (size: 0x8)
    float FloorZ;                                                                     // 0x0648 (size: 0x4)

    void TraceFloor(FVector StartLocation, float& Floor Z);
    void UserConstructionScript();
    void ReceiveProjectileFired();
    void ReceiveProjectileHit(class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Gulp_EnergyProjectile(int32 EntryPoint);
}; // Size: 0x64C

#endif
