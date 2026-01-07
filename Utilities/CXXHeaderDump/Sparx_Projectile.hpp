#ifndef UE4SS_SDK_Sparx_Projectile_HPP
#define UE4SS_SDK_Sparx_Projectile_HPP

class ASparx_Projectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0320 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0328 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)
    float Bullet Speed;                                                               // 0x0348 (size: 0x4)
    float Bullet Damage;                                                              // 0x034C (size: 0x4)
    float LifeSpan;                                                                   // 0x0350 (size: 0x4)

    void Bullet Remove();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sparx_Projectile(int32 EntryPoint);
}; // Size: 0x354

#endif
