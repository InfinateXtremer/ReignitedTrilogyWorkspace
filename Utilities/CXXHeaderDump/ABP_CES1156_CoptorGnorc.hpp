#ifndef UE4SS_SDK_ABP_CES1156_CoptorGnorc_HPP
#define UE4SS_SDK_ABP_CES1156_CoptorGnorc_HPP

class UABP_CES1156_CoptorGnorc_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_17AB06FE4BB91B44F84B91A3B0CDEB30;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D70CC73A4CD0DAF5C7FE9DAC7813F315; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_8E9F3A95485C288C7E6ADC9EF90FF404;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_79C6D253411A862228943C8B9A92F764; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_509DF2864FBC093957CE5B8F888D34C2;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1156_CoptorGnorc_AnimGraphNode_BlendSpacePlayer_D70CC73A4CD0DAF5C7FE9DAC7813F315();
    void ExecuteUbergraph_ABP_CES1156_CoptorGnorc(int32 EntryPoint);
}; // Size: 0x6E8

#endif
