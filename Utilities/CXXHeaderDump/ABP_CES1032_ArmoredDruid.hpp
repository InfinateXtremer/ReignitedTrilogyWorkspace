#ifndef UE4SS_SDK_ABP_CES1032_ArmoredDruid_HPP
#define UE4SS_SDK_ABP_CES1032_ArmoredDruid_HPP

class UABP_CES1032_ArmoredDruid_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_EE4D432B47C4DA39E4C4BFB1A8CA4A8F;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CDEC31164D10C8885332C7953E012008; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_7B026E3B462CAF0CDE996A832B1BD783;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1032_ArmoredDruid_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1032_ArmoredDruid(int32 EntryPoint);
}; // Size: 0x6E8

#endif
