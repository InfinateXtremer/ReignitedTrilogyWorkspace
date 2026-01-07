#ifndef UE4SS_SDK_BP_TreasureChest_BASE_HPP
#define UE4SS_SDK_BP_TreasureChest_BASE_HPP

class ABP_TreasureChest_BASE_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0450 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0458 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0460 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0468 (size: 0x8)
    class UStaticMeshComponent* tempmesh_base;                                        // 0x0470 (size: 0x8)
    FVector TreasureShake_ShakeVector_69C172834CC926AC2329F19AC2A2DC9E;               // 0x0478 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> TreasureShake__Direction_69C172834CC926AC2329F19AC2A2DC9E; // 0x0484 (size: 0x1)
    class UTimelineComponent* TreasureShake;                                          // 0x0488 (size: 0x8)
    float TreasureChest_TurnRedTimeline_blue_3586EC7E42257096C74827974F0E8145;        // 0x0490 (size: 0x4)
    float TreasureChest_TurnRedTimeline_NewTrack_0_3586EC7E42257096C74827974F0E8145;  // 0x0494 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TreasureChest_TurnRedTimeline__Direction_3586EC7E42257096C74827974F0E8145; // 0x0498 (size: 0x1)
    class UTimelineComponent* TreasureChest_TurnRedTimeline;                          // 0x04A0 (size: 0x8)
    class UMaterialInterface* temp_indicatormaterial;                                 // 0x04A8 (size: 0x8)
    bool breakOnCharge?;                                                              // 0x04B0 (size: 0x1)
    bool breakOnFlame?;                                                               // 0x04B1 (size: 0x1)
    bool breakOnSuperCharge?;                                                         // 0x04B2 (size: 0x1)
    bool breakOnSuperFlame?;                                                          // 0x04B3 (size: 0x1)
    bool jigglesOnHit?;                                                               // 0x04B4 (size: 0x1)
    TArray<class TSubclassOf<ABP_Loot_BASE_C>> SpawnedLoot;                           // 0x04B8 (size: 0x10)
    class UAkAudioEvent* BreakSound;                                                  // 0x04C8 (size: 0x8)
    bool brokeByCharge?;                                                              // 0x04D0 (size: 0x1)
    TArray<int32> Collected ids;                                                      // 0x04D8 (size: 0x10)
    bool broken open;                                                                 // 0x04E8 (size: 0x1)
    bool do debug print;                                                              // 0x04E9 (size: 0x1)
    class UMaterialInstanceDynamic* MeshRedOnFlame;                                   // 0x04F0 (size: 0x8)
    FRotator OriginalRotation;                                                        // 0x04F8 (size: 0xC)
    FVector TreasureChest_Scale;                                                      // 0x0504 (size: 0xC)
    bool redOnFlame?;                                                                 // 0x0510 (size: 0x1)
    FGameplayTagContainer DamageTag_Fire;                                             // 0x0518 (size: 0x20)
    FGameplayTagContainer DamageTag_Charge;                                           // 0x0538 (size: 0x20)
    bool breakOnHeadbash?;                                                            // 0x0558 (size: 0x1)
    FGameplayTagContainer DamageTag_Headbash;                                         // 0x0560 (size: 0x20)
    FLinearColor TintVectorScratch;                                                   // 0x0580 (size: 0x10)
    class UDestructibleMesh* VFX_DestructibleMesh;                                    // 0x0590 (size: 0x8)
    FWalkableSlopeOverride StandSlopeSettings;                                        // 0x0598 (size: 0x10)
    FGameplayTagContainer DamageTag_SuperFireTurretBarrel;                            // 0x05A8 (size: 0x20)
    bool startWithPhysics?;                                                           // 0x05C8 (size: 0x1)
    bool doForceBonk?;                                                                // 0x05C9 (size: 0x1)
    bool isLootInstantCollect?;                                                       // 0x05CA (size: 0x1)
    FGameplayTagContainer DamageTag_SuperCharge;                                      // 0x05D0 (size: 0x20)
    bool brokeBySuperCharge?;                                                         // 0x05F0 (size: 0x1)
    FGameplayTagContainer DamageTagNoAutoCollect;                                     // 0x05F8 (size: 0x20)
    bool meshVisibleOnDeath?;                                                         // 0x0618 (size: 0x1)
    bool SparxCanBreakTreasureChest;                                                  // 0x0619 (size: 0x1)

    void ILootGetForceAutoCollect(bool& ForceAutoCollect);
    void ILootGetHasBeenCollected(bool& HasBeenCollected);
    void ILootIsOnGround(bool& LootIsOnGround);
    void ISparxCanBreakTreasureChest(bool& SparxCanBreak);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void derive damage values(FVector& Hit Direction, FVector& Impulse Dir, float& Impulse Strength);
    void get gem spawn location(FVector& Spawn Location);
    FString get gem name(int32 Index);
    bool OnDamage(const FGameplayEventData Payload);
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    void set item collected(int32 Index);
    void get item type from class(TSubclassOf<class ABP_Loot_BASE_C> Class, EInventoryType& inventory type);
    void init save data();
    void some gems collected?(bool& opened);
    void restore save data(FPhasmidObjectSaveDataList data list);
    void spawn gems();
    void set behavior state();
    void UserConstructionScript();
    void TreasureChest_TurnRedTimeline__FinishedFunc();
    void TreasureChest_TurnRedTimeline__UpdateFunc();
    void TreasureShake__FinishedFunc();
    void TreasureShake__UpdateFunc();
    void Treasure Chest - Force Break Now(bool SpawnNoLoot);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ILootSetForceAutoCollect(bool ForceAutoCollect);
    void spawnedInventoryItemCollected(int32 ID);
    void ExecuteUbergraph_BP_TreasureChest_BASE(int32 EntryPoint);
}; // Size: 0x61A

#endif
