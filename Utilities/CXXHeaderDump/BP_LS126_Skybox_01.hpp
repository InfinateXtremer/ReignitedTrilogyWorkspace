#ifndef UE4SS_SDK_BP_LS126_Skybox_01_HPP
#define UE4SS_SDK_BP_LS126_Skybox_01_HPP

class ABP_LS126_Skybox_01_C : public AActor
{
    class UStaticMeshComponent* SkySphere;                                            // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class UMaterial* SkyMaterial;                                                     // 0x0328 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x330

#endif
