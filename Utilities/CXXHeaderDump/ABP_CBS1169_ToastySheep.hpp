#ifndef UE4SS_SDK_ABP_CBS1169_ToastySheep_HPP
#define UE4SS_SDK_ABP_CBS1169_ToastySheep_HPP

class UABP_CBS1169_ToastySheep_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4318EEF945113CD8371980A696A46F7F;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2AE7F93D428A0DA9F112EA9B20835C2B; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_D4677C4142AFB056F806C68228A5ADAF;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CBS1169_ToastySheep_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ExecuteUbergraph_ABP_CBS1169_ToastySheep(int32 EntryPoint);
}; // Size: 0x6E8

#endif
