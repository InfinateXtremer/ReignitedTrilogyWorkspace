#ifndef UE4SS_SDK_ABP_CES2034_HornedRabbit_HPP
#define UE4SS_SDK_ABP_CES2034_HornedRabbit_HPP

class UABP_CES2034_HornedRabbit_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_9230ED564FB0430D457639A3A9D8751F;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7503AF3B4E985CD5CD48CF8920E400FE; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_664239B34553B17EE62869821AE4B216;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F67DD8CE4E2ECCD7EABF439D85457D7D; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_CBAD97FF404B25EF95BE76A575F50A31;               // 0x0658 (size: 0x68)
    float Speed;                                                                      // 0x06C0 (size: 0x4)
    float Time;                                                                       // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2034_HornedRabbit_AnimGraphNode_BlendSpacePlayer_7503AF3B4E985CD5CD48CF8920E400FE();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2034_HornedRabbit(int32 EntryPoint);
}; // Size: 0x6E8

#endif
