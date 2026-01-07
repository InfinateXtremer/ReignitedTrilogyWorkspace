#ifndef UE4SS_SDK_ABP_CFS2169_AquaSheep_Underwater_HPP
#define UE4SS_SDK_ABP_CFS2169_AquaSheep_Underwater_HPP

class UABP_CFS2169_AquaSheep_Underwater_C : public UTfbAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_7BBC625F45306C16162E2486CE23A8F4;               // 0x0478 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9296F179449C413D2F092B85A2F8B391; // 0x04C0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59843B834BD41A14C8B22984F14969DE; // 0x0540 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_A5C480D34AFDADC7A7671D881D544101; // 0x05C0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1D82B60144B5E350DF187A93714B81E2; // 0x0640 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D0EAC81E419450CB0234FBA83CBDF420; // 0x06C0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_3E18C1A349430D7EECB2B8BC0206962E;        // 0x0730 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_08F0CB3B4F259AD87CD9D08091261DC8; // 0x0778 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_406E3E7340918DF42222B0AA4F848C21;        // 0x07E8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3B5D588C41F3C6192FE72F9F90463849; // 0x0830 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AFA708E143A9ABD2FABF58B8F7254234; // 0x08B0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_041F29BE4C9A84CA2F78939AC34022E8; // 0x0930 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_6823592540DBDBDE19DD0FB17340079D;        // 0x09A0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6D5C47E94E10EB939D285A87D611EB2E; // 0x09E8 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_0B2D25844D33A1A8C3970B9906521E6E; // 0x0A58 (size: 0xD0)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D59793AF42A261A3B03AC385DCC25211; // 0x0B30 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_126B5C8A4E6BA9A9124BB9B1DE91760C; // 0x0BB0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BAFAFD0640D4BE29BC4CDA99C8F3229B; // 0x0C30 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_0B54A2AC4A698B57DD482F858DCB079D;        // 0x0CA0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77EF6B5440A18C24E617D3A2DAC178B1; // 0x0CE8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_9C5B513249CBB550DEC70BB6DC3096B3;        // 0x0D58 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C131660E4C6B0AD661B6F8825219AA70; // 0x0DA0 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_9BD0761843FA7776CB2129BD848D6B6A;        // 0x0E78 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_09F469124446BBBFB5C57689F9E85335; // 0x0EC0 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_93394D4B4C0BF367256DF1BC045A7B1C;        // 0x0F98 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8541A0E74E68518CC6FBBBB0F0B8978B; // 0x0FE0 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_1BE441974CBA90A8DC731091D5362951;               // 0x10B8 (size: 0x68)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_54CB478B470D6C304264FDB02933D0D7; // 0x1120 (size: 0xA8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7F3EBAE6435EC99D562695BDEE5BE37B; // 0x11C8 (size: 0x50)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7D12D4EE4E300B70E3F78E8B1D03BDA0; // 0x1218 (size: 0x50)
    FAnimNode_Slot AnimGraphNode_Slot_61A47CD04060C0733D6E59BAB5509356;               // 0x1268 (size: 0x68)
    FTfbAnimNode_LipSyncBlend TfbAnimGraphNode_LipSyncBlend_E02F2E2E44F3E776172CD19574A23A5C; // 0x12D0 (size: 0x140)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_SequencePlayer_08F0CB3B4F259AD87CD9D08091261DC8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_SequencePlayer_D0EAC81E419450CB0234FBA83CBDF420();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_3B5D588C41F3C6192FE72F9F90463849();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_AFA708E143A9ABD2FABF58B8F7254234();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_SequencePlayer_041F29BE4C9A84CA2F78939AC34022E8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_1D82B60144B5E350DF187A93714B81E2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_SequencePlayer_6D5C47E94E10EB939D285A87D611EB2E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_BlendListByBool_0B2D25844D33A1A8C3970B9906521E6E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_D59793AF42A261A3B03AC385DCC25211();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_126B5C8A4E6BA9A9124BB9B1DE91760C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_SequencePlayer_BAFAFD0640D4BE29BC4CDA99C8F3229B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_A5C480D34AFDADC7A7671D881D544101();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_SequencePlayer_77EF6B5440A18C24E617D3A2DAC178B1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_59843B834BD41A14C8B22984F14969DE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater_AnimGraphNode_TransitionResult_9296F179449C413D2F092B85A2F8B391();
    void AnimNotify_LeftIdle2();
    void AnimNotify_EnterIdle1();
    void AnimNotify_LeftIdle1();
    void ExecuteUbergraph_ABP_CFS2169_AquaSheep_Underwater(int32 EntryPoint);
}; // Size: 0x1410

#endif
