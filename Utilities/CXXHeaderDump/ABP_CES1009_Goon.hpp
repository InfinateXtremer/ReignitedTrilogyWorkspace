#ifndef UE4SS_SDK_ABP_CES1009_Goon_HPP
#define UE4SS_SDK_ABP_CES1009_Goon_HPP

class UABP_CES1009_Goon_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B5243DA34BAF0DA88F013786AC7B1178;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_CDFE8B3A458FE88D499A79BD41482817; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_E01A025042344BA0B32978B86EBF931B;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1FF9E627446C2E3EC1C6E7A88D356F69; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_7829AD7F4B125227840BD6AA585777CF;               // 0x0658 (size: 0x68)
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
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1009_Goon_AnimGraphNode_BlendSpacePlayer_CDFE8B3A458FE88D499A79BD41482817();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1009_Goon(int32 EntryPoint);
}; // Size: 0x6F4

#endif
