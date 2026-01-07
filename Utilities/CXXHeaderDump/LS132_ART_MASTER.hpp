#ifndef UE4SS_SDK_LS132_ART_MASTER_HPP
#define UE4SS_SDK_LS132_ART_MASTER_HPP

class ALS132_ART_MASTER_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)

    void InpActEvt_X_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_LS132_ART_MASTER(int32 EntryPoint);
}; // Size: 0x328

#endif
