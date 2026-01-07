#ifndef UE4SS_SDK_ABP_CES2024_GearGrinderThief_HPP
#define UE4SS_SDK_ABP_CES2024_GearGrinderThief_HPP

class UABP_CES2024_GearGrinderThief_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_69A2414840C3D4432042F082BAA5C6A4;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_01D2634B40ABDA63A8A8C9B1B6E1126B; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_4E30FBB948B0D789284706B19F6D766B;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_5B202DEA40341F1C990D14AB6EFD57E1; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_A0EA41CC472B061E62F70E8BB99D6BF9;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2024_GearGrinderThief_AnimGraphNode_BlendSpacePlayer_01D2634B40ABDA63A8A8C9B1B6E1126B();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2024_GearGrinderThief(int32 EntryPoint);
}; // Size: 0x6E8

#endif
