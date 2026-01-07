#ifndef UE4SS_SDK_SaveGame_Mgr_Param_Local_HPP
#define UE4SS_SDK_SaveGame_Mgr_Param_Local_HPP

class ASaveGame_Mgr_Param_Local_C : public ASaveGame_Mgr_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0378 (size: 0x8)
    TArray<class AActor*> UpdateActors;                                               // 0x0380 (size: 0x10)

    void UserConstructionScript();
    void ExecuteSaveGame(int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void ExecuteUbergraph_SaveGame_Mgr_Param_Local(int32 EntryPoint);
}; // Size: 0x390

#endif
