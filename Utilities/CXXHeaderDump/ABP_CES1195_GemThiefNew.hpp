#ifndef UE4SS_SDK_ABP_CES1195_GemThiefNew_HPP
#define UE4SS_SDK_ABP_CES1195_GemThiefNew_HPP

class UABP_CES1195_GemThiefNew_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2DAE3AD147BF07F827272FB7099805F0;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_581DD95C4C6817BE6F6AA08BA69716AC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_917DF85948C2D83A940F90924761FA20;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9BD0CE9E4B55F1417327D2B3ACBF5E50; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_CB8E89A747B1A40504DE698E36D459A4;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D0 (size: 0xC)
    float Speed;                                                                      // 0x06DC (size: 0x4)
    float Direction;                                                                  // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1195_GemThiefNew_AnimGraphNode_BlendSpacePlayer_581DD95C4C6817BE6F6AA08BA69716AC();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_Bounce1();
    void ExecuteUbergraph_ABP_CES1195_GemThiefNew(int32 EntryPoint);
}; // Size: 0x6F0

#endif
