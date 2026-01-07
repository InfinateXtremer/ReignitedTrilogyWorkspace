#ifndef UE4SS_SDK_BP_TreasureChest_Stick_HPP
#define UE4SS_SDK_BP_TreasureChest_Stick_HPP

class ABP_TreasureChest_Stick_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UStaticMeshComponent* FakeGem;                                              // 0x0628 (size: 0x8)
    class UArrowComponent* GemSpawn;                                                  // 0x0630 (size: 0x8)
    FVector ShakeStick_NewTrack_0_988EA948422D7BE8B9B599A756AA7BFB;                   // 0x0638 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> ShakeStick__Direction_988EA948422D7BE8B9B599A756AA7BFB; // 0x0644 (size: 0x1)
    class UTimelineComponent* ShakeStick;                                             // 0x0648 (size: 0x8)
    TArray<FName> Charge;                                                             // 0x0650 (size: 0x10)
    class ABP_Loot_BASE_C* TopGem;                                                    // 0x0660 (size: 0x8)
    float shakeMagnitude;                                                             // 0x0668 (size: 0x4)
    TMap<TEnumAsByte<LootType_Enum::Type>, UMaterialInstance*> ColorToMat;            // 0x0670 (size: 0x50)
    TEnumAsByte<LootType_Enum::Type> GemColor;                                        // 0x06C0 (size: 0x1)
    int32 LootSpawnIndex;                                                             // 0x06C4 (size: 0x4)

    void get gem spawn location(FVector& Spawn Location);
    void UserConstructionScript();
    void ShakeStick__FinishedFunc();
    void ShakeStick__UpdateFunc();
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restore save data(FPhasmidObjectSaveDataList data list);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TreasureChest_Stick(int32 EntryPoint);
}; // Size: 0x6C8

#endif
