#ifndef UE4SS_SDK_ABP_CES1028_ArmoredGnorc_HPP
#define UE4SS_SDK_ABP_CES1028_ArmoredGnorc_HPP

class UABP_CES1028_ArmoredGnorc_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_236DD0BB495A4CF7D07466B7C6223B7F;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3CBF02F8488C2238A999FFAF194B29EB; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_7CE0DDC24DC0E0BA96C7E7AE7BCB6244;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2E089E2B4B77B27D3F25F4B0A3DDE3B8; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E66590FD417234E0399EB2BF069CCA36;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_StopSliding();
    void AnimNotify_Rumble();
    void ExecuteUbergraph_ABP_CES1028_ArmoredGnorc(int32 EntryPoint);
}; // Size: 0x608

#endif
