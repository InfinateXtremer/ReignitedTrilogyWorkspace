#ifndef UE4SS_SDK_Trolly_Bullet_HPP
#define UE4SS_SDK_Trolly_Bullet_HPP

class ATrolly_Bullet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0328 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0330 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0338 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    bool Active;                                                                      // 0x0350 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_Trolly_Bullet(int32 EntryPoint);
}; // Size: 0x351

#endif
