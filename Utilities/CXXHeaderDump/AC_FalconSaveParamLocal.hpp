#ifndef UE4SS_SDK_AC_FalconSaveParamLocal_HPP
#define UE4SS_SDK_AC_FalconSaveParamLocal_HPP

class UAC_FalconSaveParamLocal_C : public UActorComponent
{
    FPhasmidObjectSaveDataList objectSaveData;                                        // 0x00F0 (size: 0x10)

    void Save Param(FPhasmidSaveParam& param to save, bool delay storing until checkpoint);
}; // Size: 0x100

#endif
