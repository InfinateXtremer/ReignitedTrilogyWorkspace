#ifndef UE4SS_SDK_Sparx_Projectile_Child_Sea_Mine_HPP
#define UE4SS_SDK_Sparx_Projectile_Child_Sea_Mine_HPP

class ASparx_Projectile_Child_Sea_Mine_C : public ASparx_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UCapsuleComponent* Explosion Radius;                                        // 0x0360 (size: 0x8)
    bool Toggle Wobble;                                                               // 0x0368 (size: 0x1)
    class UParticleSystem* ExplosionParticles;                                        // 0x0370 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sparx_Projectile_Child_Sea_Mine(int32 EntryPoint);
}; // Size: 0x378

#endif
