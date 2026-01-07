#ifndef UE4SS_SDK_BP_LS201_WallConnect_Spline_HPP
#define UE4SS_SDK_BP_LS201_WallConnect_Spline_HPP

class ABP_LS201_WallConnect_Spline_C : public AActor
{
    class USceneComponent* spline_mesh;                                               // 0x0318 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0320 (size: 0x8)
    class UStaticMesh* Static Mesh;                                                   // 0x0328 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0330 (size: 0x8)
    int32 Material Slot;                                                              // 0x0338 (size: 0x4)
    class UStaticMesh* Cap Mesh;                                                      // 0x0340 (size: 0x8)
    bool Has Cap Mesh;                                                                // 0x0348 (size: 0x1)
    int32 Segment Count;                                                              // 0x034C (size: 0x4)
    bool Is Loop;                                                                     // 0x0350 (size: 0x1)
    bool Use Vertex Normal for Hemisphere Gather;                                     // 0x0351 (size: 0x1)
    class UStaticMeshComponent* Spline Mesh Comp;                                     // 0x0358 (size: 0x8)
    class USplineMeshComponent* Spline Mesh Reference;                                // 0x0360 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x368

#endif
