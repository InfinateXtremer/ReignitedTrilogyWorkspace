#ifndef UE4SS_SDK_TargetInFoV_HPP
#define UE4SS_SDK_TargetInFoV_HPP

class UTargetInFov_C : public UBlueprintFunctionLibrary
{

    void TargetInFov2D(class AActor* Myself, class AActor* Target, float Sight Radius 2D, float Peripheral Vision Half Angle Degrees, class UObject* __WorldContext, bool& Result);
    void TargetInFov(class AActor* Myself, class AActor* Target, float Sight Radius, float Peripheral Vision Half Angle Degrees, class UObject* __WorldContext, bool& Result);
}; // Size: 0x28

#endif
