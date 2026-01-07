#ifndef UE4SS_SDK_ABP_CES2037_SpikedMine_HPP
#define UE4SS_SDK_ABP_CES2037_SpikedMine_HPP

class UABP_CES2037_SpikedMine_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B5F2583247B6D7DC85067A8916366514;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_356F0B4240F294778A27B09B554EBE04; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_DEEBEA3A4E499EA4C44A04AF95C658DD;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D523C4FA420CE3B62C26A4AFA8925DAD; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_ED8192704D5BDB13DA9AF7A17E9F717B;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_CES2037_SpikedMine(int32 EntryPoint);
}; // Size: 0x608

#endif
