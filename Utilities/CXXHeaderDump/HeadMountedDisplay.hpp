#ifndef UE4SS_SDK_HeadMountedDisplay_HPP
#define UE4SS_SDK_HeadMountedDisplay_HPP

#include "HeadMountedDisplay_enums.hpp"

struct FXRDeviceId
{
    FName SystemName;                                                                 // 0x0000 (size: 0x8)
    int32 DeviceID;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0x10

class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
    void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin::Type> Origin);
    void SetSpectatorScreenTexture(class UTexture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
    void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector::Type> Options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool HasValidTrackingPosition();
    float GetWorldToMetersScale(class UObject* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
    void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32 Index);
    TEnumAsByte<EHMDTrackingOrigin::Type> GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    float GetPixelDensity();
    void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);
    int32 GetNumOfTrackingSensors();
    TEnumAsByte<EHMDWornState::Type> GetHMDWornState();
    FName GetHMDDeviceName();
    void GetDeviceWorldPose(class UObject* WorldContext, const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    void GetDevicePose(const FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& Position);
    TArray<FXRDeviceId> EnumerateTrackedDevices(const FName SystemId, EXRTrackedDeviceType DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    class UPrimitiveComponent* AddDeviceVisualizationComponent(class AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
}; // Size: 0x28

class UMotionControllerComponent : public UPrimitiveComponent
{
    int32 PlayerIndex;                                                                // 0x0670 (size: 0x4)
    EControllerHand Hand;                                                             // 0x0674 (size: 0x1)
    FName MotionSource;                                                               // 0x0678 (size: 0x8)
    uint8 bDisableLowLatencyUpdate;                                                   // 0x0680 (size: 0x1)
    ETrackingStatus CurrentTrackingStatus;                                            // 0x0684 (size: 0x1)
    bool bDisplayDeviceModel;                                                         // 0x0685 (size: 0x1)
    FName DisplayModelSource;                                                         // 0x0688 (size: 0x8)
    class UStaticMesh* CustomDisplayMesh;                                             // 0x0690 (size: 0x8)
    TArray<class UMaterialInterface*> DisplayMeshMaterialOverrides;                   // 0x0698 (size: 0x10)
    class UPrimitiveComponent* DisplayComponent;                                      // 0x0710 (size: 0x8)

    void SetTrackingSource(const EControllerHand NewSource);
    void SetTrackingMotionSource(const FName NewSource);
    void SetShowDeviceModel(const bool bShowControllerModel);
    void SetDisplayModelSource(const FName NewDisplayModelSource);
    void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
    void SetAssociatedPlayerIndex(const int32 NewPlayer);
    void OnMotionControllerUpdated();
    bool IsTracked();
    EControllerHand GetTrackingSource();
    float GetParameterValue(FName InName, bool& bValueFound);
}; // Size: 0x730

class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
    bool IsMotionTrackingEnabledForSource(int32 PlayerIndex, FName SourceName);
    bool IsMotionTrackingEnabledForDevice(int32 PlayerIndex, EControllerHand Hand);
    bool IsMotionTrackingEnabledForComponent(const class UMotionControllerComponent* MotionControllerComponent);
    bool IsMotionTrackedDeviceCountManagementNecessary();
    int32 GetMotionTrackingEnabledControllerCount();
    int32 GetMaximumMotionTrackedControllerCount();
    TArray<FName> EnumerateMotionSources();
    bool EnableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    bool EnableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
    bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
    void DisableMotionTrackingOfSource(int32 PlayerIndex, FName SourceName);
    void DisableMotionTrackingOfDevice(int32 PlayerIndex, EControllerHand Hand);
    void DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex);
    void DisableMotionTrackingOfAllControllers();
    void DisableMotionTrackingForComponent(const class UMotionControllerComponent* MotionControllerComponent);
}; // Size: 0x28

class UVRNotificationsComponent : public UActorComponent
{
    FVRNotificationsComponentHMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0x00F0 (size: 0x10)
    FVRNotificationsComponentHMDTrackingInitializedDelegate HMDTrackingInitializedDelegate; // 0x0100 (size: 0x10)
    FVRNotificationsComponentHMDRecenteredDelegate HMDRecenteredDelegate;             // 0x0110 (size: 0x10)
    FVRNotificationsComponentHMDLostDelegate HMDLostDelegate;                         // 0x0120 (size: 0x10)
    FVRNotificationsComponentHMDReconnectedDelegate HMDReconnectedDelegate;           // 0x0130 (size: 0x10)
    FVRNotificationsComponentHMDConnectCanceledDelegate HMDConnectCanceledDelegate;   // 0x0140 (size: 0x10)
    FVRNotificationsComponentHMDPutOnHeadDelegate HMDPutOnHeadDelegate;               // 0x0150 (size: 0x10)
    FVRNotificationsComponentHMDRemovedFromHeadDelegate HMDRemovedFromHeadDelegate;   // 0x0160 (size: 0x10)
    FVRNotificationsComponentVRControllerRecenteredDelegate VRControllerRecenteredDelegate; // 0x0170 (size: 0x10)

}; // Size: 0x180

#endif
