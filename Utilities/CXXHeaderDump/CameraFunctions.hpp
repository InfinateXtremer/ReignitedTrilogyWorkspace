#ifndef UE4SS_SDK_CameraFunctions_HPP
#define UE4SS_SDK_CameraFunctions_HPP

class UCameraFunctions_C : public UBlueprintFunctionLibrary
{

    void SetMotionBlur(bool Enabled, class UObject* __WorldContext);
    void GetCrossProduct(FVector PlayerForward, FVector CameraForward, class UObject* __WorldContext, bool& crossed);
    void RotateCamera_new(class AActor* Player, class AActor* Camera, float Dot Product, float StartDistFromChar, float TargetDistFromChar, float FinalAngle, float Orig Z, float Final Z, bool crossed, float Alpha, bool SetCameraRotation?, class UObject* __WorldContext);
    void Get Horizontal Angle(class AActor* Player, class AActor* Camera, class UObject* __WorldContext, float& angle);
    void RotateCamera(class AActor* Player, class AActor* Camera, float Dot Product, float StartDistFromChar, float TargetDistFromChar, float FinalAngle, float Orig Z, float Final Z, float Alpha, class UObject* __WorldContext);
}; // Size: 0x28

#endif
