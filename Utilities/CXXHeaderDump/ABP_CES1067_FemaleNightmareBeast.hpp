#ifndef UE4SS_SDK_ABP_CES1067_FemaleNightmareBeast_HPP
#define UE4SS_SDK_ABP_CES1067_FemaleNightmareBeast_HPP

class UABP_CES1067_FemaleNightmareBeast_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1CB5B49A48637026CAF13B99CF7B1193;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_226713A14A4E2116A21F8D8FA773D8E9; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_7D1346D6417D1DA8006E0195B4B293A5;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06D8 (size: 0x8)
    float IdleOffset;                                                                 // 0x06E0 (size: 0x4)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1067_FemaleNightmareBeast_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ExecuteUbergraph_ABP_CES1067_FemaleNightmareBeast(int32 EntryPoint);
}; // Size: 0x6E4

#endif
