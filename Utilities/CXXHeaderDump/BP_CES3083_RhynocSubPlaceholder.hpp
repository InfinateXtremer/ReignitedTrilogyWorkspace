#ifndef UE4SS_SDK_BP_CES3083_RhynocSubPlaceholder_HPP
#define UE4SS_SDK_BP_CES3083_RhynocSubPlaceholder_HPP

class ABP_CES3083_RhynocSubPlaceholder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class APhasmidPatrolPath* Spline;                                                 // 0x0338 (size: 0x8)
    bool CanAttack;                                                                   // 0x0340 (size: 0x1)
    FString CurrentLevelName;                                                         // 0x0348 (size: 0x10)
    FVector SpawnGemLoc;                                                              // 0x0358 (size: 0xC)
    FTimerHandle SpawnTimer;                                                          // 0x0368 (size: 0x8)
    int32 Index;                                                                      // 0x0370 (size: 0x4)
    TArray<EInventoryType> gem types to spawn;                                        // 0x0378 (size: 0x10)
    float spawn interval;                                                             // 0x0388 (size: 0x4)

    bool ForceHasGem(bool& bHasGem);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void SpawnNextGem();
    void Make Set With Equal Value but Minimum Amount of Gems();
    void SpawnNextGemFromTypeList();
    void SpawnGems(FVector Location);
    void UserConstructionScript();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_CES3083_RhynocSubPlaceholder(int32 EntryPoint);
}; // Size: 0x38C

#endif
