#ifndef UE4SS_SDK_FalconSaveLocal_HPP
#define UE4SS_SDK_FalconSaveLocal_HPP

class UFalconSaveLocal_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    FPhasmidObjectSaveDataList LocalSaveData;                                         // 0x00F8 (size: 0x10)

    void FalconRestoreHandler(Local)(FPhasmidObjectSaveDataList Local Data List, bool Valid, bool& collected, FString& Name, float& Value);
    void FalconSetCollected(Local)(bool Delay Until Checkpoint);
    void FalconSetParam(Local)(FString Name, float Value, bool Delay Until Checkpoint);
    void ExecuteUbergraph_FalconSaveLocal(int32 EntryPoint);
}; // Size: 0x108

#endif
