#ifndef UE4SS_SDK_ABP_CES1066_MaleNightmareBeast_HPP
#define UE4SS_SDK_ABP_CES1066_MaleNightmareBeast_HPP

class UABP_CES1066_MaleNightmareBeast_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_E0B010FD446D81CCB04BA6A6244AF2FB;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_CDFE8B3A458FE88D499A79BD41482817; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_E01A025042344BA0B32978B86EBF931B;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_39B827FC4F6F7F8CA0B92A971BD1E801; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_9F7FE08C4A0CB42BFD08C884C0DE400F;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06D8 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1066_MaleNightmareBeast_AnimGraphNode_BlendSpacePlayer_CDFE8B3A458FE88D499A79BD41482817();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1066_MaleNightmareBeast(int32 EntryPoint);
}; // Size: 0x6E0

#endif
