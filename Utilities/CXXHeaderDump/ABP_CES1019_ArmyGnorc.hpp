#ifndef UE4SS_SDK_ABP_CES1019_ArmyGnorc_HPP
#define UE4SS_SDK_ABP_CES1019_ArmyGnorc_HPP

class UABP_CES1019_ArmyGnorc_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_6948AFC043DB5C5755A667BC8A91748C;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_E8726A464C44D64DD325D8A52B6DE6BB; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_74C4DFD24627E45BC60874A0FDA9827D;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_E5702E2840414B6E8DFCB1BB0F2A94F2; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_6E50FFBB4FC6BE8EBF2B1F807C43C932;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D0 (size: 0xC)
    float Speed;                                                                      // 0x06DC (size: 0x4)
    float Direction;                                                                  // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1019_ArmyGnorc_AnimGraphNode_BlendSpacePlayer_E8726A464C44D64DD325D8A52B6DE6BB();
    void ExecuteUbergraph_ABP_CES1019_ArmyGnorc(int32 EntryPoint);
}; // Size: 0x6F0

#endif
