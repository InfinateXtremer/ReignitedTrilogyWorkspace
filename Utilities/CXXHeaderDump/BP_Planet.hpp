#ifndef UE4SS_SDK_BP_Planet_HPP
#define UE4SS_SDK_BP_Planet_HPP

class ABP_Planet_C : public AActor
{
    class UStaticMeshComponent* SM_LS127_Planet;                                      // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class UMaterialInstance* Material;                                                // 0x0328 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x330

#endif
