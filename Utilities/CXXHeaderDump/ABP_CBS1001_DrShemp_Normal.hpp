#ifndef UE4SS_SDK_ABP_CBS1001_DrShemp_Normal_HPP
#define UE4SS_SDK_ABP_CBS1001_DrShemp_Normal_HPP

class UABP_CBS1001_DrShemp_Normal_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_0F6CA29D47920AC744D2B5BA0B62A8DE;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0424E0CC49AD59F3C92EC0AC1A706257; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_BF5A312E4713288D43AA72BB1A537949;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C96E02D648E99BAD8D997D90FEA29894; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_59048C4B4F2E1306C93077BB4F516252;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_Exposed();
    void AnimNotify_Safe();
    void AnimNotify_Rumble();
    void ExecuteUbergraph_ABP_CBS1001_DrShemp_Normal(int32 EntryPoint);
}; // Size: 0x608

#endif
