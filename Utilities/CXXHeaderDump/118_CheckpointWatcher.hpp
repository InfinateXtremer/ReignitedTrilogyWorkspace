#ifndef UE4SS_SDK_118_CheckpointWatcher_HPP
#define UE4SS_SDK_118_CheckpointWatcher_HPP

class A118_CheckpointWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class ACollectable_Dragon_C* Dragon;                                              // 0x0338 (size: 0x8)
    FPhasmidSoftReference BlowhardSoftRef;                                            // 0x0340 (size: 0x28)
    bool Zapped;                                                                      // 0x0368 (size: 0x1)
    class ASaveFairy_C* LocalFairy;                                                   // 0x0370 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void PlayerReady();
    void FairyCheck();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void FairyStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_118_CheckpointWatcher(int32 EntryPoint);
}; // Size: 0x378

#endif
