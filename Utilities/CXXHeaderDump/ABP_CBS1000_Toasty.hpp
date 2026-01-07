#ifndef UE4SS_SDK_ABP_CBS1000_Toasty_HPP
#define UE4SS_SDK_ABP_CBS1000_Toasty_HPP

class UABP_CBS1000_Toasty_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_10AAA15A46CF03637F9415B493FBB832;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A8DA2F16458FFC3CCB695FAAE70C539D; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_0189449D4842AF7CF4543A8D35A42676;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    int32 Count;                                                                      // 0x06E8 (size: 0x4)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CBS1000_Toasty_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void AnimNotify_PreAttack1_End();
    void ExecuteUbergraph_ABP_CBS1000_Toasty(int32 EntryPoint);
}; // Size: 0x6EC

#endif
