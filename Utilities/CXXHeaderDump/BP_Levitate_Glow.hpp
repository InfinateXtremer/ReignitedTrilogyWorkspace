#ifndef UE4SS_SDK_BP_Levitate_Glow_HPP
#define UE4SS_SDK_BP_Levitate_Glow_HPP

class ABP_Levitate_Glow_C : public AActor
{
    class UPointLightComponent* PointLight;                                           // 0x0318 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0320 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x328

#endif
