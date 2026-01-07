#ifndef UE4SS_SDK_BP_LS213_Walltrim_Spline_Child_HPP
#define UE4SS_SDK_BP_LS213_Walltrim_Spline_Child_HPP

class ABP_LS213_Walltrim_Spline_Child_C : public AActor
{
    class USceneComponent* spline_mesh;                                               // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class UStaticMesh* Static Mesh;                                                   // 0x0328 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0330 (size: 0x8)
    class UStaticMesh* Cap Mesh;                                                      // 0x0338 (size: 0x8)
    bool Has Cap Mesh;                                                                // 0x0340 (size: 0x1)
    int32 Segment Count;                                                              // 0x0344 (size: 0x4)
    bool Is Loop;                                                                     // 0x0348 (size: 0x1)
    bool Use Vertex Normal for Hemisphere Gather;                                     // 0x0349 (size: 0x1)
    class UStaticMeshComponent* Spline Mesh Comp;                                     // 0x0350 (size: 0x8)
    class USplineMeshComponent* Spline Mesh Reference;                                // 0x0358 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x360

#endif
