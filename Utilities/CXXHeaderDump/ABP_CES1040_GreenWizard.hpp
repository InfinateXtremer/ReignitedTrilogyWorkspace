#ifndef UE4SS_SDK_ABP_CES1040_GreenWizard_HPP
#define UE4SS_SDK_ABP_CES1040_GreenWizard_HPP

class UABP_CES1040_GreenWizard_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D2C090054486ED1535B69080D85B1230;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_BB9FF6BE44FAB329F5EA95BB9E0ED766; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_D95F97A14674ADD97013FD91DFF5DBC6;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1040_GreenWizard_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1040_GreenWizard(int32 EntryPoint);
}; // Size: 0x6E8

#endif
