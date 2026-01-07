#ifndef UE4SS_SDK_ABP_CES2007_BrownLizard_HPP
#define UE4SS_SDK_ABP_CES2007_BrownLizard_HPP

class UABP_CES2007_BrownLizard_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_50B552F14972BFC4C7B76AB5E7C202DF;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2C841F7E440BEE556418D1A6DBF5DEF2; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_B16ABA0C42399886F787CBB28DDD7337;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_BF21635C45F5BAE74D1086BA383DA43A; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_D64ADDE344CBAAE48C4C39A6F43D8C2F;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_Rumble();
    void ExecuteUbergraph_ABP_CES2007_BrownLizard(int32 EntryPoint);
}; // Size: 0x608

#endif
