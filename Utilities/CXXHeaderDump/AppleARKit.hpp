#ifndef UE4SS_SDK_AppleARKit_HPP
#define UE4SS_SDK_AppleARKit_HPP

#include "AppleARKit_enums.hpp"

struct FAppleARKitCamera
{
    EARTrackingQuality TrackingQuality;                                               // 0x0000 (size: 0x1)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    FQuat Orientation;                                                                // 0x0040 (size: 0x10)
    FVector Translation;                                                              // 0x0050 (size: 0xC)
    FVector2D ImageResolution;                                                        // 0x005C (size: 0x8)
    FVector2D FocalLength;                                                            // 0x0064 (size: 0x8)
    FVector2D PrincipalPoint;                                                         // 0x006C (size: 0x8)

}; // Size: 0x80

struct FAppleARKitFrame
{
}; // Size: 0xB0

struct FAppleARKitHitTestResult
{
    EAppleARKitHitTestResultType Type;                                                // 0x0000 (size: 0x1)
    float Distance;                                                                   // 0x0004 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x30)
    class UAppleARKitAnchor* Anchor;                                                  // 0x0040 (size: 0x8)

}; // Size: 0x50

struct FAppleARKitLightEstimate
{
    bool bIsValid;                                                                    // 0x0000 (size: 0x1)
    float AmbientIntensity;                                                           // 0x0004 (size: 0x4)
    float AmbientColorTemperatureKelvin;                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

class UARKitCameraOverlayMaterialLoader : public UObject
{
    class UMaterialInterface* DefaultCameraOverlayMaterial;                           // 0x0028 (size: 0x8)

}; // Size: 0x30

class UAppleARKitAnchor : public UObject
{
    FGuid Identifier;                                                                 // 0x0028 (size: 0x10)

    FTransform GetTransform();
}; // Size: 0x90

class UAppleARKitBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const FVector2D ScreenPosition, EAppleARKitHitTestResultType Types, TArray<FAppleARKitHitTestResult>& OutResults);
    bool GetCurrentFrame(class UObject* WorldContextObject, FAppleARKitFrame& OutCurrentFrame);
}; // Size: 0x28

class UAppleARKitFaceMeshComponent : public UProceduralMeshComponent
{
    bool bWantsCollision;                                                             // 0x0700 (size: 0x1)
    bool bAutoBindToLocalFaceMesh;                                                    // 0x0701 (size: 0x1)
    EARFaceComponentTransformMixing TransformSetting;                                 // 0x0702 (size: 0x1)
    bool bFlipTrackedRotation;                                                        // 0x0703 (size: 0x1)
    class UMaterialInterface* FaceMaterial;                                           // 0x0708 (size: 0x8)
    FName LiveLinkSubjectName;                                                        // 0x0710 (size: 0x8)

    void UpdateMeshFromBlendShapes();
    void UpdateMesh(const TArray<FVector>& Vertices);
    void SetBlendShapes(const TMap<EARFaceBlendShape, float>& InBlendShapes);
    void SetBlendShapeAmount(EARFaceBlendShape BlendShape, float Amount);
    void SetAutoBind(bool bAutoBind);
    void PublishViaLiveLink(FName SubjectName);
    FTransform GetTransform();
    float GetLastUpdateTimestamp();
    int32 GetLastUpdateFrameNumber();
    float GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape);
    void CreateMesh(const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector2D>& UV0);
}; // Size: 0x7C0

class UAppleARKitPlaneAnchor : public UAppleARKitAnchor
{

    FTransform GetTransformToCenter();
    FVector GetExtent();
    FVector GetCenter();
}; // Size: 0xB0

class UAppleARKitSettings : public UObject
{
    bool bEnableLiveLinkForFaceTracking;                                              // 0x0028 (size: 0x1)
    int32 LiveLinkPublishingPort;                                                     // 0x002C (size: 0x4)
    FName DefaultFaceTrackingLiveLinkSubjectName;                                     // 0x0030 (size: 0x8)
    EARFaceTrackingDirection DefaultFaceTrackingDirection;                            // 0x0038 (size: 0x1)

}; // Size: 0x40

class UMaterialExpressionARKitPassthroughCamera : public UMaterialExpression
{
    FExpressionInput Coordinates;                                                     // 0x0060 (size: 0x30)
    uint32 ConstCoordinate;                                                           // 0x0090 (size: 0x4)
    TEnumAsByte<EARKitTextureType> TextureType;                                       // 0x0094 (size: 0x1)

}; // Size: 0x98

#endif
