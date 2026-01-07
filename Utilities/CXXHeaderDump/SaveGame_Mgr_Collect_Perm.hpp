#ifndef UE4SS_SDK_SaveGame_Mgr_Collect_Perm_HPP
#define UE4SS_SDK_SaveGame_Mgr_Collect_Perm_HPP

class ASaveGame_Mgr_Collect_Perm_C : public ASaveGame_Mgr_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0378 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ExecuteSaveGame(int32 Value);
    void ExecuteUbergraph_SaveGame_Mgr_Collect_Perm(int32 EntryPoint);
}; // Size: 0x380

#endif
