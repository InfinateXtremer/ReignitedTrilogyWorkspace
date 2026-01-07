#ifndef UE4SS_SDK_BP_TreasureChest_Spinning_HPP
#define UE4SS_SDK_BP_TreasureChest_Spinning_HPP

class ABP_TreasureChest_Spinning_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UParticleSystemComponent* FakeGemVFX;                                       // 0x0628 (size: 0x8)
    class UStaticMeshComponent* FakeGem;                                              // 0x0630 (size: 0x8)
    class UStaticMeshComponent* spinning_top;                                         // 0x0638 (size: 0x8)
    float Spinning_VertControl_PErcent_BCF276C442C9EE3205963E87769BE22E;              // 0x0640 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Spinning_VertControl__Direction_BCF276C442C9EE3205963E87769BE22E; // 0x0644 (size: 0x1)
    class UTimelineComponent* Spinning_VertControl;                                   // 0x0648 (size: 0x8)
    float SpinRate;                                                                   // 0x0650 (size: 0x4)
    bool isCooldownActive;                                                            // 0x0654 (size: 0x1)
    class AActor* DebrisTarget;                                                       // 0x0658 (size: 0x8)
    bool foundDebrisTarget;                                                           // 0x0660 (size: 0x1)
    class UAkAudioEvent* SFX_SpinLoop;                                                // 0x0668 (size: 0x8)
    float Spinning_MaxOffset;                                                         // 0x0670 (size: 0x4)
    float Spinning_BreakingRate;                                                      // 0x0674 (size: 0x4)
    float Spinning_OffsetPErcent;                                                     // 0x0678 (size: 0x4)
    TEnumAsByte<LootType_Enum::Type> GemColorInside;                                  // 0x067C (size: 0x1)
    TMap<TEnumAsByte<LootType_Enum::Type>, UMaterialInstance*> LootToMat;             // 0x0680 (size: 0x50)
    TMap<TEnumAsByte<LootType_Enum::Type>, UParticleSystem*> LootToVFX;               // 0x06D0 (size: 0x50)
    FVector SpinTop_Origin;                                                           // 0x0720 (size: 0xC)
    FVector SpinTop_Spinning;                                                         // 0x072C (size: 0xC)
    float XRotation;                                                                  // 0x0738 (size: 0x4)
    float ProjectileArcParam;                                                         // 0x073C (size: 0x4)
    TArray<class AActor*> Targets_EnemiesOnly;                                        // 0x0740 (size: 0x10)
    TArray<class AActor*> Targets_ChestsOnly;                                         // 0x0750 (size: 0x10)
    TArray<class AActor*> Targets_FodderOnly;                                         // 0x0760 (size: 0x10)
    TArray<class AActor*> NewVar_0;                                                   // 0x0770 (size: 0x10)
    FGameplayTagContainer CustomProjectileDamage;                                     // 0x0780 (size: 0x20)
    float SavedDeltaTime;                                                             // 0x07A0 (size: 0x4)

    void UpdateSFX();
    void UserConstructionScript();
    void Spinning_VertControl__FinishedFunc();
    void Spinning_VertControl__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_TreasureChest_Spinning(int32 EntryPoint);
}; // Size: 0x7A4

#endif
