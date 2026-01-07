#ifndef UE4SS_SDK_OculusHMD_HPP
#define UE4SS_SDK_OculusHMD_HPP

#include "OculusHMD_enums.hpp"

struct FBoundaryTestResult
{
    bool IsTriggering;                                                                // 0x0000 (size: 0x1)
    ETrackedDeviceType DeviceType;                                                    // 0x0001 (size: 0x1)
    float ClosestDistance;                                                            // 0x0004 (size: 0x4)
    FVector ClosestPoint;                                                             // 0x0008 (size: 0xC)
    FVector ClosestPointNormal;                                                       // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FHmdUserProfile
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Gender;                                                                   // 0x0010 (size: 0x10)
    float PlayerHeight;                                                               // 0x0020 (size: 0x4)
    float EyeHeight;                                                                  // 0x0024 (size: 0x4)
    float IPD;                                                                        // 0x0028 (size: 0x4)
    FVector2D NeckToEyeDistance;                                                      // 0x002C (size: 0x8)
    TArray<FHmdUserProfileField> ExtraFields;                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FHmdUserProfileField
{
    FString FieldName;                                                                // 0x0000 (size: 0x10)
    FString FieldValue;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FOculusSplashDesc
{
    FSoftObjectPath TexturePath;                                                      // 0x0000 (size: 0x18)
    FTransform TransformInMeters;                                                     // 0x0020 (size: 0x30)
    FVector2D QuadSizeInMeters;                                                       // 0x0050 (size: 0x8)
    FQuat DeltaRotation;                                                              // 0x0060 (size: 0x10)
    FVector2D TextureOffset;                                                          // 0x0070 (size: 0x8)
    FVector2D TextureScale;                                                           // 0x0078 (size: 0x8)
    bool bNoAlphaChannel;                                                             // 0x0080 (size: 0x1)

}; // Size: 0xA0

class UDEPRECATED_DeprecatedGearVRControllerComponent : public USceneComponent
{
    class UStaticMesh* ControllerMesh;                                                // 0x02A0 (size: 0x8)

    class UMotionControllerComponent* GetMotionController();
    class UStaticMeshComponent* GetControllerMesh();
}; // Size: 0x2C0

class UOculusBoundaryComponent : public UActorComponent
{
    FOculusBoundaryComponentOnOuterBoundaryTriggered OnOuterBoundaryTriggered;        // 0x00F0 (size: 0x10)
    FOculusBoundaryComponentOnOuterBoundaryReturned OnOuterBoundaryReturned;          // 0x0100 (size: 0x10)

    bool SetOuterBoundaryColor(const FColor InBoundaryColor);
    bool ResetOuterBoundaryColor();
    bool RequestOuterBoundaryVisible(bool BoundaryVisible);
    void OculusOuterBoundaryTriggeredEvent__DelegateSignature(const TArray<FBoundaryTestResult>& OuterBoundsInteractionList);
    void OculusOuterBoundaryReturnedEvent__DelegateSignature();
    bool IsOuterBoundaryTriggered();
    bool IsOuterBoundaryDisplayed();
    FBoundaryTestResult GetTriggeredPlayAreaInfo(ETrackedDeviceType DeviceType);
    TArray<FBoundaryTestResult> GetTriggeredOuterBoundaryInfo();
    TArray<FVector> GetPlayAreaPoints();
    FVector GetPlayAreaDimensions();
    TArray<FVector> GetOuterBoundaryPoints();
    FVector GetOuterBoundaryDimensions();
    FBoundaryTestResult CheckIfPointWithinPlayArea(const FVector Point);
    FBoundaryTestResult CheckIfPointWithinOuterBounds(const FVector Point);
}; // Size: 0x128

class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShowLoadingSplashScreen();
    void ShowLoadingIcon(class UTexture2D* Texture);
    void SetTiledMultiresLevel(ETiledMultiResLevel Level);
    void SetPositionScale3D(FVector PosScale3D);
    void SetLoadingSplashParams(FString TexturePath, FVector DistanceInMeters, FVector2D SizeInMeters, FVector RotationAxis, float RotationDeltaInDeg);
    void SetDisplayFrequency(float RequestedFrequency);
    void SetCPUAndGPULevels(int32 CPULevel, int32 GPULevel);
    void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector::Type> Options);
    void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector::Type> Options);
    bool IsPowerLevelStateThrottled();
    bool IsPowerLevelStateMinimum();
    bool IsLoadingIconEnabled();
    bool IsDeviceTracked(ETrackedDeviceType DeviceType);
    bool IsControllerActive();
    bool IsAutoLoadingSplashScreenEnabled();
    void HideLoadingSplashScreen(bool bClear);
    void HideLoadingIcon();
    bool HasSystemOverlayPresent();
    bool HasInputFocus();
    bool GetUserProfile(FHmdUserProfile& Profile);
    ETiledMultiResLevel GetTiledMultiresLevel();
    float GetTemperatureInCelsius();
    void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType);
    void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale);
    void GetLoadingSplashParams(FString& TexturePath, FVector& DistanceInMeters, FVector2D& SizeInMeters, FVector& RotationAxis, float& RotationDeltaInDeg);
    void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);
    EGearVRControllerHandedness_DEPRECATED GetGearVRControllerHandedness();
    FString GetDeviceName();
    float GetCurrentDisplayFrequency();
    float GetBatteryLevel();
    void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);
    void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);
    TArray<float> GetAvailableDisplayFrequencies();
    void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
    void EnableArmModel(bool bArmModelEnable);
    void ClearLoadingSplashScreens();
    bool AreHeadPhonesPluggedIn();
    void AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd);
}; // Size: 0x28

class UOculusHMDRuntimeSettings : public UObject
{
    bool bAutoEnabled;                                                                // 0x0028 (size: 0x1)
    TArray<FOculusSplashDesc> SplashDescs;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

class UOculusSceneCaptureCubemap : public UObject
{
    TArray<class USceneCaptureComponent2D*> CaptureComponents;                        // 0x0038 (size: 0x10)

}; // Size: 0x90

#endif
