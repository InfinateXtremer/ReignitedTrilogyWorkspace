#ifndef UE4SS_SDK_ABP_CES2020_Snorkler_HPP
#define UE4SS_SDK_ABP_CES2020_Snorkler_HPP

class UABP_CES2020_Snorkler_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_6BCFA2C54840CFC98F7A1BA5AB6EF9BC;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5E11535648D185461D78CD9AE9C4FA04; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_2EE52E1D410B3AF6511ECE9582FD9FEE;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7A0D41FF431B3D4EAF3AB59D85D215CA; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_BC25D5024FABED708CA0ADBCE002D136;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_CES2020_Snorkler(int32 EntryPoint);
}; // Size: 0x608

#endif
