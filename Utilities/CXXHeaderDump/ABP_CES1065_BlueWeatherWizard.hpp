#ifndef UE4SS_SDK_ABP_CES1065_BlueWeatherWizard_HPP
#define UE4SS_SDK_ABP_CES1065_BlueWeatherWizard_HPP

class UABP_CES1065_BlueWeatherWizard_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_38049849473AEB15FB883AA8B2F265AC;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4910BE554D9BACC3FCD0AF9F43427022; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_6D3EFB4F47A5E89A8BCEAD8D327CBB4E;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B85FC6AA468EDDC9ED30BAB5CFE0EE13; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_3279D38F4ED6349D1DE67BA7B68CC1B5;               // 0x05A0 (size: 0x68)
    int32 ProjCounter;                                                                // 0x0608 (size: 0x4)

    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void AnimNotify_FireProj();
    void AnimNotify_ResetProjCounter();
    void SetIdleStartOffset(float OffsetPercent);
    void ExecuteUbergraph_ABP_CES1065_BlueWeatherWizard(int32 EntryPoint);
}; // Size: 0x60C

#endif
