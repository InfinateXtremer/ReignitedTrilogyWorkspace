#ifndef UE4SS_SDK_SplineActor_HPP
#define UE4SS_SDK_SplineActor_HPP

class ASplineActor_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0318 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0320 (size: 0x8)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0328 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x329

#endif
