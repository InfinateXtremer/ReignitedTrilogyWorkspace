#ifndef UE4SS_SDK_ABP_CES1010_SleepingDog_HPP
#define UE4SS_SDK_ABP_CES1010_SleepingDog_HPP

class UABP_CES1010_SleepingDog_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_86A45FA441802BC2578412893A112C89;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2B8FB20C42B06723AEF330AB0605A06A; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_B40049DE4C55117DFDAAE5A09BFDE669;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    int32 IdleCount;                                                                  // 0x06E8 (size: 0x4)
    float IdleStartOffset;                                                            // 0x06EC (size: 0x4)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1010_SleepingDog_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void AnimNotify_Idle1_End();
    void SetIdleStartOffset(float OffsetPercent);
    void ExecuteUbergraph_ABP_CES1010_SleepingDog(int32 EntryPoint);
}; // Size: 0x6F0

#endif
