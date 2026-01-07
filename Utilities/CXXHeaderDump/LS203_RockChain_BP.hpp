#ifndef UE4SS_SDK_LS203_RockChain_BP_HPP
#define UE4SS_SDK_LS203_RockChain_BP_HPP

class ALS203_RockChain_BP_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class ACNS2110_HulaGirl_Stella_C* Stella;                                         // 0x0330 (size: 0x8)
    bool LSide;                                                                       // 0x0338 (size: 0x1)
    bool Active;                                                                      // 0x0339 (size: 0x1)
    FVector Vector;                                                                   // 0x033C (size: 0xC)
    int32 DebugIndex;                                                                 // 0x0348 (size: 0x4)

    void UserConstructionScript();
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_0(FKey Key);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LS203_RockChain_BP(int32 EntryPoint);
}; // Size: 0x34C

#endif
