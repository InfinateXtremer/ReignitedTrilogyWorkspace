#ifndef UE4SS_SDK_Sparx_Projectile_Child_Sweeper_HPP
#define UE4SS_SDK_Sparx_Projectile_Child_Sweeper_HPP

class ASparx_Projectile_Child_Sweeper_C : public ASparx_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UParticleSystem* DamageParticles;                                           // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_Sparx_Projectile_Child_Sweeper(int32 EntryPoint);
}; // Size: 0x368

#endif
