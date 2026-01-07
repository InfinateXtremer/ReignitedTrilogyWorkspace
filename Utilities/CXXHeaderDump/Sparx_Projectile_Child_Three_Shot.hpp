#ifndef UE4SS_SDK_Sparx_Projectile_Child_Three_Shot_HPP
#define UE4SS_SDK_Sparx_Projectile_Child_Three_Shot_HPP

class ASparx_Projectile_Child_Three_Shot_C : public ASparx_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0360 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0368 (size: 0x8)
    class AActor* Enemy I should Ignore;                                              // 0x0370 (size: 0x8)
    float Trace Maximum Distance;                                                     // 0x0378 (size: 0x4)
    float Trace Closest Distance;                                                     // 0x037C (size: 0x4)
    class AActor* Nearest Missle Target;                                              // 0x0380 (size: 0x8)
    bool Break into 3;                                                                // 0x0388 (size: 0x1)
    class UParticleSystem* Explosion_Particles;                                       // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_Sparx_Projectile_Child_Three_Shot(int32 EntryPoint);
}; // Size: 0x398

#endif
