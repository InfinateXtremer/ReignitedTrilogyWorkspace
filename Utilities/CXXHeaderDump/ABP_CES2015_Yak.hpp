#ifndef UE4SS_SDK_ABP_CES2015_Yak_HPP
#define UE4SS_SDK_ABP_CES2015_Yak_HPP

class UABP_CES2015_Yak_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A7CA92484F1A291AB4266A8D83B78291;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19E6529645AD3C8C1A59B7B3EB9AB3A8; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_44A6D8D94EDEBB8DE0D51F8380B0477A;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7E2B67BD4A75D2B23194D4AB158E1B1E; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_DCA959374F7450EEC90B4EBB15EB61F0;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06D0 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D8 (size: 0xC)
    float Speed;                                                                      // 0x06E4 (size: 0x4)
    float Direction;                                                                  // 0x06E8 (size: 0x4)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2015_Yak_AnimGraphNode_BlendSpacePlayer_19E6529645AD3C8C1A59B7B3EB9AB3A8();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2015_Yak(int32 EntryPoint);
}; // Size: 0x6EC

#endif
