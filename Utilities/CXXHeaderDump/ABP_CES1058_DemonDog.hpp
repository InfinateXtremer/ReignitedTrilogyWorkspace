#ifndef UE4SS_SDK_ABP_CES1058_DemonDog_HPP
#define UE4SS_SDK_ABP_CES1058_DemonDog_HPP

class UABP_CES1058_DemonDog_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_38DB718047E44640FD3744B7A5A99EC2;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17230CDD4A133384DA1859A708D66CD2; // 0x0410 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5D32C024448064E2F1478AA763FDF705; // 0x0480 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_EB8C48E04932256C1BBE2ABD0F0CC627; // 0x04F0 (size: 0xD0)
    FAnimNode_Root AnimGraphNode_StateResult_0B4C44ED45115D364B87AD94A24FA202;        // 0x05C0 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_55F33763445CD1F4DFE224BECF74AE66; // 0x0608 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_C1C3AC9C4C99675F6BD588A0DEF4E98B;               // 0x06E0 (size: 0x68)
    bool Growing;                                                                     // 0x0748 (size: 0x1)
    class ABP_CES1058_DemonDog_C* Doggo;                                              // 0x0750 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void AnimNotify_MouthFireOn();
    void AnimNotify_MouthFireOff();
    void BlueprintInitializeAnimation();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1058_DemonDog_AnimGraphNode_BlendListByBool_EB8C48E04932256C1BBE2ABD0F0CC627();
    void ExecuteUbergraph_ABP_CES1058_DemonDog(int32 EntryPoint);
}; // Size: 0x758

#endif
