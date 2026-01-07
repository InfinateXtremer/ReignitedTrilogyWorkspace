#ifndef UE4SS_SDK_ABP_CES1155B_LampFool_HPP
#define UE4SS_SDK_ABP_CES1155B_LampFool_HPP

class UABP_CES1155B_LampFool_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_EF3B0DCA44C9C17E03D7A3A5158B5794;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_02CA9DEF4BCED2C344D943B190044ABC; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_A9FD010C44110AF5E74DCB9439186342;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CB37333F4860E3F2FCFECDA00D7162EB; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_1C5228B54DC443ABBBA6DAAAEB745077;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_CES1155B_LampFool(int32 EntryPoint);
}; // Size: 0x608

#endif
