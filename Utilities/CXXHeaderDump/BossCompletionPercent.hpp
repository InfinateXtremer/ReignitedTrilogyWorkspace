#ifndef UE4SS_SDK_BossCompletionPercent_HPP
#define UE4SS_SDK_BossCompletionPercent_HPP

class ABossCompletionPercent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* Boss;                                                               // 0x0330 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0338 (size: 0x1)
    FName stateName;                                                                  // 0x0340 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveBeginPlay();
    void OnStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BossCompletionPercent(int32 EntryPoint);
}; // Size: 0x348

#endif
