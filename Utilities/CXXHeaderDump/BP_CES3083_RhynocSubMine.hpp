#ifndef UE4SS_SDK_BP_CES3083_RhynocSubMine_HPP
#define UE4SS_SDK_BP_CES3083_RhynocSubMine_HPP

class ABP_CES3083_RhynocSubMine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USP3_ProjectileMovementComponent* SP3_ProjectileMovement;                   // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Sphere1;                                              // 0x0328 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_CES3083_RhynocSubMine(int32 EntryPoint);
}; // Size: 0x338

#endif
