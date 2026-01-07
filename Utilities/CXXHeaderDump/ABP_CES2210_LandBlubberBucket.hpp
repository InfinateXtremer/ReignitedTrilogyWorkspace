#ifndef UE4SS_SDK_ABP_CES2210_LandBlubberBucket_HPP
#define UE4SS_SDK_ABP_CES2210_LandBlubberBucket_HPP

class UABP_CES2210_LandBlubberBucket_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_110C080B435FA8A08F6E9BAA19214EF8;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19FB46F947D884DE9443DDAD3A6D4404; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_7F73D0EE40C967E669CB3E83620A8212;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A2D0875C45FFF0E52EDB689F7E28CA34; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_7B303BE445434870DD04188F1EB67426;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_CES2210_LandBlubberBucket(int32 EntryPoint);
}; // Size: 0x608

#endif
