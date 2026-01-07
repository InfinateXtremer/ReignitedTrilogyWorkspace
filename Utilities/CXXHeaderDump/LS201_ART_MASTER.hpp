#ifndef UE4SS_SDK_LS201_ART_MASTER_HPP
#define UE4SS_SDK_LS201_ART_MASTER_HPP

class ALS201_ART_MASTER_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    TSoftObjectPtr<UDataTable> debug menu data table ref;                             // 0x0328 (size: 0x28)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LS201_ART_MASTER(int32 EntryPoint);
}; // Size: 0x350

#endif
