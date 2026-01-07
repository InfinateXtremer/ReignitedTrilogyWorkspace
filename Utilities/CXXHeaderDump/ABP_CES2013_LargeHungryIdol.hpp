#ifndef UE4SS_SDK_ABP_CES2013_LargeHungryIdol_HPP
#define UE4SS_SDK_ABP_CES2013_LargeHungryIdol_HPP

class UABP_CES2013_LargeHungryIdol_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B0CA08C54E3808B8F94D068D63EBB893;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D6EDE2BA4B4A68BBA7AFDCBB6FD70D5D; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_29C103DE4B40EE9C6931DA8F0C64F6C9;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B186156C478242EEB7613A9C856734ED; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_4D0A289341F9763D3E3A52BE6D7B5F39;               // 0x0658 (size: 0x68)
    float Speed;                                                                      // 0x06C0 (size: 0x4)
    float Time;                                                                       // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2013_LargeHungryIdol_AnimGraphNode_BlendSpacePlayer_D6EDE2BA4B4A68BBA7AFDCBB6FD70D5D();
    void ExecuteUbergraph_ABP_CES2013_LargeHungryIdol(int32 EntryPoint);
}; // Size: 0x6E8

#endif
