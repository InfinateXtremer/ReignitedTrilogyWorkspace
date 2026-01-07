#ifndef UE4SS_SDK_ABP_CNS1154_HPP
#define UE4SS_SDK_ABP_CNS1154_HPP

class UABP_CNS1154_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D12C1B5C4CF6D707050A0AA2287FDA8D;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8A52D86B4E1DAA84739D5092F3ABC2EF; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_837FA7564F5082A6F253B2B508B89F1C; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_F7BBCCF9428C3E35E0BB6CB585F65D66;               // 0x05A0 (size: 0x68)
    float Time;                                                                       // 0x0608 (size: 0x4)
    float Speed;                                                                      // 0x060C (size: 0x4)
    float Direction;                                                                  // 0x0610 (size: 0x4)
    FRotator Rotation;                                                                // 0x0614 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x0620 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x0628 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CNS1154(int32 EntryPoint);
}; // Size: 0x630

#endif
