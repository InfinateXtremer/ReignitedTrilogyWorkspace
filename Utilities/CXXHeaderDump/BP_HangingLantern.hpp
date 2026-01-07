#ifndef UE4SS_SDK_BP_HangingLantern_HPP
#define UE4SS_SDK_BP_HangingLantern_HPP

class ABP_HangingLantern_C : public AActor
{
    class UPointLightComponent* Dynamic_PointLight;                                   // 0x0318 (size: 0x8)
    class USpotLightComponent* SpotLight1_floor;                                      // 0x0320 (size: 0x8)
    class USpotLightComponent* SpotLight_wallSplash;                                  // 0x0328 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_LS203_HangingLantern_Cavern;                       // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)
    bool useStatic;                                                                   // 0x0348 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x349

#endif
