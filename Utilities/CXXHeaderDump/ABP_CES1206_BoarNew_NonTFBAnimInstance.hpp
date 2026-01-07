#ifndef UE4SS_SDK_ABP_CES1206_BoarNew_NonTFBAnimInstance_HPP
#define UE4SS_SDK_ABP_CES1206_BoarNew_NonTFBAnimInstance_HPP

class UABP_CES1206_BoarNew_NonTFBAnimInstance_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A2C07CF24611C7A04C9505B9610562F2;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A0662D2C4CA5C05F72DAF2BE36575D93; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_535C7B49488BE452CB89C1BEC518BB58;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_94A4D72740279007FC3C4CB35874CF2F; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_5797B91A4F64E3AFA13B7292D5DD4D69;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1206_BoarNew_NonTFBAnimInstance_AnimGraphNode_BlendSpacePlayer_A0662D2C4CA5C05F72DAF2BE36575D93();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1206_BoarNew_NonTFBAnimInstance(int32 EntryPoint);
}; // Size: 0x6E8

#endif
