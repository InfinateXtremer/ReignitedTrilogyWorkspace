#ifndef UE4SS_SDK_ABP_Cactus_Ground_1_HPP
#define UE4SS_SDK_ABP_Cactus_Ground_1_HPP

class UABP_Cactus_Ground_1_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_102C28854DCEEEDAD445CCB51BBF378D;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16681B6A414B35E10930B2A8C0575410; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_765E282C4E1A88733EAD13B20B64886D;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C29994CC4E947C4942421BAC458196E3; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_4F5CDD44446071C4F0AEC88548BABF68;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_Cactus_Ground_1(int32 EntryPoint);
}; // Size: 0x608

#endif
