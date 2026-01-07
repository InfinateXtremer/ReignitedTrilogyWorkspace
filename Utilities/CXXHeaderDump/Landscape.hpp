#ifndef UE4SS_SDK_Landscape_HPP
#define UE4SS_SDK_Landscape_HPP

#include "Landscape_enums.hpp"

struct FForeignControlPointData
{
}; // Size: 0x1

struct FForeignSplineSegmentData
{
}; // Size: 0x1

struct FForeignWorldSplineData
{
}; // Size: 0x1

struct FGizmoSelectData
{
}; // Size: 0x50

struct FGrassInput
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    class ULandscapeGrassType* GrassType;                                             // 0x0008 (size: 0x8)
    FExpressionInput Input;                                                           // 0x0010 (size: 0x30)

}; // Size: 0x40

struct FGrassVariety
{
    class UStaticMesh* GrassMesh;                                                     // 0x0000 (size: 0x8)
    float GrassDensity;                                                               // 0x0008 (size: 0x4)
    bool bUseGrid;                                                                    // 0x000C (size: 0x1)
    float PlacementJitter;                                                            // 0x0010 (size: 0x4)
    int32 StartCullDistance;                                                          // 0x0014 (size: 0x4)
    int32 EndCullDistance;                                                            // 0x0018 (size: 0x4)
    int32 MinLOD;                                                                     // 0x001C (size: 0x4)
    EGrassScaling Scaling;                                                            // 0x0020 (size: 0x1)
    FFloatInterval ScaleX;                                                            // 0x0024 (size: 0x8)
    FFloatInterval ScaleY;                                                            // 0x002C (size: 0x8)
    FFloatInterval ScaleZ;                                                            // 0x0034 (size: 0x8)
    bool RandomRotation;                                                              // 0x003C (size: 0x1)
    bool AlignToSurface;                                                              // 0x003D (size: 0x1)
    bool bUseLandscapeLightmap;                                                       // 0x003E (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x003F (size: 0x1)
    bool bReceivesDecals;                                                             // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FLandscapeEditToolRenderData
{
    class UMaterialInterface* ToolMaterial;                                           // 0x0000 (size: 0x8)
    class UMaterialInterface* GizmoMaterial;                                          // 0x0008 (size: 0x8)
    int32 SelectedType;                                                               // 0x0010 (size: 0x4)
    int32 DebugChannelR;                                                              // 0x0014 (size: 0x4)
    int32 DebugChannelG;                                                              // 0x0018 (size: 0x4)
    int32 DebugChannelB;                                                              // 0x001C (size: 0x4)
    class UTexture2D* DataTexture;                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FLandscapeEditorLayerSettings
{
}; // Size: 0x1

struct FLandscapeImportLayerInfo
{
}; // Size: 0x1

struct FLandscapeInfoLayerSettings
{
    class ULandscapeLayerInfoObject* LayerInfoObj;                                    // 0x0000 (size: 0x8)
    FName LayerName;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FLandscapeLayerStruct
{
    class ULandscapeLayerInfoObject* LayerInfoObj;                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLandscapeSplineConnection
{
    class ULandscapeSplineSegment* Segment;                                           // 0x0000 (size: 0x8)
    uint8 End;                                                                        // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FLandscapeSplineInterpPoint
{
    FVector Center;                                                                   // 0x0000 (size: 0xC)
    FVector Left;                                                                     // 0x000C (size: 0xC)
    FVector Right;                                                                    // 0x0018 (size: 0xC)
    FVector FalloffLeft;                                                              // 0x0024 (size: 0xC)
    FVector FalloffRight;                                                             // 0x0030 (size: 0xC)
    float StartEndFalloff;                                                            // 0x003C (size: 0x4)

}; // Size: 0x40

struct FLandscapeSplineMeshEntry
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> MaterialOverrides;                              // 0x0008 (size: 0x10)
    uint8 bCenterH;                                                                   // 0x0018 (size: 0x1)
    FVector2D CenterAdjust;                                                           // 0x001C (size: 0x8)
    uint8 bScaleToWidth;                                                              // 0x0024 (size: 0x1)
    FVector Scale;                                                                    // 0x0028 (size: 0xC)
    TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;                          // 0x0034 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0035 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> UpAxis;                                        // 0x0036 (size: 0x1)

}; // Size: 0x38

struct FLandscapeSplineSegmentConnection
{
    class ULandscapeSplineControlPoint* ControlPoint;                                 // 0x0000 (size: 0x8)
    float TangentLen;                                                                 // 0x0008 (size: 0x4)
    FName SocketName;                                                                 // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FLandscapeWeightmapUsage
{
    class ULandscapeComponent* ChannelUsage;                                          // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FLayerBlendInput
{
    FName LayerName;                                                                  // 0x0000 (size: 0x8)
    TEnumAsByte<ELandscapeLayerBlendType> BlendType;                                  // 0x0008 (size: 0x1)
    FExpressionInput LayerInput;                                                      // 0x0010 (size: 0x30)
    FExpressionInput HeightInput;                                                     // 0x0040 (size: 0x30)
    float PreviewWeight;                                                              // 0x0070 (size: 0x4)
    FVector ConstLayerInput;                                                          // 0x0074 (size: 0xC)
    float ConstHeightInput;                                                           // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FWeightmapLayerAllocationInfo
{
    class ULandscapeLayerInfoObject* LayerInfo;                                       // 0x0000 (size: 0x8)
    uint8 WeightmapTextureIndex;                                                      // 0x0008 (size: 0x1)
    uint8 WeightmapTextureChannel;                                                    // 0x0009 (size: 0x1)

}; // Size: 0x10

class ALandscape : public ALandscapeProxy
{
}; // Size: 0x720

class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
}; // Size: 0x368

class ALandscapeGizmoActor : public AActor
{
}; // Size: 0x318

class ALandscapeMeshProxyActor : public AActor
{
    class ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;                  // 0x0318 (size: 0x8)

}; // Size: 0x320

class ALandscapeProxy : public AActor
{
    class ULandscapeSplinesComponent* SplineComponent;                                // 0x0318 (size: 0x8)
    FGuid LandscapeGuid;                                                              // 0x0320 (size: 0x10)
    FIntPoint LandscapeSectionOffset;                                                 // 0x0330 (size: 0x8)
    int32 MaxLODLevel;                                                                // 0x0338 (size: 0x4)
    float LODDistanceFactor;                                                          // 0x033C (size: 0x4)
    TEnumAsByte<ELandscapeLODFalloff::Type> LODFalloff;                               // 0x0340 (size: 0x1)
    float ComponentScreenSizeToUseSubSections;                                        // 0x0344 (size: 0x4)
    float LOD0DistributionSetting;                                                    // 0x0348 (size: 0x4)
    float LODDistributionSetting;                                                     // 0x034C (size: 0x4)
    float TessellationComponentScreenSize;                                            // 0x0350 (size: 0x4)
    bool UseTessellationComponentScreenSizeFalloff;                                   // 0x0354 (size: 0x1)
    float TessellationComponentScreenSizeFalloff;                                     // 0x0358 (size: 0x4)
    int32 StaticLightingLOD;                                                          // 0x035C (size: 0x4)
    class UPhysicalMaterial* DefaultPhysMaterial;                                     // 0x0360 (size: 0x8)
    float StreamingDistanceMultiplier;                                                // 0x0368 (size: 0x4)
    class UMaterialInterface* LandscapeMaterial;                                      // 0x0370 (size: 0x8)
    class UMaterialInterface* LandscapeHoleMaterial;                                  // 0x0378 (size: 0x8)
    float NegativeZBoundsExtension;                                                   // 0x0380 (size: 0x4)
    float PositiveZBoundsExtension;                                                   // 0x0384 (size: 0x4)
    TArray<class ULandscapeComponent*> LandscapeComponents;                           // 0x0388 (size: 0x10)
    TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;       // 0x0398 (size: 0x10)
    TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;       // 0x03A8 (size: 0x10)
    bool bHasLandscapeGrass;                                                          // 0x041C (size: 0x1)
    float StaticLightingResolution;                                                   // 0x0420 (size: 0x4)
    uint8 bCastStaticShadow;                                                          // 0x0424 (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x0424 (size: 0x1)
    uint8 bCastFarShadow;                                                             // 0x0424 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x0428 (size: 0x1)
    uint8 bUseMaterialPositionOffsetInStaticLighting;                                 // 0x042C (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x042C (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x0430 (size: 0x4)
    FLightmassPrimitiveSettings LightmassSettings;                                    // 0x0434 (size: 0x18)
    int32 CollisionMipLevel;                                                          // 0x044C (size: 0x4)
    int32 SimpleCollisionMipLevel;                                                    // 0x0450 (size: 0x4)
    float CollisionThickness;                                                         // 0x0454 (size: 0x4)
    FBodyInstance BodyInstance;                                                       // 0x0460 (size: 0x200)
    uint8 bGenerateOverlapEvents;                                                     // 0x0660 (size: 0x1)
    uint8 bBakeMaterialPositionOffsetIntoCollision;                                   // 0x0660 (size: 0x1)
    int32 ComponentSizeQuads;                                                         // 0x0664 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x0668 (size: 0x4)
    int32 NumSubsections;                                                             // 0x066C (size: 0x4)
    uint8 bUsedForNavigation;                                                         // 0x0670 (size: 0x1)
    bool bUseDynamicMaterialInstance;                                                 // 0x0674 (size: 0x1)
    ENavDataGatheringMode NavigationGeometryGatheringMode;                            // 0x0675 (size: 0x1)
    bool bUseLandscapeForCullingInvisibleHLODVertices;                                // 0x0676 (size: 0x1)

    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
}; // Size: 0x720

class ALandscapeStreamingProxy : public ALandscapeProxy
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;                                  // 0x0718 (size: 0x1C)

}; // Size: 0x740

class UControlPointMeshComponent : public UStaticMeshComponent
{
}; // Size: 0x700

class ULandscapeComponent : public UPrimitiveComponent
{
    int32 SectionBaseX;                                                               // 0x0670 (size: 0x4)
    int32 SectionBaseY;                                                               // 0x0674 (size: 0x4)
    int32 ComponentSizeQuads;                                                         // 0x0678 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x067C (size: 0x4)
    int32 NumSubsections;                                                             // 0x0680 (size: 0x4)
    class UMaterialInterface* OverrideMaterial;                                       // 0x0688 (size: 0x8)
    class UMaterialInterface* OverrideHoleMaterial;                                   // 0x0690 (size: 0x8)
    TArray<class UMaterialInstanceConstant*> MaterialInstances;                       // 0x0698 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> MaterialInstancesDynamic;                 // 0x06A8 (size: 0x10)
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;                  // 0x06B8 (size: 0x10)
    TArray<class UTexture2D*> WeightmapTextures;                                      // 0x06C8 (size: 0x10)
    class UTexture2D* XYOffsetmapTexture;                                             // 0x06D8 (size: 0x8)
    FVector4 WeightmapScaleBias;                                                      // 0x06E0 (size: 0x10)
    float WeightmapSubsectionOffset;                                                  // 0x06F0 (size: 0x4)
    FVector4 HeightmapScaleBias;                                                      // 0x0700 (size: 0x10)
    class UTexture2D* HeightmapTexture;                                               // 0x0710 (size: 0x8)
    FBox CachedLocalBox;                                                              // 0x0718 (size: 0x1C)
    TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x0734 (size: 0x1C)
    FGuid MapBuildDataId;                                                             // 0x0750 (size: 0x10)
    TArray<FGuid> IrrelevantLights;                                                   // 0x0760 (size: 0x10)
    int32 CollisionMipLevel;                                                          // 0x0770 (size: 0x4)
    int32 SimpleCollisionMipLevel;                                                    // 0x0774 (size: 0x4)
    float NegativeZBoundsExtension;                                                   // 0x0778 (size: 0x4)
    float PositiveZBoundsExtension;                                                   // 0x077C (size: 0x4)
    float StaticLightingResolution;                                                   // 0x0780 (size: 0x4)
    int32 ForcedLOD;                                                                  // 0x0784 (size: 0x4)
    int32 LODBias;                                                                    // 0x0788 (size: 0x4)
    FGuid StateId;                                                                    // 0x078C (size: 0x10)
    FGuid BakedTextureMaterialGuid;                                                   // 0x079C (size: 0x10)
    class UTexture2D* GIBakedBaseColorTexture;                                        // 0x07B0 (size: 0x8)
    uint8 MobileBlendableLayerMask;                                                   // 0x07B8 (size: 0x1)
    class UMaterialInterface* MobileMaterialInterface;                                // 0x07C0 (size: 0x8)
    class UTexture2D* MobileWeightNormalmapTexture;                                   // 0x07C8 (size: 0x8)

    class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex);
}; // Size: 0x800

class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
}; // Size: 0x670

class ULandscapeGrassType : public UObject
{
    TArray<FGrassVariety> GrassVarieties;                                             // 0x0028 (size: 0x10)
    class UStaticMesh* GrassMesh;                                                     // 0x0038 (size: 0x8)
    float GrassDensity;                                                               // 0x0040 (size: 0x4)
    float PlacementJitter;                                                            // 0x0044 (size: 0x4)
    int32 StartCullDistance;                                                          // 0x0048 (size: 0x4)
    int32 EndCullDistance;                                                            // 0x004C (size: 0x4)
    bool RandomRotation;                                                              // 0x0050 (size: 0x1)
    bool AlignToSurface;                                                              // 0x0051 (size: 0x1)

}; // Size: 0x58

class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeLayerInfoObject*> ComponentLayerInfos;                     // 0x0670 (size: 0x10)
    int32 SectionBaseX;                                                               // 0x0680 (size: 0x4)
    int32 SectionBaseY;                                                               // 0x0684 (size: 0x4)
    int32 CollisionSizeQuads;                                                         // 0x0688 (size: 0x4)
    float CollisionScale;                                                             // 0x068C (size: 0x4)
    int32 SimpleCollisionSizeQuads;                                                   // 0x0690 (size: 0x4)
    TArray<uint8> CollisionQuadFlags;                                                 // 0x0698 (size: 0x10)
    FGuid HeightfieldGuid;                                                            // 0x06A8 (size: 0x10)
    FBox CachedLocalBox;                                                              // 0x06B8 (size: 0x1C)
    TLazyObjectPtr<class ULandscapeComponent> RenderComponent;                        // 0x06D4 (size: 0x1C)
    TArray<class UPhysicalMaterial*> CookedPhysicalMaterials;                         // 0x0700 (size: 0x10)

}; // Size: 0x750

class ULandscapeInfo : public UObject
{
    TLazyObjectPtr<class ALandscape> LandscapeActor;                                  // 0x0028 (size: 0x1C)
    FGuid LandscapeGuid;                                                              // 0x0044 (size: 0x10)
    int32 ComponentSizeQuads;                                                         // 0x0054 (size: 0x4)
    int32 SubsectionSizeQuads;                                                        // 0x0058 (size: 0x4)
    int32 ComponentNumSubsections;                                                    // 0x005C (size: 0x4)
    FVector DrawScale;                                                                // 0x0060 (size: 0xC)
    TSet<ALandscapeStreamingProxy*> Proxies;                                          // 0x00C0 (size: 0x50)

}; // Size: 0x200

class ULandscapeInfoMap : public UObject
{
}; // Size: 0x80

class ULandscapeLayerInfoObject : public UObject
{
    FName LayerName;                                                                  // 0x0028 (size: 0x8)
    class UPhysicalMaterial* PhysMaterial;                                            // 0x0030 (size: 0x8)
    float Hardness;                                                                   // 0x0038 (size: 0x4)
    FLinearColor LayerUsageDebugColor;                                                // 0x003C (size: 0x10)

}; // Size: 0x50

class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
    uint8 bIsLayerThumbnail;                                                          // 0x01D0 (size: 0x1)
    uint8 bDisableTessellation;                                                       // 0x01D0 (size: 0x1)

}; // Size: 0x1D8

class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
    FGuid MeshGuid;                                                                   // 0x0750 (size: 0x10)

}; // Size: 0x770

