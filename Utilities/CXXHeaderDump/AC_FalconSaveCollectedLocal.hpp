#ifndef UE4SS_SDK_AC_FalconSaveCollectedLocal_HPP
#define UE4SS_SDK_AC_FalconSaveCollectedLocal_HPP

class UAC_FalconSaveCollectedLocal_C : public UActorComponent
{
    FPhasmidObjectSaveDataList objectSaveData;                                        // 0x00F0 (size: 0x10)

    void set collected(bool delay storing until checkpoint);
}; // Size: 0x100

#endif
