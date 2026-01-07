#ifndef UE4SS_SDK_ABP_Flower_Tulip_HPP
#define UE4SS_SDK_ABP_Flower_Tulip_HPP

class UABP_Flower_Tulip_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_AD2244874E32DD70E194E090F6E0849E;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0A411F7346DB9BB8E3B9EBB7C946F1FE; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_E01A025042344BA0B32978B86EBF931B;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_E86A02EB412C3BD9465937B620107C8A; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_5048C9F94E8A132C1D031AB667C0602F;               // 0x05A0 (size: 0x68)
    float Time;                                                                       // 0x0608 (size: 0x4)
    float Speed;                                                                      // 0x060C (size: 0x4)
    float Direction;                                                                  // 0x0610 (size: 0x4)
    FRotator Rotation;                                                                // 0x0614 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x0620 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Flower_Tulip(int32 EntryPoint);
}; // Size: 0x628

#endif