class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
    FGuid LandscapeGuid;                                                              // 0x0700 (size: 0x10)
    TArray<FIntPoint> ProxyComponentBases;                                            // 0x0710 (size: 0x10)
    int8 ProxyLOD;                                                                    // 0x0720 (size: 0x1)

}; // Size: 0x730

class ULandscapeSplineControlPoint : public UObject
{
    FVector Location;                                                                 // 0x0028 (size: 0xC)
    FRotator Rotation;                                                                // 0x0034 (size: 0xC)
    float Width;                                                                      // 0x0040 (size: 0x4)
    float SideFalloff;                                                                // 0x0044 (size: 0x4)
    float EndFalloff;                                                                 // 0x0048 (size: 0x4)
    TArray<FLandscapeSplineConnection> ConnectedSegments;                             // 0x0050 (size: 0x10)
    TArray<FLandscapeSplineInterpPoint> Points;                                       // 0x0060 (size: 0x10)
    FBox Bounds;                                                                      // 0x0070 (size: 0x1C)
    class UControlPointMeshComponent* LocalMeshComponent;                             // 0x0090 (size: 0x8)

}; // Size: 0x98

class ULandscapeSplineSegment : public UObject
{
    FLandscapeSplineSegmentConnection Connections;                                    // 0x0028 (size: 0x30)
    FInterpCurveVector SplineInfo;                                                    // 0x0058 (size: 0x18)
    TArray<FLandscapeSplineInterpPoint> Points;                                       // 0x0070 (size: 0x10)
    FBox Bounds;                                                                      // 0x0080 (size: 0x1C)
    TArray<class USplineMeshComponent*> LocalMeshComponents;                          // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class ULandscapeSplinesComponent : public UPrimitiveComponent
{
    TArray<class ULandscapeSplineControlPoint*> ControlPoints;                        // 0x0670 (size: 0x10)
    TArray<class ULandscapeSplineSegment*> Segments;                                  // 0x0680 (size: 0x10)
    TArray<class UMeshComponent*> CookedForeignMeshComponents;                        // 0x0690 (size: 0x10)

}; // Size: 0x6A0

class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
    TArray<FGrassInput> GrassTypes;                                                   // 0x0060 (size: 0x10)

}; // Size: 0x70

