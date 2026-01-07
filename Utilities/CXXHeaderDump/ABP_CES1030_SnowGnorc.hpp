#ifndef UE4SS_SDK_ABP_CES1030_SnowGnorc_HPP
#define UE4SS_SDK_ABP_CES1030_SnowGnorc_HPP

class UABP_CES1030_SnowGnorc_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A7D936C84B2064A8678D368A7C91711C;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B291DAB94DC96DDC7DBA19A7D2EDB777; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_3FD3C9D64C62BCC5D2B5C98F90F1E928;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_840571EC4510E8DD97878EBF94AE6E97; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_3637A07F4E90313436E834BFCC64EBBD;               // 0x05A0 (size: 0x68)

    void AnimNotify_Rumble();
    void ExecuteUbergraph_ABP_CES1030_SnowGnorc(int32 EntryPoint);
}; // Size: 0x608

#endif
