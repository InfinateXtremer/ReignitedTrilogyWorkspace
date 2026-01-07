#ifndef UE4SS_SDK_BP_Minimap_HPP
#define UE4SS_SDK_BP_Minimap_HPP

class ABP_Minimap_C : public AActor
{
    class UBoxComponent* MinimapVolume;                                               // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    int32 Size;                                                                       // 0x0328 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x32C

#endif
