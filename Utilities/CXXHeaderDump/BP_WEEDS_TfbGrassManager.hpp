#ifndef UE4SS_SDK_BP_WEEDS_TfbGrassManager_HPP
#define UE4SS_SDK_BP_WEEDS_TfbGrassManager_HPP

class ABP_WEEDS_TfbGrassManager_C : public ATfbWEEDSGrassManagerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0448 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0450 (size: 0x8)
    TArray<TSoftObjectPtr<AActor>> GroundObjectReferences;                            // 0x0458 (size: 0x10)
    TArray<class AActor*> GroundActorObjects;                                         // 0x0468 (size: 0x10)
    FVector GroundOrigin;                                                             // 0x0478 (size: 0xC)
    FVector GroundExtents;                                                            // 0x0484 (size: 0xC)
    float MaxExtent;                                                                  // 0x0490 (size: 0x4)
    float OrthoWidth;                                                                 // 0x0494 (size: 0x4)
    FVector CapturePos;                                                               // 0x0498 (size: 0xC)
    FString GroundTextureExportFilename;                                              // 0x04A8 (size: 0x10)
    FString GroundTextureExportPath;                                                  // 0x04B8 (size: 0x10)
    class UTexture2D* GroundTexture;                                                  // 0x04C8 (size: 0x8)
    bool RefreshGrass;                                                                // 0x04D0 (size: 0x1)
    float Pattern 1 - Strength;                                                       // 0x04D4 (size: 0x4)
    float Pattern 1 - Scale;                                                          // 0x04D8 (size: 0x4)
    float Pattern 2 - Strength;                                                       // 0x04DC (size: 0x4)
    float Pattern 2 - Scale;                                                          // 0x04E0 (size: 0x4)
    float Metallic;                                                                   // 0x04E4 (size: 0x4)
    float Specular;                                                                   // 0x04E8 (size: 0x4)
    float Roughness;                                                                  // 0x04EC (size: 0x4)
    bool UseGlobalAlbedoOverride;                                                     // 0x04F0 (size: 0x1)
    FLinearColor Albedo;                                                              // 0x04F4 (size: 0x10)
    FLinearColor Pattern 1 - Albedo;                                                  // 0x0504 (size: 0x10)
    FLinearColor Pattern 2 - Albedo;                                                  // 0x0514 (size: 0x10)
    float CullDistanceOverride;                                                       // 0x0524 (size: 0x4)
    bool ApplyWEEDSMaterialOverrides;                                                 // 0x0528 (size: 0x1)
    class UMaterialInterface* GrassLOD1OverrideMaterial;                              // 0x0530 (size: 0x8)
    class UMaterialInterface* FlowerLOD1OverrideMaterial;                             // 0x0538 (size: 0x8)
    class UMaterialInterface* SproutsLOD1OverrideMaterial;                            // 0x0540 (size: 0x8)
    class UMaterialInterface* GrassLOD2OverrideMaterial;                              // 0x0548 (size: 0x8)
    class UMaterialInterface* FlowerLOD2OverrideMaterial;                             // 0x0550 (size: 0x8)
    class UMaterialInterface* SproutsLOD2OverrideMaterial;                            // 0x0558 (size: 0x8)
    TMap<class UFoliageType*, class UMaterialInterface*> FoliageTypeMaterialOverrides; // 0x0560 (size: 0x50)
    TArray<class UMaterialInstanceDynamic*> FoliageTypeOverrideDynamicMaterials;      // 0x05B0 (size: 0x10)
    bool IsFlower;                                                                    // 0x05C0 (size: 0x1)
    bool IsSprout;                                                                    // 0x05C1 (size: 0x1)
    bool GroundTextureGenerated;                                                      // 0x05C2 (size: 0x1)
    class UTextureRenderTarget2D* WEEDS_Render_Target;                                // 0x05C8 (size: 0x8)
    bool IsGrass;                                                                     // 0x05D0 (size: 0x1)
    bool PrerenderedSequenceActive;                                                   // 0x05D1 (size: 0x1)
    bool UseExplicitGrassMapBounds;                                                   // 0x05D2 (size: 0x1)
    FS_GrassMapBounds ExplicitGrassMapBounds;                                         // 0x05D4 (size: 0x18)
    FVector WorldOffset;                                                              // 0x05EC (size: 0xC)
    bool WorldOffsetIsValid;                                                          // 0x05F8 (size: 0x1)
    bool AllowDebugCapture;                                                           // 0x05F9 (size: 0x1)
    bool IsShippingBuild;                                                             // 0x05FA (size: 0x1)

    void CleanPatchedMeshes();
    void TickGroundMapOffsets();
    void MakeActorArrayFromActorReferences(TArray<TSoftObjectPtr<AActor>>& InSoftRefActorList, TArray<class AActor*>& OutActorList);
    void OptionallyOverrideAlbedoOnMaterialInstance(class UMaterialInstanceDynamic* Material Instance Dynamic);
    void FoliageTypeIsSprouts(class UFoliageType* FoliageType, bool& Yes It Is);
    void FoliageTypeIsFlower(class UFoliageType* FoliageType, bool& Yes It Is);
    void FoliageTypeIsGrass(class UFoliageType* FoliageType, bool& Yes It Is);
    void FoliageInstanceComponentIsWEEDS(class UFoliageInstancedStaticMeshComponent* FoliageInstanceComponent, bool& IsWEEDSFoliage);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void GenerateTextureAsset();
    void InitGroundCapture();
    void GenerateRenderTarget();
    void LoadRenderTarget();
    void InitMaterialVisualOverrides();
    void InitFoliageInstanceMaterialOverrides();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void RegisterFireProjectile(class AActor* ProjectileActor, float ProjectileLifetime, float ProjectileTravelDistance, FVector ProjectileStartPos, float ProjectileRadius);
    void UnRegisterFireProjectile(class AActor* Projectile);
    void InitDistanceOverrides();
    void AutoGenerationCallback();
    void Player Ready();
    void SquencePlayer_OnPlay();
    void ReceiveDestroyed();
    void K2_OnReset();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WEEDS_TfbGrassManager(int32 EntryPoint);
}; // Size: 0x5FB

#endif
