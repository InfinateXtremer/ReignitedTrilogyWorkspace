#ifndef UE4SS_SDK_BP_Base_Enemy_HPP
#define UE4SS_SDK_BP_Base_Enemy_HPP

class ABP_Base_Enemy_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UDifficultyManager_C* DifficultyManager;                                    // 0x0860 (size: 0x8)
    class UDeathCollisionManager_C* ExtraDeathCollisionManager;                       // 0x0868 (size: 0x8)
    class ULongFallManager_C* LongFallManager;                                        // 0x0870 (size: 0x8)
    class UFalconEnemyStateComponent* State: SuperLaunchTwinkle;                      // 0x0878 (size: 0x8)
    class UFalconEnemyStateComponent* State: SuperLaunchPoof;                         // 0x0880 (size: 0x8)
    class UFalconEnemyStateComponent* State: LaunchToDeath;                           // 0x0888 (size: 0x8)
    class UFlingEquipmentComponent_C* FlingEquipmentComponent;                        // 0x0890 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0898 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x08A0 (size: 0x8)
    float Timeline_0_Dissolve_Amount_82B46FDA461BF9980992A3B385E973DD;                // 0x08A8 (size: 0x4)
    float Timeline_0_Diffuse_Brightness_82B46FDA461BF9980992A3B385E973DD;             // 0x08AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_82B46FDA461BF9980992A3B385E973DD; // 0x08B0 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x08B8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> LaunchTimeline__Direction_1C50ED7F4CD5A030C0C00199E0A61A85; // 0x08C0 (size: 0x1)
    class UTimelineComponent* LaunchTimeline;                                         // 0x08C8 (size: 0x8)
    float MetalMatVFX_Timeline_metalActiveFresnelExponent_DFF9CB1A40510361F3FF218A5459C6C0; // 0x08D0 (size: 0x4)
    float MetalMatVFX_Timeline_metalActive_DFF9CB1A40510361F3FF218A5459C6C0;          // 0x08D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MetalMatVFX_Timeline__Direction_DFF9CB1A40510361F3FF218A5459C6C0; // 0x08D8 (size: 0x1)
    class UTimelineComponent* MetalMatVFX_Timeline;                                   // 0x08E0 (size: 0x8)
    FVector Dissolve_Parms_FadeToBlack_AE13FF8F4219B951B2AC84935761284D;              // 0x08E8 (size: 0xC)
    float Dissolve_Parms_Fringe_Intensity_AE13FF8F4219B951B2AC84935761284D;           // 0x08F4 (size: 0x4)
    float Dissolve_Parms_Fringe_Size_AE13FF8F4219B951B2AC84935761284D;                // 0x08F8 (size: 0x4)
    float Dissolve_Parms_Dissolve_Amount_AE13FF8F4219B951B2AC84935761284D;            // 0x08FC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Dissolve_Parms__Direction_AE13FF8F4219B951B2AC84935761284D; // 0x0900 (size: 0x1)
    class UTimelineComponent* Dissolve Parms;                                         // 0x0908 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> MetalMaterials;                           // 0x0910 (size: 0x10)
    float LaunchRichochetImpulse;                                                     // 0x0920 (size: 0x4)
    bool PostLaunchGroundCheck;                                                       // 0x0924 (size: 0x1)
    bool RichochetReady;                                                              // 0x0925 (size: 0x1)
    float RichochetDelay;                                                             // 0x0928 (size: 0x4)
    bool Launching;                                                                   // 0x092C (size: 0x1)
    float PrevVelocityLength;                                                         // 0x0930 (size: 0x4)
    bool HitHarmfulGround;                                                            // 0x0934 (size: 0x1)
    bool DestroyIfLootCollected;                                                      // 0x0935 (size: 0x1)
    bool LaunchRotateFromVelocity;                                                    // 0x0936 (size: 0x1)
    class UAkAudioEvent* LaunchImpactSFX;                                             // 0x0938 (size: 0x8)
    class UAkAudioEvent* LaunchImpactVO;                                              // 0x0940 (size: 0x8)
    class UAkAudioEvent* SuperLaunchImpactSFX;                                        // 0x0948 (size: 0x8)
    class UAkAudioEvent* SuperLaunchImpactVO;                                         // 0x0950 (size: 0x8)
    class UAkAudioEvent* SuperLaunchPoofSFX;                                          // 0x0958 (size: 0x8)
    class UAkAudioEvent* SuperLaunchTwinkleSFX;                                       // 0x0960 (size: 0x8)
    bool DeathInPlace;                                                                // 0x0968 (size: 0x1)
    FVector PrevVelocity;                                                             // 0x096C (size: 0xC)
    class UAkAudioEvent* WaterSplashSFX;                                              // 0x0978 (size: 0x8)
    bool LaunchedToDeath;                                                             // 0x0980 (size: 0x1)
    int32 LastMetalDamageGroup;                                                       // 0x0984 (size: 0x4)
    class APhasmidCollisionRegion* LaunchedDamageRegion;                              // 0x0988 (size: 0x8)
    bool DealChargeDamageOnLaunch;                                                    // 0x0990 (size: 0x1)
    float CapsuleIndirectVisibility;                                                  // 0x0994 (size: 0x4)
    bool Splashed;                                                                    // 0x0998 (size: 0x1)
    bool HitNonHarmfulGround;                                                         // 0x0999 (size: 0x1)
    bool HitSwimVolume;                                                               // 0x099A (size: 0x1)
    class UCurveFloat* MetalActiveCurve;                                              // 0x09A0 (size: 0x8)
    class UCurveFloat* MetalActiveFresnelExpoCurve;                                   // 0x09A8 (size: 0x8)
    TArray<class UStaticMeshComponent*> ChildrenAttachedMeshes_SM;                    // 0x09B0 (size: 0x10)
    TArray<class USkeletalMeshComponent*> ChildrenAttachedMeshes_SK;                  // 0x09C0 (size: 0x10)
    bool CanLaunchRotateFromVelocity;                                                 // 0x09D0 (size: 0x1)
    bool OnlyDownwardsWorldDamageDetection;                                           // 0x09D1 (size: 0x1)
    TArray<class UMeshComponent*> MeshComponents;                                     // 0x09D8 (size: 0x10)
    bool IsImmuneChecksActorTags(Hack);                                               // 0x09E8 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void SetupMetalMaterial(bool InConstructionScript);
    void GetMetalResponseDamageGroupInfo(FGameplayEventData& Payload, int32& AttackGroupIndex, bool& IsNewAttack);
    bool IsChargeTarget();
    bool IsDead();
    void RotateFromVelocity(class USceneComponent* Scene Component);
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    void GroundBounce(float Restitution);
    void CheckForWorldDamageHit(FHitResult Hit, bool& HitWater/Lava);
    bool IsMetal?();
    bool ShouldRespondToFireAttack?(FGameplayEventData& GameplayEventData);
    bool OnDeath(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Dissolve Parms__FinishedFunc();
    void Dissolve Parms__UpdateFunc();
    void MetalMatVFX_Timeline__FinishedFunc();
    void MetalMatVFX_Timeline__UpdateFunc();
    void LaunchTimeline__FinishedFunc();
    void LaunchTimeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void spawnedInventoryItemCollected(int32 ID);
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Death Dissolve();
    void BndEvt__FalconEnemy_K2Node_ComponentBoundEvent_0_OnStateChangeSignature__DelegateSignature();
    void PlayMetalResponse(class AActor* Target, FGameplayEventData Payload);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void StopLaunchTimeline();
    void Dissolve Equipment();
    void Undissolve();
    void BndEvt__State: SuperLaunchPoof_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: SuperLaunchTwinkle_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Deactivate Effects();
    void OnLaunchToDeath(class UFalconEnemyStateComponent* State Component);
    void OnExitLaunchToDeath(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Check World Damage on Overlap(FHitResult Hit);
    void ExecuteUbergraph_BP_Base_Enemy(int32 EntryPoint);
}; // Size: 0x9E9

#endif
