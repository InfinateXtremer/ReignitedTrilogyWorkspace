#ifndef UE4SS_SDK_BP_Loot_BASE_HPP
#define UE4SS_SDK_BP_Loot_BASE_HPP

class ABP_Loot_BASE_C : public ASpyroLoot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UPointLightComponent* GemLoot_PointLight;                                   // 0x0440 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_Gem_Plane1;                                    // 0x0448 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_Gem_Plane;                                     // 0x0450 (size: 0x8)
    class USceneComponent* Scene1;                                                    // 0x0458 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0460 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0468 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0470 (size: 0x8)
    class USphereComponent* CollectionRegion;                                         // 0x0478 (size: 0x8)
    class UParticleSystemComponent* AmbientIdleVFX;                                   // 0x0480 (size: 0x8)
    class UStaticMeshComponent* GemMesh;                                              // 0x0488 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0490 (size: 0x8)
    float Timeline_0_LightIntensity_CF8C24D345E62BB11B1E6E9DFFDF9E2C;                 // 0x0498 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_CF8C24D345E62BB11B1E6E9DFFDF9E2C; // 0x049C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x04A0 (size: 0x8)
    float Loot_Generated_Arc_PErcent_90B87A74413AC82A85F76A9B141A5338;                // 0x04A8 (size: 0x4)
    float Loot_Generated_Arc_VerticalTweak_90B87A74413AC82A85F76A9B141A5338;          // 0x04AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Loot_Generated_Arc__Direction_90B87A74413AC82A85F76A9B141A5338; // 0x04B0 (size: 0x1)
    class UTimelineComponent* Loot Generated Arc;                                     // 0x04B8 (size: 0x8)
    float LootPath_Percent_FF1F29B749A07058A9ABBA9A8D171649;                          // 0x04C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LootPath__Direction_FF1F29B749A07058A9ABBA9A8D171649; // 0x04C4 (size: 0x1)
    class UTimelineComponent* LootPath;                                               // 0x04C8 (size: 0x8)
    float LootSlurp_LootScale_B87A4BA345CBB9121D91FE9417649E9D;                       // 0x04D0 (size: 0x4)
    float LootSlurp_LootDisplaceDown_B87A4BA345CBB9121D91FE9417649E9D;                // 0x04D4 (size: 0x4)
    float LootSlurp_LootVerticalTweak_B87A4BA345CBB9121D91FE9417649E9D;               // 0x04D8 (size: 0x4)
    float LootSlurp_LootDistance_B87A4BA345CBB9121D91FE9417649E9D;                    // 0x04DC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LootSlurp__Direction_B87A4BA345CBB9121D91FE9417649E9D; // 0x04E0 (size: 0x1)
    class UTimelineComponent* LootSlurp;                                              // 0x04E8 (size: 0x8)
    int32 collectionSequence;                                                         // 0x04F0 (size: 0x4)
    class ABP_Base_Playable_C* Player;                                                // 0x04F8 (size: 0x8)
    float initialDistance;                                                            // 0x0500 (size: 0x4)
    FVector pickupLocation;                                                           // 0x0504 (size: 0xC)
    bool collectionDelayActive;                                                       // 0x0510 (size: 0x1)
    bool collected;                                                                   // 0x0511 (size: 0x1)
    TMap<TEnumAsByte<LootType_Enum::Type>, int32> GemMap_Value;                       // 0x0518 (size: 0x50)
    bool ForceAutoCollect;                                                            // 0x0568 (size: 0x1)
    int32 spawned id;                                                                 // 0x056C (size: 0x4)
    FVector LootScale;                                                                // 0x0570 (size: 0xC)
    bool isSparxMinigameGem;                                                          // 0x057C (size: 0x1)
    float CollectionDelayTime;                                                        // 0x0580 (size: 0x4)
    class UObject* spawner;                                                           // 0x0588 (size: 0x8)
    bool preventCollection?;                                                          // 0x0590 (size: 0x1)
    TMap<TEnumAsByte<LootType_Enum::Type>, UMaterialInstance*> LootTypeToMaterial;    // 0x0598 (size: 0x50)
    TMap<TEnumAsByte<LootType_Enum::Type>, UStaticMesh*> LootTypeToMesh_Spyro1;       // 0x05E8 (size: 0x50)
    int32 LootValue;                                                                  // 0x0638 (size: 0x4)
    class UParticleSystem* LootAmbientVFX;                                            // 0x0640 (size: 0x8)
    class UParticleSystem* LootCollectedVFX;                                          // 0x0648 (size: 0x8)
    class UAkAudioEvent* LootCollectedSFX;                                            // 0x0650 (size: 0x8)
    FVector number launch vector;                                                     // 0x0658 (size: 0xC)
    float BounceSidewaysImpulse;                                                      // 0x0664 (size: 0x4)
    EInventoryType InventoryType_Loot;                                                // 0x0668 (size: 0x1)
    TMap<EInventoryType, int32> InventoryLootToValue_Map;                             // 0x0670 (size: 0x50)
    int32 CollectedTiltRandomizer;                                                    // 0x06C0 (size: 0x4)
    float CollectedStartingTilt;                                                      // 0x06C4 (size: 0x4)
    bool startWithPhysics?;                                                           // 0x06C8 (size: 0x1)
    float Falling_SpawnedZ;                                                           // 0x06CC (size: 0x4)
    float Falling_LastZ;                                                              // 0x06D0 (size: 0x4)
    int32 Falling_TimesStillFalling;                                                  // 0x06D4 (size: 0x4)
    bool Falling_isOOW?;                                                              // 0x06D8 (size: 0x1)
    TArray<class USplineComponent*> LootPathsSet;                                     // 0x06E0 (size: 0x10)
    class USplineComponent* LootPathChosen;                                           // 0x06F0 (size: 0x8)
    int32 LootPathSaveID;                                                             // 0x06F8 (size: 0x4)
    FGameplayTagContainer AutocollectDamageTags;                                      // 0x0700 (size: 0x20)
    TArray<class UAkAudioEvent*> GemAudioSequence;                                    // 0x0720 (size: 0x10)
    bool forbidSpawnPhysics?;                                                         // 0x0730 (size: 0x1)
    bool doBounceCheck?;                                                              // 0x0731 (size: 0x1)
    class UParticleSystem* GemCollectTrailVFX;                                        // 0x0738 (size: 0x8)
    class UParticleSystemComponent* GemSpawnedTrailVFX;                               // 0x0740 (size: 0x8)
    bool forceInstantCollect?;                                                        // 0x0748 (size: 0x1)
    bool doSpecialLootCollectRotation?;                                               // 0x0749 (size: 0x1)
    bool forceInstantAutoCollect;                                                     // 0x074A (size: 0x1)
    FGameplayTagContainer SpitTag;                                                    // 0x0750 (size: 0x20)
    int32 LootOptions_LootID;                                                         // 0x0770 (size: 0x4)
    FVector LootOptions_InitialLocation;                                              // 0x0774 (size: 0xC)
    FVector LootOptions_EndLocation;                                                  // 0x0780 (size: 0xC)
    bool movingPlatform?;                                                             // 0x078C (size: 0x1)
    bool updateRequested?;                                                            // 0x078D (size: 0x1)
    bool rejectAutocollect?;                                                          // 0x078E (size: 0x1)
    bool alreadyDidCollectFX?;                                                        // 0x078F (size: 0x1)
    float bounceAdjustX;                                                              // 0x0790 (size: 0x4)
    float bounceAdjustY;                                                              // 0x0794 (size: 0x4)
    class UParticleSystemComponent* GemSpawnedAmbientVFX;                             // 0x0798 (size: 0x8)
    bool ignoreDestroyOnRestore?;                                                     // 0x07A0 (size: 0x1)
    bool doSequenceSFX?;                                                              // 0x07A1 (size: 0x1)
    float Light_Intensity;                                                            // 0x07A4 (size: 0x4)
    FLinearColor Light_Color;                                                         // 0x07A8 (size: 0x10)
    float Light_AttenuationRadius;                                                    // 0x07B8 (size: 0x4)
    bool useLight;                                                                    // 0x07BC (size: 0x1)
    bool isSpawned;                                                                   // 0x07BD (size: 0x1)
    bool isOnGround;                                                                  // 0x07BE (size: 0x1)
    class UBP_LootOptions_Component_C* LootOptionsComponentRef;                       // 0x07C0 (size: 0x8)

    void ISparxCanBreakTreasureChest(bool& SparxCanBreak);
    void ILootIsOnGround(bool& LootIsOnGround);
    void ILootGetHasBeenCollected(bool& HasBeenCollected);
    void ILootGetForceAutoCollect(bool& ForceAutoCollect);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    EInventoryType getInventoryType();
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void OnRep_forceInstantCollect?();
    void OnRep_forceInstantAutoCollect();
    void OnRep_forceAutoCollect();
    void spawn bouncing digit(int32 digit, FVector Vector, float adjust x, float Adjust y, bool isSecondDigit, class AActor*& CreatedDigit);
    void Loot - Get Random Gem Mesh(class UStaticMesh*& GemMesh);
    void init inventory();
    void is inventory configured(bool& config exists);
    void get collected(bool& was collected);
    void set collected(bool was collected);
    void test save data();
    void set behavior state();
    void UserConstructionScript();
    void LootSlurp__FinishedFunc();
    void LootSlurp__UpdateFunc();
    void LootPath__FinishedFunc();
    void LootPath__UpdateFunc();
    void Loot Generated Arc__FinishedFunc();
    void Loot Generated Arc__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void setItemSaveData(bool serializeData, FString saveName, int32 ID);
    void CollectionCompleted();
    void ReceiveBeginPlay();
    void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CollectionRegion_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled::Type> NewType);
    void setSpawnedData(class UObject* spawner, int32 ID);
    void Loot - OnCollected();
    void Loot - Force Loot Collect(bool ForceInstantCollection, float Delay);
    void Loot - Force Loot Path();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Loot - Force Delayed Sequence(class UBP_LootOptions_Component_C* LootOptions);
    void BndEvt__GemMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnCollectionCompleted();
    void StartCollection();
    void ILootSetForceAutoCollect(bool ForceAutoCollect);
    void Event FadeOffLight();
    void Loot - Apply Advanced Options();
    void BP_SetGemAutoCollect();
    void ExecuteUbergraph_BP_Loot_BASE(int32 EntryPoint);
}; // Size: 0x7C8

#endif
