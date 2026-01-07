#ifndef UE4SS_SDK_BP_IndustrialLight_Spot_HPP
#define UE4SS_SDK_BP_IndustrialLight_Spot_HPP

class ABP_IndustrialLight_Spot_C : public AActor
{
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0338 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0340 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0348 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x360

#endif
