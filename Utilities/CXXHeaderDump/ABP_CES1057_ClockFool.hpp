#ifndef UE4SS_SDK_ABP_CES1057_ClockFool_HPP
#define UE4SS_SDK_ABP_CES1057_ClockFool_HPP

class UABP_CES1057_ClockFool_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3A6E1EF44B4517DF8E560FA10549EB89;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28F46F9F492DA814649DD798405C9F90; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_F3E0D0104901FFA1C1E4FE965DB7719B;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8D2C719D444EAAF87F9B8B8C1D5EFF24; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_9F37247540566AB13A54F099E6BB3726;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1057_ClockFool(int32 EntryPoint);
}; // Size: 0x608

#endif
