#ifndef UE4SS_SDK_ABP_CBS2003_Ripto_HPP
#define UE4SS_SDK_ABP_CBS2003_Ripto_HPP

class UABP_CBS2003_Ripto_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_FC47E6EA4EEA366B6C68D08CA28E97A8;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DBB2D3514F5434AF7DCA2EBA181F6745; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_1D70A6A74A7D8A84AAAFC3AF8BB2E1DF;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7BF5393A4C79F9EB045C1C876347EDFF; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_7D9395504D6CD75B0713A3942EE6B4CD;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CBS2003_Ripto_AnimGraphNode_BlendSpacePlayer_DBB2D3514F5434AF7DCA2EBA181F6745();
    void ExecuteUbergraph_ABP_CBS2003_Ripto(int32 EntryPoint);
}; // Size: 0x6E8

#endif
