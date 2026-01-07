#ifndef UE4SS_SDK_BP_DecalProjectile_HPP
#define UE4SS_SDK_BP_DecalProjectile_HPP

class ABP_DecalProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0328 (size: 0x8)
    class USphereComponent* Collider;                                                 // 0x0330 (size: 0x8)
    int32 LoopCount;                                                                  // 0x0338 (size: 0x4)
    float Fade Duration;                                                              // 0x033C (size: 0x4)

    void UserConstructionScript();
    void BndEvt__Collider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DecalProjectile(int32 EntryPoint);
}; // Size: 0x340

#endif