class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
    TArray<FLayerBlendInput> Layers;                                                  // 0x0060 (size: 0x10)
    FGuid ExpressionGUID;                                                             // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
    TEnumAsByte<ETerrainCoordMappingType> MappingType;                                // 0x0060 (size: 0x1)
    TEnumAsByte<ELandscapeCustomizedCoordType> CustomUVType;                          // 0x0061 (size: 0x1)
    float MappingScale;                                                               // 0x0064 (size: 0x4)
    float MappingRotation;                                                            // 0x0068 (size: 0x4)
    float MappingPanU;                                                                // 0x006C (size: 0x4)
    float MappingPanV;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
    FName ParameterName;                                                              // 0x0060 (size: 0x8)
    float PreviewWeight;                                                              // 0x0068 (size: 0x4)
    FGuid ExpressionGUID;                                                             // 0x006C (size: 0x10)

}; // Size: 0x80

class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
    FExpressionInput LayerUsed;                                                       // 0x0060 (size: 0x30)
    FExpressionInput LayerNotUsed;                                                    // 0x0090 (size: 0x30)
    FName ParameterName;                                                              // 0x00C0 (size: 0x8)
    uint8 PreviewUsed;                                                                // 0x00C8 (size: 0x1)
    FGuid ExpressionGUID;                                                             // 0x00CC (size: 0x10)

}; // Size: 0xE0

class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
    FExpressionInput Base;                                                            // 0x0060 (size: 0x30)
    FExpressionInput Layer;                                                           // 0x0090 (size: 0x30)
    FName ParameterName;                                                              // 0x00C0 (size: 0x8)
    float PreviewWeight;                                                              // 0x00C8 (size: 0x4)
    FVector ConstBase;                                                                // 0x00CC (size: 0xC)
    FGuid ExpressionGUID;                                                             // 0x00D8 (size: 0x10)

}; // Size: 0xE8

class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
    FGuid ExpressionGUID;                                                             // 0x0060 (size: 0x10)

}; // Size: 0x70

#endif
