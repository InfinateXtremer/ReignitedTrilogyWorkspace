#ifndef UE4SS_SDK_ABP_CNS2196_MantaRayRide_HPP
#define UE4SS_SDK_ABP_CNS2196_MantaRayRide_HPP

class UABP_CNS2196_MantaRayRide_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_26EE220E44B41933EAE8B89591B6EB72;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_B5014F3241D5F1C2CBF9DFBAE0859683; // 0x0410 (size: 0x70)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_E022D0EE4766196209F94DAB218856D4; // 0x0480 (size: 0x78)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BC9286CB466F824E802EFABAE1D71156; // 0x04F8 (size: 0x128)
    float StickX;                                                                     // 0x0620 (size: 0x4)
    float StickY;                                                                     // 0x0624 (size: 0x4)
    bool EnableStickInput;                                                            // 0x0628 (size: 0x1)
    float PlayRate;                                                                   // 0x062C (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CNS2196_MantaRayRide_AnimGraphNode_SequencePlayer_B5014F3241D5F1C2CBF9DFBAE0859683();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CNS2196_MantaRayRide_AnimGraphNode_BlendSpacePlayer_BC9286CB466F824E802EFABAE1D71156();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_CNS2196_MantaRayRide(int32 EntryPoint);
}; // Size: 0x630

#endif
