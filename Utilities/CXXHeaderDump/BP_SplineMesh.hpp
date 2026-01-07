#ifndef UE4SS_SDK_BP_SplineMesh_HPP
#define UE4SS_SDK_BP_SplineMesh_HPP

class ABP_SplineMesh_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0328 (size: 0x8)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0330 (size: 0x1)
    class UMaterialInterface* SplineMat;                                              // 0x0338 (size: 0x8)
    TEnumAsByte<ESplinePointType::Type> SplineType;                                   // 0x0340 (size: 0x1)
    float RiverAngle;                                                                 // 0x0344 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x348

#endif
