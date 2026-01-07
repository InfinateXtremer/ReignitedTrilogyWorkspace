#ifndef UE4SS_SDK_BP_TreasureChest_Spring_HPP
#define UE4SS_SDK_BP_TreasureChest_Spring_HPP

class ABP_TreasureChest_Spring_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UParticleSystemComponent* PS_Bounce;                                        // 0x0628 (size: 0x8)
    class UParticleSystemComponent* PS_Fracture;                                      // 0x0630 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0638 (size: 0x8)
    class UStaticMeshComponent* FakeGem;                                              // 0x0640 (size: 0x8)
    float SpringChest_Offset_Offset_D279473843285F9F83BC3E9D195F27AE;                 // 0x0648 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpringChest_Offset__Direction_D279473843285F9F83BC3E9D195F27AE; // 0x064C (size: 0x1)
    class UTimelineComponent* SpringChest_Offset;                                     // 0x0650 (size: 0x8)
    bool SpringGemActive?;                                                            // 0x0658 (size: 0x1)
    class ABP_Loot_BASE_C* CurrentGem;                                                // 0x0660 (size: 0x8)
    bool SpringChestComplete?;                                                        // 0x0668 (size: 0x1)
    bool gemSpawnPreventActive;                                                       // 0x0669 (size: 0x1)
    TMap<TEnumAsByte<LootType_Enum::Type>, UMaterialInstance*> ColorToMatStatic;      // 0x0670 (size: 0x50)
    TEnumAsByte<LootType_Enum::Type> GemColorInside;                                  // 0x06C0 (size: 0x1)
    TMap<TEnumAsByte<LootType_Enum::Type>, UParticleSystem*> ColorToFracturePS;       // 0x06C8 (size: 0x50)
    TMap<TEnumAsByte<LootType_Enum::Type>, UParticleSystem*> ColorToBouncePS;         // 0x0718 (size: 0x50)
    FGameplayTagContainer SpecialDamageTags;                                          // 0x0768 (size: 0x20)
    FVector GemSpawnLocation;                                                         // 0x0788 (size: 0xC)

    void derive damage values(FVector& Hit Direction, FVector& Impulse Dir, float& Impulse Strength);
    void get gem spawn location(FVector& Spawn Location);
    void UserConstructionScript();
    void SpringChest_Offset__FinishedFunc();
    void SpringChest_Offset__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_TreasureChest_Spring(int32 EntryPoint);
}; // Size: 0x794

#endif
