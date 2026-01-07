#ifndef UE4SS_SDK_BP_CBS1004_Jacaques_BossWatcher_HPP
#define UE4SS_SDK_BP_CBS1004_Jacaques_BossWatcher_HPP

class ABP_CBS1004_Jacaques_BossWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void BossIsDead();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_CBS1004_Jacaques_BossWatcher(int32 EntryPoint);
}; // Size: 0x330

#endif
