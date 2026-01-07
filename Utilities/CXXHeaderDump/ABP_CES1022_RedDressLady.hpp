#ifndef UE4SS_SDK_ABP_CES1022_RedDressLady_HPP
#define UE4SS_SDK_ABP_CES1022_RedDressLady_HPP

class UABP_CES1022_RedDressLady_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_F74091AE4FD76F723775DB9D63523E3C;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_629EA71B4C0B7193229C58B11D6A5B3F; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_EA5B63864E03A306FE62DFB69D1A0706;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B783CA82453AF5ED5433AA833E99EAA1; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_74440DB742D0B5872D86A786F39A510E;               // 0x05A0 (size: 0x68)
    class ABP_CES1022_RedDressLady_C* RedDressLady;                                   // 0x0608 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_Slap1();
    void AnimNotify_Slap2();
    void AnimNotify_Slap3();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_CES1022_RedDressLady(int32 EntryPoint);
}; // Size: 0x610

#endif
