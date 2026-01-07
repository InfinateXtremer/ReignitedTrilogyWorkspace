#ifndef UE4SS_SDK_ABP_CES1039_TornadoWizard_HPP
#define UE4SS_SDK_ABP_CES1039_TornadoWizard_HPP

class UABP_CES1039_TornadoWizard_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_CE4DFAF545A89AE0ECD73FB5338C2762;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_849ED56D49508CFFC2C8358C667513CF; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_589A8B9B4017AA0638916C83C432BA15;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_43C69ED444830527DFDB3CBBAE4101D7; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_BA7CDBBD4903C21700ABC2AA2ADF0D9D;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1039_TornadoWizard_AnimGraphNode_BlendSpacePlayer_849ED56D49508CFFC2C8358C667513CF();
    void ExecuteUbergraph_ABP_CES1039_TornadoWizard(int32 EntryPoint);
}; // Size: 0x6E8

#endif
