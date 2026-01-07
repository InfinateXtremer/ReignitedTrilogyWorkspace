#ifndef UE4SS_SDK_Sparx_Projectile_Child_Homing_HPP
#define UE4SS_SDK_Sparx_Projectile_Child_Homing_HPP

class ASparx_Projectile_Child_Homing_C : public ASparx_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0360 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0368 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0370 (size: 0x8)
    class AActor* Nearest Homing Target;                                              // 0x0378 (size: 0x8)
    float Trace Maximum Distance;                                                     // 0x0380 (size: 0x4)
    class UParticleSystem* Explosion_Particles;                                       // 0x0388 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Find New Target();
    void ExecuteUbergraph_Sparx_Projectile_Child_Homing(int32 EntryPoint);
}; // Size: 0x390

#endif
