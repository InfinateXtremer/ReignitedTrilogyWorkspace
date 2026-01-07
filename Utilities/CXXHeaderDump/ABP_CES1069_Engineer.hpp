#ifndef UE4SS_SDK_ABP_CES1069_Engineer_HPP
#define UE4SS_SDK_ABP_CES1069_Engineer_HPP

class UABP_CES1069_Engineer_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_90348D0340161FD941337FB89A867C1A;               // 0x03C8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_A28631AE4773838457E83692101988A3;               // 0x0410 (size: 0x68)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_ED3B2AAE4D4D47D6CCC7FCAB87FB6B95; // 0x0478 (size: 0x70)
    float IdleStart;                                                                  // 0x04E8 (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1069_Engineer_AnimGraphNode_SequencePlayer_ED3B2AAE4D4D47D6CCC7FCAB87FB6B95();
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_CES1069_Engineer(int32 EntryPoint);
}; // Size: 0x4EC

#endif
