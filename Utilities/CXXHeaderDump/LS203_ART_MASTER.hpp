#ifndef UE4SS_SDK_LS203_ART_MASTER_HPP
#define UE4SS_SDK_LS203_ART_MASTER_HPP

class ALS203_ART_MASTER_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LS203_ART_MASTER(int32 EntryPoint);
}; // Size: 0x328

#endif
