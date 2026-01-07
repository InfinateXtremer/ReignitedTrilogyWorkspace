#ifndef UE4SS_SDK_ABP_CES1072_GnorcSurvivalist_HPP
#define UE4SS_SDK_ABP_CES1072_GnorcSurvivalist_HPP

class UABP_CES1072_GnorcSurvivalist_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D6BF63E540936A5A7C83EFA57E537B4C;               // 0x03C8 (size: 0x48)
    FAnimNode_Root AnimGraphNode_StateResult_256D1ED149C98EF1305AE9A7411722B4;        // 0x0410 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B07C689249FA807F9FBB118C3B44C686; // 0x0458 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_F0A9FFF54F2FE402B9DE70A1CDFB2F5A;               // 0x0530 (size: 0x68)
    float Time;                                                                       // 0x0598 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x05A0 (size: 0x8)
    FRotator Rotation;                                                                // 0x05A8 (size: 0xC)
    float Speed;                                                                      // 0x05B4 (size: 0x4)
    float Direction;                                                                  // 0x05B8 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x05C0 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void ExecuteUbergraph_ABP_CES1072_GnorcSurvivalist(int32 EntryPoint);
}; // Size: 0x5C8

#endif
