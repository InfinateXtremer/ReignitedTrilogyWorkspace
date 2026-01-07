#ifndef UE4SS_SDK_BP_CNS3706_HunterArrowProj_HPP
#define UE4SS_SDK_BP_CNS3706_HunterArrowProj_HPP

class ABP_CNS3706_HunterArrowProj_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* trail;                                            // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0328 (size: 0x8)
    class USP3_ProjectileMovementComponent* SP3_ProjectileMovement;                   // 0x0330 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_CNS3706_HunterArrowProj(int32 EntryPoint);
}; // Size: 0x340

#endif
