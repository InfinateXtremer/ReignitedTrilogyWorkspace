#ifndef UE4SS_SDK_ABP_CNS1167_HPP
#define UE4SS_SDK_ABP_CNS1167_HPP

class UABP_CNS1167_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_39BCCA3A4971C5011EC637A09DAD0715;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B01CD71F48CA888B045501886A606568; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_B0B46F9643D4ABC38BB1F3B60ED1EE1C;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_52BB8E9449BF7C3F3BC2F5A061FDE23C; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_EF6658F048B1EB3C6ACFCBAA5011294A;               // 0x05A0 (size: 0x68)
    float Time;                                                                       // 0x0608 (size: 0x4)
    float Speed;                                                                      // 0x060C (size: 0x4)
    float Direction;                                                                  // 0x0610 (size: 0x4)
    FRotator Rotation;                                                                // 0x0614 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x0620 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x0628 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CNS1167(int32 EntryPoint);
}; // Size: 0x630

#endif
