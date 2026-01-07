#ifndef UE4SS_SDK_ABP_CES1033_Beast_HPP
#define UE4SS_SDK_ABP_CES1033_Beast_HPP

class UABP_CES1033_Beast_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_28B167774C71F8A82821D7A87446E0D1;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D9088A9C4AD6C94E20181E986B462981; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E8D462D14C0A580F93DEFFA51A17CAC6;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    float Yaw;                                                                        // 0x06E8 (size: 0x4)
    float PreviousYaw;                                                                // 0x06EC (size: 0x4)
    float TurnRate;                                                                   // 0x06F0 (size: 0x4)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1033_Beast_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ExecuteUbergraph_ABP_CES1033_Beast(int32 EntryPoint);
}; // Size: 0x6F4

#endif
