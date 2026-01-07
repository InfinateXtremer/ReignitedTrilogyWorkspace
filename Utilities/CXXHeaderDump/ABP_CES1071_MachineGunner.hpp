#ifndef UE4SS_SDK_ABP_CES1071_MachineGunner_HPP
#define UE4SS_SDK_ABP_CES1071_MachineGunner_HPP

class UABP_CES1071_MachineGunner_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5F9350B34B015CF42777E9AC1B779AF0;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_75A8ED7C44CC7AFB8975A0B811282BDE; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_8EE25E3242F27AE0AFFA6299B0E332DD;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F3978613498F9CA46F19AC97F66168E6; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_160568E54DD32CF7BA5418BCCA50F171;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06C8 (size: 0x8)
    class ACharacter* BaseCharacter;                                                  // 0x06D0 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D8 (size: 0xC)
    float Speed;                                                                      // 0x06E4 (size: 0x4)
    float Direction;                                                                  // 0x06E8 (size: 0x4)

    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1071_MachineGunner_AnimGraphNode_BlendSpacePlayer_75A8ED7C44CC7AFB8975A0B811282BDE();
    void ExecuteUbergraph_ABP_CES1071_MachineGunner(int32 EntryPoint);
}; // Size: 0x6EC

#endif
