#ifndef UE4SS_SDK_BP_LS213_WallTrim_Spline_HPP
#define UE4SS_SDK_BP_LS213_WallTrim_Spline_HPP

class ABP_LS213_WallTrim_Spline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* spline_mesh;                                               // 0x0320 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0328 (size: 0x8)
    class UStaticMesh* Static Mesh;                                                   // 0x0330 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ExecuteUbergraph_BP_LS213_WallTrim_Spline(int32 EntryPoint);
}; // Size: 0x340

#endif
