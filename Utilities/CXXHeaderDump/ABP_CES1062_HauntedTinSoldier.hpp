#ifndef UE4SS_SDK_ABP_CES1062_HauntedTinSoldier_HPP
#define UE4SS_SDK_ABP_CES1062_HauntedTinSoldier_HPP

class UABP_CES1062_HauntedTinSoldier_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_90A930654BFC8E0DD5FAB9A7CBBF1CD5;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FD4623154081B04B480B55B61076CE97; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_C1B76F5442011B20CAABE4AD9124445A;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_965FFC864BE5B5B6796FF581C81F185B; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_229A77274BACE51ADB2F128D54B0E8FE;               // 0x05A0 (size: 0x68)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_Rumble();
    void ExecuteUbergraph_ABP_CES1062_HauntedTinSoldier(int32 EntryPoint);
}; // Size: 0x608

#endif
