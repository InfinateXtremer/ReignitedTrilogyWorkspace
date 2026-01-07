#ifndef UE4SS_SDK_SaveGame_Mgr_Collect_Local_HPP
#define UE4SS_SDK_SaveGame_Mgr_Collect_Local_HPP

class ASaveGame_Mgr_Collect_Local_C : public ASaveGame_Mgr_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0378 (size: 0x8)
    bool DelayStoreUntilCheckpoint;                                                   // 0x0380 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ExecuteSaveGame(int32 Value);
    void ExecuteUbergraph_SaveGame_Mgr_Collect_Local(int32 EntryPoint);
}; // Size: 0x381

#endif
