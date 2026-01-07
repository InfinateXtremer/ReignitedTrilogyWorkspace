#ifndef UE4SS_SDK_ABP_CES1061_GnorcBalloonist_HPP
#define UE4SS_SDK_ABP_CES1061_GnorcBalloonist_HPP

class UABP_CES1061_GnorcBalloonist_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_91BCE0644590162709E89C82C0DADB2F;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D0CB7737469223A6B11FC08F492A5581; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_83BAB5044527391CD067B3B8A36A846E;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C1763AB44EB1EA6C8F6BA581EF9F5454; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_4EDF15B0451B965FA650908BF71EF6E7;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1061_GnorcBalloonist(int32 EntryPoint);
}; // Size: 0x608

#endif
