#ifndef UE4SS_SDK_ABP_CES107_HPP
#define UE4SS_SDK_ABP_CES107_HPP

class UABP_CES107_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2E35EF454DEFAD9E2CA1D1BCCB6EEE47;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1E53F0C04B37A74B7D8075A50A829340; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_E01A025042344BA0B32978B86EBF931B;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_523D0E1648D6C865866446AAF83CDFF3; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_8FA7581D492FD154F18758A37E666EC8;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    float Yaw;                                                                        // 0x06E8 (size: 0x4)
    float PreviousYaw;                                                                // 0x06EC (size: 0x4)
    float TurnRate;                                                                   // 0x06F0 (size: 0x4)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES107_AnimGraphNode_BlendSpacePlayer_1E53F0C04B37A74B7D8075A50A829340();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES107(int32 EntryPoint);
}; // Size: 0x6F4

#endif
