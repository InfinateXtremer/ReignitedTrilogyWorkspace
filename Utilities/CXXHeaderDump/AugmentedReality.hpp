#ifndef UE4SS_SDK_AugmentedReality_HPP
#define UE4SS_SDK_AugmentedReality_HPP

#include "AugmentedReality_enums.hpp"

struct FARSessionStatus
{
    FString AdditionalInfo;                                                           // 0x0000 (size: 0x10)
    EARSessionStatus Status;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FARTraceResult
{
    float DistanceFromCamera;                                                         // 0x0000 (size: 0x4)
    EARLineTraceChannels TraceChannel;                                                // 0x0004 (size: 0x1)
    FTransform LocalToTrackingTransform;                                              // 0x0010 (size: 0x30)
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0040 (size: 0x8)

}; // Size: 0x60

class UARBasicLightEstimate : public UARLightEstimate
{
    float AmbientIntensityLumens;                                                     // 0x0028 (size: 0x4)
    float AmbientColorTemperatureKelvin;                                              // 0x002C (size: 0x4)

    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    FLinearColor GetAmbientColor();
}; // Size: 0x30

class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnpinComponent(class USceneComponent* ComponentToUnpin);
    void StopARSession();
    void StartARSession(class UARSessionConfig* SessionConfig);
    void SetAlignmentTransform(const FTransform& InAlignmentTransform);
    void RemovePin(class UARPin* PinToRemove);
    class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const FARTraceResult& TraceResult, const FName DebugName);
    class UARPin* PinComponent(class USceneComponent* ComponentToPin, const FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const FName DebugName);
    void PauseARSession();
    TArray<FARTraceResult> LineTraceTrackedObjects(const FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
    bool IsSessionTypeSupported(EARSessionType SessionType);
    EARTrackingQuality GetTrackingQuality();
    class UARSessionConfig* GetSessionConfig();
    class UARLightEstimate* GetCurrentLightEstimate();
    FARSessionStatus GetARSessionStatus();
    TArray<class UARPin*> GetAllPins();
    TArray<class UARTrackedGeometry*> GetAllGeometries();
    void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds);
    void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds);
}; // Size: 0x28

class UARFaceGeometry : public UARTrackedGeometry
{
    TMap<EARFaceBlendShape, float> BlendShapes;                                       // 0x00C8 (size: 0x50)

    float GetBlendShapeValue(EARFaceBlendShape BlendShape);
    TMap<EARFaceBlendShape, float> GetBlendShapes();
}; // Size: 0x150

class UARLightEstimate : public UObject
{
}; // Size: 0x28

class UARPin : public UObject
{
    class UARTrackedGeometry* TrackedGeometry;                                        // 0x0028 (size: 0x8)
    class USceneComponent* PinnedComponent;                                           // 0x0030 (size: 0x8)
    FTransform LocalToTrackingTransform;                                              // 0x0040 (size: 0x30)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x0070 (size: 0x30)
    EARTrackingState TrackingState;                                                   // 0x00A0 (size: 0x1)
    FARPinOnARTrackingStateChanged OnARTrackingStateChanged;                          // 0x00C0 (size: 0x10)
    FARPinOnARTransformUpdated OnARTransformUpdated;                                  // 0x00D0 (size: 0x10)

    EARTrackingState GetTrackingState();
    class UARTrackedGeometry* GetTrackedGeometry();
    class USceneComponent* GetPinnedComponent();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    FName GetDebugName();
    void DebugDraw(class UWorld* World, const FLinearColor& Color, float Scale, float PersistForSeconds);
}; // Size: 0xE0

class UARPlaneGeometry : public UARTrackedGeometry
{
    FVector Center;                                                                   // 0x00C8 (size: 0xC)
    FVector Extent;                                                                   // 0x00D4 (size: 0xC)
    TArray<FVector> BoundaryPolygon;                                                  // 0x00E0 (size: 0x10)
    class UARPlaneGeometry* SubsumedBy;                                               // 0x00F0 (size: 0x8)

    class UARPlaneGeometry* GetSubsumedBy();
    FVector GetExtent();
    FVector GetCenter();
    TArray<FVector> GetBoundaryPolygonInLocalSpace();
}; // Size: 0x100

class UARSessionConfig : public UDataAsset
{
    EARSessionType SessionType;                                                       // 0x0030 (size: 0x1)
    EARPlaneDetectionMode PlaneDetectionMode;                                         // 0x0031 (size: 0x1)
    EARLightEstimationMode LightEstimationMode;                                       // 0x0032 (size: 0x1)
    EARFrameSyncMode FrameSyncMode;                                                   // 0x0033 (size: 0x1)
    bool bEnableAutomaticCameraOverlay;                                               // 0x0034 (size: 0x1)
    bool bEnableAutomaticCameraTracking;                                              // 0x0035 (size: 0x1)

}; // Size: 0x38

class UARTraceResultDummy : public UObject
{
}; // Size: 0x28

class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{

    class UARTrackedGeometry* GetTrackedGeometry(const FARTraceResult& TraceResult);
    EARLineTraceChannels GetTraceChannel(const FARTraceResult& TraceResult);
    FTransform GetLocalToWorldTransform(const FARTraceResult& TraceResult);
    FTransform GetLocalToTrackingTransform(const FARTraceResult& TraceResult);
    float GetDistanceFromCamera(const FARTraceResult& TraceResult);
}; // Size: 0x28

class UARTrackedGeometry : public UObject
{
    FTransform LocalToTrackingTransform;                                              // 0x0030 (size: 0x30)
    FTransform LocalToAlignedTrackingTransform;                                       // 0x0060 (size: 0x30)
    EARTrackingState TrackingState;                                                   // 0x0090 (size: 0x1)

    EARTrackingState GetTrackingState();
    FTransform GetLocalToWorldTransform();
    FTransform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    FName GetDebugName();
}; // Size: 0xD0

class UARTrackedPoint : public UARTrackedGeometry
{
}; // Size: 0xD0

class UARTypesDummyClass : public UObject
{
}; // Size: 0x28

#endif
