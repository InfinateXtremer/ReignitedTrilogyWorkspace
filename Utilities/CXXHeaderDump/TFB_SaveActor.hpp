#ifndef UE4SS_SDK_TFB_SaveActor_HPP
#define UE4SS_SDK_TFB_SaveActor_HPP

class ATFB_SaveActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UFalconSaveLocal_C* FalconSaveLocal;                                        // 0x0320 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0330 (size: 0x8)
    FPhasmidObjectSaveDataList LocalSaveData;                                         // 0x0338 (size: 0x10)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void TFB Save - Restore Handler(FPhasmidObjectSaveDataList objectSaveData, FPhasmidObjectSaveDataList& InputPin, bool Condition);
    void TFBSave - SetParams (Local)(FString Name, float Value, bool Delay Until Checkpoint);
    void TFBSave - SetCollected (Local)(bool Delay Until Checkpoint);
    void UserConstructionScript();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void TFBRestore - Object Was Collected (Local)();
    void TFBRestore - Object Was Collected (Permanent)();
    void TFBRestore - Object Params (Permanent)(FString Name, float Value);
    void TFBRestore - Object Params (Local)(FString Name, float Value);
    void ExecuteUbergraph_TFB_SaveActor(int32 EntryPoint);
}; // Size: 0x348

#endif
