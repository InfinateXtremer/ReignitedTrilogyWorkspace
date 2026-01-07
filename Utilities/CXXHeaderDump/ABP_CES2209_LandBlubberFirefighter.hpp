#ifndef UE4SS_SDK_ABP_CES2209_LandBlubberFirefighter_HPP
#define UE4SS_SDK_ABP_CES2209_LandBlubberFirefighter_HPP

class UABP_CES2209_LandBlubberFirefighter_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_09FCC8544850FD82B0944394ABCEEA6B;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1D370CA5438A2F7CF30EF5904553F610; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_7E4E59224A82FBBC42D4C8BFBC9A0C45;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_77C207DE46D4FA0069A6E7B51D3A230D; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_26391BEF4BBFFE2688EF27BD9B8DEDBA;               // 0x05A0 (size: 0x68)
    class ABP_CES2209_LandBlubberFirefighter_C* My FireFighter;                       // 0x0608 (size: 0x8)

    void BlueprintInitializeAnimation();
    void AnimNotify_Water Proj();
    void ExecuteUbergraph_ABP_CES2209_LandBlubberFirefighter(int32 EntryPoint);
}; // Size: 0x610

#endif
