#ifndef UE4SS_SDK_AC_FalconSaveCollectedPerm_HPP
#define UE4SS_SDK_AC_FalconSaveCollectedPerm_HPP

class UAC_FalconSaveCollectedPerm_C : public UPhasmidObjectSaveComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0100 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void set collected();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_AC_FalconSaveCollectedPerm(int32 EntryPoint);
}; // Size: 0x108

#endif
