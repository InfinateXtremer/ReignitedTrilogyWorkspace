#ifndef UE4SS_SDK_BP_LS101_Torch_HPP
#define UE4SS_SDK_BP_LS101_Torch_HPP

class ABP_LS101_Torch_C : public AActor
{
    class UParticleSystemComponent* Torch fire;                                       // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_Torch;                                             // 0x0320 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0328 (size: 0x8)
    float LightIntensity;                                                             // 0x0330 (size: 0x4)
    float LightRadius;                                                                // 0x0334 (size: 0x4)
    float LightIndirectIntensity;                                                     // 0x0338 (size: 0x4)
    bool isLit;                                                                       // 0x033C (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x33D

#endif
