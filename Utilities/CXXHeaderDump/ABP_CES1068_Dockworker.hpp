#ifndef UE4SS_SDK_ABP_CES1068_Dockworker_HPP
#define UE4SS_SDK_ABP_CES1068_Dockworker_HPP

class UABP_CES1068_Dockworker_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1B10487B41C4D07E30536292484BC6D6;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_FC72FED64CC0661B74753BAE8BA22516; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_4F6D174E4B31B28264B463A75C59A403;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_89D33971468FD25D8C59018A1FAE6F76; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E0FFA5384FCF8C8195B071A578F9B3F4;               // 0x0658 (size: 0x68)
    float Direction;                                                                  // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    FRotator Rotation;                                                                // 0x06C8 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    float Time;                                                                       // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1068_Dockworker_AnimGraphNode_BlendSpacePlayer_FC72FED64CC0661B74753BAE8BA22516();
    void ExecuteUbergraph_ABP_CES1068_Dockworker(int32 EntryPoint);
}; // Size: 0x6F0

#endif
