#ifndef UE4SS_SDK_ABP_CES1024_KamikazeTribesman_HPP
#define UE4SS_SDK_ABP_CES1024_KamikazeTribesman_HPP

class UABP_CES1024_KamikazeTribesman_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5165764E4F4DBE7503A58990889837B9;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2FD4BBC14C1A59F8D4D4E49A7D89B8EB; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_21EBF4E94A776A90E3A605B69E81B0DC;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_118664174AB12EA807AC358567BDB5DC; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_4E0B135F4C9D0A64920201BF3EAEA747;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1024_KamikazeTribesman(int32 EntryPoint);
}; // Size: 0x608

#endif
