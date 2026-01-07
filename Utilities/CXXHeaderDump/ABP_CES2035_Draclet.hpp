#ifndef UE4SS_SDK_ABP_CES2035_Draclet_HPP
#define UE4SS_SDK_ABP_CES2035_Draclet_HPP

class UABP_CES2035_Draclet_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_5A2B7CF1410BD01365F6269150C944A6;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7EFD6E1344740472C52262A79C3E4CF7; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_CE812AE34D145F6B913DB89AAAB787DE;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_88BB4CAE49CC7F160EEE789A6079B0BD; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E496E6124EC97F1B26207998A71F7E3F;               // 0x0658 (size: 0x68)
    float Speed;                                                                      // 0x06C0 (size: 0x4)
    float Time;                                                                       // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2035_Draclet_AnimGraphNode_BlendSpacePlayer_7EFD6E1344740472C52262A79C3E4CF7();
    void ExecuteUbergraph_ABP_CES2035_Draclet(int32 EntryPoint);
}; // Size: 0x6E8

#endif
