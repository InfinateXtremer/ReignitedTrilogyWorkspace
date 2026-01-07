#ifndef UE4SS_SDK_ABP_CES1055B_MaleFool_HPP
#define UE4SS_SDK_ABP_CES1055B_MaleFool_HPP

class UABP_CES1055B_MaleFool_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1A156F36412C21C1C71CB8BC8992745F;               // 0x03C8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_68DEF226424306EC29B1C2B92E2BCDC0; // 0x0410 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4CDD117D49C56DDC87273E8BE0A56DAA; // 0x0490 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_6171B6B94005F656D82EDCB8B65E2FBE;        // 0x0500 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_84E4B6BC4BC9457F64C737919AA027E8; // 0x0550 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B6115F5D4AEDFAFC6340FAB683964CD2; // 0x05D0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F48603E5474983AA313BAC96051B10EC; // 0x0650 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C7B8DBD543F43D0FB7DFBFBDD6E24F43; // 0x06D0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_651E4597400E36F53BD3CDAD47D150BC; // 0x0750 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D54CDDE7444A9494CC531D908F0008BD; // 0x07D0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_83C454E54418FFAF2E71D5B0590C102E; // 0x0850 (size: 0x80)
    FAnimNode_Root AnimGraphNode_StateResult_8CF86EA94BED80EF32B848BE1C9E1F38;        // 0x08D0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E3BCEEFD4370880F9E52749B8E5302C2; // 0x0918 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_0E7AD1BC47C1023B972897B186CAC156;        // 0x0988 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94A5056B4FCB32CEF04C72BAF90F508B; // 0x09D0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_CA65366A479CBD5D251B619FC1F7FD16;        // 0x0A40 (size: 0x48)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3D51D7704DA51E69AE9415B398DA5874; // 0x0A88 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E7E9D9F8422DFD7B7C53C691BEA071FF; // 0x0AD0 (size: 0x48)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5F8385024D528CE88F0A05AFB3F7833A;   // 0x0B18 (size: 0xB8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16A3270B4B7BA09FED63BE8B60EA943B; // 0x0BD0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_B008A15C4FF1AE210A96C981D3792249;        // 0x0C40 (size: 0x48)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5CA7B9574660CDCF5623FF841CCB7B78; // 0x0C88 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_F62D5A39427E9A5D43A53ABBB35C9BA0; // 0x0CD0 (size: 0x48)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_49D4C86A4B5062680A42C89EBEB60FB8;   // 0x0D18 (size: 0xB8)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96D6FA62468EB4BAA0033BADC9228309; // 0x0DD0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_07D7D5244EED9940CEEC7A8A5ABDCFAD;        // 0x0E40 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_542A9D9A48B9B2639D5B1B8231BFDDDB; // 0x0E88 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_A4185CEC462F3693679175832B77899E;        // 0x0EF8 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_09944A4A495860ED6BA34991E26FA62D; // 0x0F40 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_C0EF743044194F280F60E294F87F3D62;        // 0x1018 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D6D2ADE146AB1F2A40C661B07CFAB5DA; // 0x1060 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_A41FA3464C0515DCA70BE487250F4A33;               // 0x1138 (size: 0x68)
    float BlendTime;                                                                  // 0x11A0 (size: 0x4)
    int32 StateEnum;                                                                  // 0x11A4 (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_651E4597400E36F53BD3CDAD47D150BC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_C7B8DBD543F43D0FB7DFBFBDD6E24F43();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_D54CDDE7444A9494CC531D908F0008BD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_83C454E54418FFAF2E71D5B0590C102E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_F48603E5474983AA313BAC96051B10EC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_B6115F5D4AEDFAFC6340FAB683964CD2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_84E4B6BC4BC9457F64C737919AA027E8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1055B_MaleFool_AnimGraphNode_TransitionResult_68DEF226424306EC29B1C2B92E2BCDC0();
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_CES1055B_MaleFool(int32 EntryPoint);
}; // Size: 0x11A8

#endif
