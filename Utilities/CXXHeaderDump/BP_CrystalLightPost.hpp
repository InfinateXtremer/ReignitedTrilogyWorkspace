#ifndef UE4SS_SDK_BP_CrystalLightPost_HPP
#define UE4SS_SDK_BP_CrystalLightPost_HPP

class ABP_CrystalLightPost_C : public AActor
{
    class UPointLightComponent* Crystal_PointLight;                                   // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_LS116_CrystalLightpost;                            // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Light_Intensity;                                                            // 0x0330 (size: 0x4)
    float Light_Attenuation;                                                          // 0x0334 (size: 0x4)
    FLinearColor Light_Color;                                                         // 0x0338 (size: 0x10)

    void UserConstructionScript();
}; // Size: 0x348

#endif
