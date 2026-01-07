#ifndef UE4SS_SDK_ABP_CFS1163_SpottedChicken_HPP
#define UE4SS_SDK_ABP_CFS1163_SpottedChicken_HPP

class UABP_CFS1163_SpottedChicken_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_CA2037B34B8E6824B1B5F1800D491C65;               // 0x03C8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_72BF98584CE756DB51C4EF96B1C90014;               // 0x0410 (size: 0x68)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9A5AD9E643F2EAC0A00BADADF929FCA7; // 0x0478 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_4C73E0BC485EFE373C75B8B2B27240AF;        // 0x05A0 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_39BCA2B042C4A047358329A48DFD0F30; // 0x05E8 (size: 0xD8)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS1163_SpottedChicken_AnimGraphNode_BlendSpacePlayer_9A5AD9E643F2EAC0A00BADADF929FCA7();
    void ExecuteUbergraph_ABP_CFS1163_SpottedChicken(int32 EntryPoint);
}; // Size: 0x6E8

#endif
