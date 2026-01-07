#ifndef UE4SS_SDK_ABP_CES1070_TNTWrangler_HPP
#define UE4SS_SDK_ABP_CES1070_TNTWrangler_HPP

class UABP_CES1070_TNTWrangler_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_EB2D91AC47F1076844684B88C053A9B7;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8DE785834FB48B47EF9EFD88993BC5CB; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_3F8D2442427335356B2B60B3081433F7;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_5D295897416D1FD594E760B12215AA8C; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_08011E5748C0FC0D140CCFB7A311C553;               // 0x0658 (size: 0x68)
    float Direction;                                                                  // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    FRotator Rotation;                                                                // 0x06C8 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    float Time;                                                                       // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1070_TNTWrangler_AnimGraphNode_BlendSpacePlayer_8DE785834FB48B47EF9EFD88993BC5CB();
    void ExecuteUbergraph_ABP_CES1070_TNTWrangler(int32 EntryPoint);
}; // Size: 0x6F0

#endif
