#ifndef UE4SS_SDK_ABP_CES2025_Crab_HPP
#define UE4SS_SDK_ABP_CES2025_Crab_HPP

class UABP_CES2025_Crab_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_4253ED704CBB12DBD4737D826F8EBCEB;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_93F2D231451CA6ED03684AB60542EF42; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_96AF2B2244BC6ECB5B72BE9C0A5AF5AF;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_295C5C704F963AA3B5FE678D5AA561EC; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_3632F8FE4EF654453A2909AEA729B196;               // 0x05A0 (size: 0x68)
    class ABP_CES2025_Crab_C* MyCrab;                                                 // 0x0608 (size: 0x8)

    void BlueprintInitializeAnimation();
    void AnimNotify_ShockVFX();
    void ExecuteUbergraph_ABP_CES2025_Crab(int32 EntryPoint);
}; // Size: 0x610

#endif
