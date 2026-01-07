#ifndef UE4SS_SDK_TfbWEEDS_HPP
#define UE4SS_SDK_TfbWEEDS_HPP

struct FBurningFoliageInfo
{
    FVector StartLocation;                                                            // 0x0000 (size: 0xC)
    FVector CurLocation;                                                              // 0x000C (size: 0xC)
    float StartTime;                                                                  // 0x0018 (size: 0x4)
    FVector Direction;                                                                // 0x001C (size: 0xC)
    float Distance;                                                                   // 0x0028 (size: 0x4)
    int32 SubState;                                                                   // 0x002C (size: 0x4)
    int32 MaterialParameterNameIndex;                                                 // 0x0030 (size: 0x4)
    int32 FramesOffscreen;                                                            // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FFireProjectileInfo
{
    class AActor* ProjectileActor;                                                    // 0x0000 (size: 0x8)
    float ProjectileDuration;                                                         // 0x0008 (size: 0x4)
    float ProjectileStartTime;                                                        // 0x000C (size: 0x4)
    float ProjectileTravelDist;                                                       // 0x0010 (size: 0x4)
    FVector ProjectileStartPos;                                                       // 0x0014 (size: 0xC)
    FVector ProjectileEndPos;                                                         // 0x0020 (size: 0xC)
    float ProjectileRadius;                                                           // 0x002C (size: 0x4)

}; // Size: 0x30

class ATfbWEEDSGrassManagerBase : public AActor
{
    TEnumAsByte<ETraceTypeQuery> CollisionTraceChannel;                               // 0x0318 (size: 0x1)
    FVector WorldOffsetInternal;                                                      // 0x0338 (size: 0xC)
    class USceneCaptureComponent2D* SceneCaptureComponentInternal;                    // 0x0348 (size: 0x8)
    FVector CapturePosInternal;                                                       // 0x0350 (size: 0xC)
    FVector GroundOriginInternal;                                                     // 0x035C (size: 0xC)
    float OrthoWidthInternal;                                                         // 0x0368 (size: 0x4)
    bool UseExplicitGrassMapBoundsInternal;                                           // 0x036C (size: 0x1)
    class UObject* WorldContextObjectInternal;                                        // 0x0370 (size: 0x8)
    TArray<class AActor*> NearbyInteractionActors;                                    // 0x0378 (size: 0x10)
    TArray<class AActor*> ChannelAllocations;                                         // 0x0388 (size: 0x10)
    TSubclassOf<class AActor> InteractableActorClass;                                 // 0x0398 (size: 0x8)
    float InteractionDistance;                                                        // 0x03A0 (size: 0x4)
    float InteractionRadiusScale;                                                     // 0x03A4 (size: 0x4)
    bool DebugInteractionPositions;                                                   // 0x03A8 (size: 0x1)
    float NextNearbyActorsUpdateTime;                                                 // 0x03AC (size: 0x4)
    float NearbyActorsUpdateFrequency;                                                // 0x03B0 (size: 0x4)
    float NextInteractionUpdateTime;                                                  // 0x03B4 (size: 0x4)
    float InteractionUpdateFrequency;                                                 // 0x03B8 (size: 0x4)
    bool TrailDebugDraw;                                                              // 0x03BC (size: 0x1)
    float TrailDensityScale;                                                          // 0x03C0 (size: 0x4)
    float TrailRadiusScale;                                                           // 0x03C4 (size: 0x4)
    float TrailLookaheadDist;                                                         // 0x03C8 (size: 0x4)
    float TrailShrinkSpeed;                                                           // 0x03CC (size: 0x4)
    FVector TrailForwardDir;                                                          // 0x03D0 (size: 0xC)
    int32 TrailIndex;                                                                 // 0x03DC (size: 0x4)
    TArray<FFireProjectileInfo> FireProjectiles;                                      // 0x03E0 (size: 0x10)
    TArray<FBurningFoliageInfo> FireCharredSources;                                   // 0x03F0 (size: 0x10)
    TArray<int32> FreeCharMaterialIndices;                                            // 0x0400 (size: 0x10)
    float MaxFireRadius;                                                              // 0x0410 (size: 0x4)
    float BurnMoveDuration;                                                           // 0x0414 (size: 0x4)
    float BurnGrowDuration;                                                           // 0x0418 (size: 0x4)
    float BurnHoldDuration;                                                           // 0x041C (size: 0x4)
    float BurnShrinkDuration;                                                         // 0x0420 (size: 0x4)
    float CharredSpawnLimiter;                                                        // 0x0424 (size: 0x4)
    float MinDistanceFromSpyro;                                                       // 0x0428 (size: 0x4)
    float CharDistanceFromOtherChar;                                                  // 0x042C (size: 0x4)
    int32 CullCharredFramesOffsceen;                                                  // 0x0430 (size: 0x4)
    float LastCharredSpawnTime;                                                       // 0x0434 (size: 0x4)
    bool DebugDrawCharredSources;                                                     // 0x0438 (size: 0x1)

    void UpdateSpyroTrailInternal();
    void UpdateSpyroInteractionsInternal();
    void UpdateNearbyActorsInternal();
    void UpdateInteractionsInternal();
    void UpdateGroundMapOffsets();
    void UpdateFireInternal();
    void Tick(float DeltaTime);
    void ReinitializeLists();
    void PatchMaterialOverrides();
    bool IsWithEditor();
    class UMaterialParameterCollection* GetParameterCollection();
    class UMaterialParameterCollection* GetOverrideCollection();
    void CalcProjectileImpactInternal(class AActor* Projectile, const FVector& StartPos, const float DistanceIn, float& DistanceOut, FVector& EndPosOut);
}; // Size: 0x440

class UTfbWEEDSFunctionLibrary : public UBlueprintFunctionLibrary
{

    void PrintWEEDSItems(TMap<class UFoliageType*, class UMaterialInterface*> List);
    void PatchMaterialsFromList(class UObject* WorldContextObject, TMap<class UFoliageType*, class UMaterialInterface*> List, class UMaterialInterface* FlowersLOD1Mat, class UMaterialInterface* GrassLOD1Mat, class UMaterialInterface* SproutLOD1Mat, class UMaterialInterface* FlowersLOD2Mat, class UMaterialInterface* GrassLOD2Mat, class UMaterialInterface* SproutLOD2Mat);
    FString GetGameDirFullPath();
    void CalcDampedSimpleHarmonicMotion(float& pPos, float& pVel, float equilibriumPos, float DeltaTime, float angularFrequency, float dampingRatio);
}; // Size: 0x28

#endif
