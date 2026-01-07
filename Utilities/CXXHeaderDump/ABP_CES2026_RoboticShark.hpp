#ifndef UE4SS_SDK_ABP_CES2026_RoboticShark_HPP
#define UE4SS_SDK_ABP_CES2026_RoboticShark_HPP

class UABP_CES2026_RoboticShark_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_744085A044F6E35DF2790ABD27E0FD4F;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97BC9C134B5A7DB4769EB2A778B2F7DF; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_F6A3906D4F5F1B194B6446A6AF7D0FB6;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B611CD974CB88B36F64306A89BD8856D; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_01CE1A6A43B3A35D00BD7A81CC11AB5D;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2026_RoboticShark(int32 EntryPoint);
}; // Size: 0x608

#endif
