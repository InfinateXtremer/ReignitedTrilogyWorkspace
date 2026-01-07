#ifndef UE4SS_SDK_ABP_CES1020_CannonGnorc_HPP
#define UE4SS_SDK_ABP_CES1020_CannonGnorc_HPP

class UABP_CES1020_CannonGnorc_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_372D60BB4603BF78E4E5E2A9F19D930A;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B27BC34B453ED2FCCCF6019109AEB6AC; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_08300E6F45C7B814411C999D636A81E0;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float TurnRate;                                                                   // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    FVector PrevLocation;                                                             // 0x06E8 (size: 0xC)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1020_CannonGnorc_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ExecuteUbergraph_ABP_CES1020_CannonGnorc(int32 EntryPoint);
}; // Size: 0x6F4

#endif
