#ifndef UE4SS_SDK_ABP_CBS1004_Jacques_HPP
#define UE4SS_SDK_ABP_CBS1004_Jacques_HPP

class UABP_CBS1004_Jacques_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Slot AnimGraphNode_Slot_68BF133741BC12AAC0EFDBA6B1FA219E;               // 0x03C8 (size: 0x68)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0430 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0558 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_99EE2B0040B6797FA000258DD82D4217; // 0x05A0 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_Root_7F1361DB4E323948258D30BDF06BBB29;               // 0x0678 (size: 0x48)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06C8 (size: 0x8)
    bool isDying;                                                                     // 0x06D0 (size: 0x1)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CBS1004_Jacques_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CBS1004_Jacques(int32 EntryPoint);
}; // Size: 0x6D1

#endif
