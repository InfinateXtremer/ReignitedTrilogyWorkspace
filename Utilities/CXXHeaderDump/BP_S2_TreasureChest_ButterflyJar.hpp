#ifndef UE4SS_SDK_BP_S2_TreasureChest_ButterflyJar_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_ButterflyJar_HPP

class ABP_S2_TreasureChest_ButterflyJar_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class USP3_HomingTargetComponent* SP3_HomingTarget;                               // 0x0628 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0630 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_S2_TreasureChest_ButterflyJar(int32 EntryPoint);
}; // Size: 0x638

#endif
