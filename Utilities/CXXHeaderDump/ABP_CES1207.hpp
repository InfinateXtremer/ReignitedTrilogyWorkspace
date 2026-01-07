#ifndef UE4SS_SDK_ABP_CES1207_HPP
#define UE4SS_SDK_ABP_CES1207_HPP

class UABP_CES1207_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_919085E94486E4131C58BD9AD0424944;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1D2A8E7947A7CC2E6CFF12AC424D5A06; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_8CDDC3FE40AD3B00D26688B006B9F687;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_51359C1241BCE8C223F57EA7FE4D2C6B; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_CFC379DC4B0486C7468711B867D87A69;               // 0x0658 (size: 0x68)
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
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1207_AnimGraphNode_BlendSpacePlayer_1D2A8E7947A7CC2E6CFF12AC424D5A06();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1207(int32 EntryPoint);
}; // Size: 0x6F4

#endif
