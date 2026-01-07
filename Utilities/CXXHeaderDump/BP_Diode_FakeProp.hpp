#ifndef UE4SS_SDK_BP_Diode_FakeProp_HPP
#define UE4SS_SDK_BP_Diode_FakeProp_HPP

class ABP_Diode_FakeProp_C : public AActor
{
    class UStaticMeshComponent* Diode;                                                // 0x0318 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0320 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x328

#endif
