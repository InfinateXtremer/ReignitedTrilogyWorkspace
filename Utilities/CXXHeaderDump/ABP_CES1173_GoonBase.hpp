#ifndef UE4SS_SDK_ABP_CES1173_GoonBase_HPP
#define UE4SS_SDK_ABP_CES1173_GoonBase_HPP

class UABP_CES1173_GoonBase_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_661DB0104DCD0770DFC815A11CFB5CB2;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_6BCFD2334F9B77AF38D773AAABD638FD; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_9C53A219441CF1850F375D94E76B543A;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1173_GoonBase_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void SetIdleStartOffset(float OffsetPercent);
    void ExecuteUbergraph_ABP_CES1173_GoonBase(int32 EntryPoint);
}; // Size: 0x6E8

#endif
