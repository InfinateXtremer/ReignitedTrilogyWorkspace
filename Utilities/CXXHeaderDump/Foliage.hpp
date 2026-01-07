#ifndef UE4SS_SDK_Foliage_HPP
#define UE4SS_SDK_Foliage_HPP

#include "Foliage_enums.hpp"

struct FFoliageTypeObject
{
    class UObject* FoliageTypeObject;                                                 // 0x0000 (size: 0x8)
    class UFoliageType_InstancedStaticMesh* TypeInstance;                             // 0x0008 (size: 0x8)
    bool bIsAsset;                                                                    // 0x0010 (size: 0x1)
    TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FFoliageVertexColorChannelMask
{
    uint8 UseMask;                                                                    // 0x0000 (size: 0x1)
    float MaskThreshold;                                                              // 0x0004 (size: 0x4)
    uint8 InvertMask;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FProceduralFoliageInstance
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)
    FVector Normal;                                                                   // 0x0020 (size: 0xC)
    float Age;                                                                        // 0x002C (size: 0x4)
    float Scale;                                                                      // 0x0030 (size: 0x4)
    class UFoliageType_InstancedStaticMesh* Type;                                     // 0x0038 (size: 0x8)

}; // Size: 0x60

class AInstancedFoliageActor : public AActor
{
}; // Size: 0x368

class AInteractiveFoliageActor : public AStaticMeshActor
{
    class UCapsuleComponent* CapsuleComponent;                                        // 0x0328 (size: 0x8)
    FVector TouchingActorEntryPosition;                                               // 0x0330 (size: 0xC)
    FVector FoliageVelocity;                                                          // 0x033C (size: 0xC)
    FVector FoliageForce;                                                             // 0x0348 (size: 0xC)
    FVector FoliagePosition;                                                          // 0x0354 (size: 0xC)
    float FoliageDamageImpulseScale;                                                  // 0x0360 (size: 0x4)
    float FoliageTouchImpulseScale;                                                   // 0x0364 (size: 0x4)
    float FoliageStiffness;                                                           // 0x0368 (size: 0x4)
    float FoliageStiffnessQuadratic;                                                  // 0x036C (size: 0x4)
    float FoliageDamping;                                                             // 0x0370 (size: 0x4)
    float MaxDamageImpulse;                                                           // 0x0374 (size: 0x4)
    float MaxTouchImpulse;                                                            // 0x0378 (size: 0x4)
    float MaxForce;                                                                   // 0x037C (size: 0x4)
    float Mass;                                                                       // 0x0380 (size: 0x4)

    void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
}; // Size: 0x388

class AProceduralFoliageBlockingVolume : public AVolume
{
    class AProceduralFoliageVolume* ProceduralFoliageVolume;                          // 0x0350 (size: 0x8)

}; // Size: 0x358

class AProceduralFoliageVolume : public AVolume
{
    class UProceduralFoliageComponent* ProceduralComponent;                           // 0x0350 (size: 0x8)

}; // Size: 0x358

class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage; // 0x08D8 (size: 0x10)
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage; // 0x08E8 (size: 0x10)

}; // Size: 0x900

class UFoliageStatistics : public UBlueprintFunctionLibrary
{

    int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FBox Box);
}; // Size: 0x28

