#ifndef UE4SS_SDK_ABP_LS107_Tent_HPP
#define UE4SS_SDK_ABP_LS107_Tent_HPP

class UABP_LS107_Tent_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_DAC427AD4C872E3E2F32B69AE858D733;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0A411F7346DB9BB8E3B9EBB7C946F1FE; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_E01A025042344BA0B32978B86EBF931B;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C0C640094ACBB15477756A8F76092189; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_48B9E48C48535DB93F7AE8BC10C57C4F;               // 0x05A0 (size: 0x68)
    float Time;                                                                       // 0x0608 (size: 0x4)
    float Speed;                                                                      // 0x060C (size: 0x4)
    float Direction;                                                                  // 0x0610 (size: 0x4)
    FRotator Rotation;                                                                // 0x0614 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x0620 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_LS107_Tent(int32 EntryPoint);
}; // Size: 0x628

#endif
