#ifndef UE4SS_SDK_ABP_CES2040_BreezebuilderParrot_HPP
#define UE4SS_SDK_ABP_CES2040_BreezebuilderParrot_HPP

class UABP_CES2040_BreezebuilderParrot_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BFF48BF945BBF1E03E180C9F98986282;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8E7A17974FE451F140C70F8AFA41D735; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_F35F80A84566DAF3E9074EB70CED4267;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A06113B74207AA9AD6F51C8D2E0B9D35; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_22FD2A6749ACBD18A16EA2B23D6B8ED2;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06D0 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D8 (size: 0xC)
    float Speed;                                                                      // 0x06E4 (size: 0x4)
    float Direction;                                                                  // 0x06E8 (size: 0x4)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2040_BreezebuilderParrot_AnimGraphNode_BlendSpacePlayer_8E7A17974FE451F140C70F8AFA41D735();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2040_BreezebuilderParrot(int32 EntryPoint);
}; // Size: 0x6EC

#endif