class UFoliageType : public UObject
{
    FGuid UpdateGuid;                                                                 // 0x0028 (size: 0x10)
    float Density;                                                                    // 0x0038 (size: 0x4)
    float DensityAdjustmentFactor;                                                    // 0x003C (size: 0x4)
    float Radius;                                                                     // 0x0040 (size: 0x4)
    EFoliageScaling Scaling;                                                          // 0x0044 (size: 0x1)
    FFloatInterval ScaleX;                                                            // 0x0048 (size: 0x8)
    FFloatInterval ScaleY;                                                            // 0x0050 (size: 0x8)
    FFloatInterval ScaleZ;                                                            // 0x0058 (size: 0x8)
    FFoliageVertexColorChannelMask VertexColorMaskByChannel;                          // 0x0060 (size: 0x30)
    TEnumAsByte<FoliageVertexColorMask> VertexColorMask;                              // 0x0090 (size: 0x1)
    float VertexColorMaskThreshold;                                                   // 0x0094 (size: 0x4)
    uint8 VertexColorMaskInvert;                                                      // 0x0098 (size: 0x1)
    FFloatInterval ZOffset;                                                           // 0x009C (size: 0x8)
    uint8 AlignToNormal;                                                              // 0x00A4 (size: 0x1)
    float AlignMaxAngle;                                                              // 0x00A8 (size: 0x4)
    uint8 RandomYaw;                                                                  // 0x00AC (size: 0x1)
    float RandomPitchAngle;                                                           // 0x00B0 (size: 0x4)
    FFloatInterval GroundSlopeAngle;                                                  // 0x00B4 (size: 0x8)
    FFloatInterval Height;                                                            // 0x00BC (size: 0x8)
    TArray<FName> LandscapeLayers;                                                    // 0x00C8 (size: 0x10)
    FName LandscapeLayer;                                                             // 0x00D8 (size: 0x8)
    uint8 CollisionWithWorld;                                                         // 0x00E0 (size: 0x1)
    FVector CollisionScale;                                                           // 0x00E4 (size: 0xC)
    float MinimumLayerWeight;                                                         // 0x00F0 (size: 0x4)
    FBoxSphereBounds MeshBounds;                                                      // 0x00F4 (size: 0x1C)
    FVector LowBoundOriginRadius;                                                     // 0x0110 (size: 0xC)
    TEnumAsByte<EComponentMobility::Type> Mobility;                                   // 0x011C (size: 0x1)
    FInt32Interval CullDistance;                                                      // 0x0120 (size: 0x8)
    uint8 bEnableStaticLighting;                                                      // 0x0128 (size: 0x1)
    uint8 CastShadow;                                                                 // 0x0128 (size: 0x1)
    uint8 bAffectDynamicIndirectLighting;                                             // 0x0128 (size: 0x1)
    uint8 bAffectDistanceFieldLighting;                                               // 0x0128 (size: 0x1)
    uint8 bCastDynamicShadow;                                                         // 0x0128 (size: 0x1)
    uint8 bCastStaticShadow;                                                          // 0x0128 (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x0128 (size: 0x1)
    uint8 bReceivesDecals;                                                            // 0x0128 (size: 0x1)
    uint8 bOverrideLightMapRes;                                                       // 0x0129 (size: 0x1)
    int32 OverriddenLightMapRes;                                                      // 0x012C (size: 0x4)
    ELightmapType LightmapType;                                                       // 0x0130 (size: 0x1)
    uint8 bUseAsOccluder;                                                             // 0x0134 (size: 0x1)
    FBodyInstance BodyInstance;                                                       // 0x0140 (size: 0x200)
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;           // 0x0340 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x0341 (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x0344 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x0348 (size: 0x4)
    float CollisionRadius;                                                            // 0x034C (size: 0x4)
    float ShadeRadius;                                                                // 0x0350 (size: 0x4)
    int32 NumSteps;                                                                   // 0x0354 (size: 0x4)
    float InitialSeedDensity;                                                         // 0x0358 (size: 0x4)
    float AverageSpreadDistance;                                                      // 0x035C (size: 0x4)
    float SpreadVariance;                                                             // 0x0360 (size: 0x4)
    int32 SeedsPerStep;                                                               // 0x0364 (size: 0x4)
    int32 DistributionSeed;                                                           // 0x0368 (size: 0x4)
    float MaxInitialSeedOffset;                                                       // 0x036C (size: 0x4)
    bool bCanGrowInShade;                                                             // 0x0370 (size: 0x1)
    bool bSpawnsInShade;                                                              // 0x0371 (size: 0x1)
    float MaxInitialAge;                                                              // 0x0374 (size: 0x4)
    float MaxAge;                                                                     // 0x0378 (size: 0x4)
    float OverlapPriority;                                                            // 0x037C (size: 0x4)
    FFloatInterval ProceduralScale;                                                   // 0x0380 (size: 0x8)
    FRuntimeFloatCurve ScaleCurve;                                                    // 0x0388 (size: 0x78)
    int32 ChangeCount;                                                                // 0x0400 (size: 0x4)
    uint8 ReapplyDensity;                                                             // 0x0404 (size: 0x1)
    uint8 ReapplyRadius;                                                              // 0x0404 (size: 0x1)
    uint8 ReapplyAlignToNormal;                                                       // 0x0404 (size: 0x1)
    uint8 ReapplyRandomYaw;                                                           // 0x0404 (size: 0x1)
    uint8 ReapplyScaling;                                                             // 0x0404 (size: 0x1)
    uint8 ReapplyScaleX;                                                              // 0x0404 (size: 0x1)
    uint8 ReapplyScaleY;                                                              // 0x0404 (size: 0x1)
    uint8 ReapplyScaleZ;                                                              // 0x0404 (size: 0x1)
    uint8 ReapplyRandomPitchAngle;                                                    // 0x0405 (size: 0x1)
    uint8 ReapplyGroundSlope;                                                         // 0x0405 (size: 0x1)
    uint8 ReapplyHeight;                                                              // 0x0405 (size: 0x1)
    uint8 ReapplyLandscapeLayers;                                                     // 0x0405 (size: 0x1)
    uint8 ReapplyZOffset;                                                             // 0x0405 (size: 0x1)
    uint8 ReapplyCollisionWithWorld;                                                  // 0x0405 (size: 0x1)
    uint8 ReapplyVertexColorMask;                                                     // 0x0405 (size: 0x1)
    uint8 bEnableDensityScaling;                                                      // 0x0405 (size: 0x1)

}; // Size: 0x410

class UFoliageType_InstancedStaticMesh : public UFoliageType
{
    class UStaticMesh* Mesh;                                                          // 0x0408 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0410 (size: 0x10)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;           // 0x0420 (size: 0x8)

}; // Size: 0x430

class UInteractiveFoliageComponent : public UStaticMeshComponent
{
}; // Size: 0x710

class UProceduralFoliageComponent : public UActorComponent
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x00F0 (size: 0x8)
    float TileOverlap;                                                                // 0x00F8 (size: 0x4)
    class AVolume* SpawningVolume;                                                    // 0x0100 (size: 0x8)
    FGuid ProceduralGuid;                                                             // 0x0108 (size: 0x10)

}; // Size: 0x118

class UProceduralFoliageSpawner : public UObject
{
    int32 RandomSeed;                                                                 // 0x0028 (size: 0x4)
    float TileSize;                                                                   // 0x002C (size: 0x4)
    int32 NumUniqueTiles;                                                             // 0x0030 (size: 0x4)
    float MinimumQuadTreeSize;                                                        // 0x0034 (size: 0x4)
    TArray<FFoliageTypeObject> FoliageTypes;                                          // 0x0040 (size: 0x10)
    bool bNeedsSimulation;                                                            // 0x0050 (size: 0x1)

    void Simulate(int32 NumSteps);
}; // Size: 0x70

class UProceduralFoliageTile : public UObject
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x0028 (size: 0x8)
    TArray<FProceduralFoliageInstance> InstancesArray;                                // 0x00D0 (size: 0x10)

}; // Size: 0x158

#endif
