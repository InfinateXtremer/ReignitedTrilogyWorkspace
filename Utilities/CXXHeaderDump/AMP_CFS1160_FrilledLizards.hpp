#ifndef UE4SS_SDK_AMP_CFS1160_FrilledLizards_HPP
#define UE4SS_SDK_AMP_CFS1160_FrilledLizards_HPP

class UAMP_CFS1160_FrilledLizards_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A76906F74AB12EB057DF60B1FC9D9231;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_978FCC6E4C3245AE4FF8668738EEE727; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_6FD4BDC84D2C22000FB2458EE58FF7E0;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C1E50BA94947ACFBBF7A16958DEC6070; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_41E1F26B4B09841D26FB5DBD63890622;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AMP_CFS1160_FrilledLizards_AnimGraphNode_BlendSpacePlayer_978FCC6E4C3245AE4FF8668738EEE727();
    void AnimNotify_SpawnButterfly();
    void ExecuteUbergraph_AMP_CFS1160_FrilledLizards(int32 EntryPoint);
}; // Size: 0x6E8

#endif
