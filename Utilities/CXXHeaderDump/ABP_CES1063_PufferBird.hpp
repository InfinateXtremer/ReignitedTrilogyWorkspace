#ifndef UE4SS_SDK_ABP_CES1063_PufferBird_HPP
#define UE4SS_SDK_ABP_CES1063_PufferBird_HPP

class UABP_CES1063_PufferBird_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_9465FAF145C435DBB80E218B4503A064;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5F2E43A24EADC29B806D44BC6A5AF1A1; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_9CDFF43341A29BCEBAF7C8AF63D0B788;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_76C23B8B40D3D0C19C38DFA1A9E3480D; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_3E4537674A086B8EF0F56088C30DA1EE;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1063_PufferBird(int32 EntryPoint);
}; // Size: 0x608

#endif
