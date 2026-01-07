#ifndef UE4SS_SDK_ABP_CES1058B_DemonDog_HPP
#define UE4SS_SDK_ABP_CES1058B_DemonDog_HPP

class UABP_CES1058B_DemonDog_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_79766222469388144F6F60911CC2984A;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7F932ED84CA5399E89D843B41C2A9FAB; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_ECBFC97D4FE35EE31AE609812EEB8B57;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_77087AD3446F3C5FA09DDE9EEAFDBA74; // 0x04C8 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_7D5F45814E0A21CEF901F18AF863CDB0;        // 0x05A0 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_3F5831EA4B29D5D0C061449D9592B922; // 0x05E8 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_082790104F0710E97546CFAA75EE165D;        // 0x06C0 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_18A11443453F1863B5977983AB3FC953; // 0x0708 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_896F37254538E0A7FA9C2DA2A8C83D3C;               // 0x07E0 (size: 0x68)
    float BlendTime;                                                                  // 0x0848 (size: 0x4)

    void ExecuteUbergraph_ABP_CES1058B_DemonDog(int32 EntryPoint);
}; // Size: 0x84C

#endif
