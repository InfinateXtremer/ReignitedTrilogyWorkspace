#ifndef UE4SS_SDK_ABP_CES3083_RhynocSubmarine_Correct_HPP
#define UE4SS_SDK_ABP_CES3083_RhynocSubmarine_Correct_HPP

class UABP_CES3083_RhynocSubmarine_Correct_C : public UTfbAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_224179814B6205B72FAB5A83EDB48A50;               // 0x0478 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_F7330C124117338BD3E1BA8849760F20;               // 0x04C0 (size: 0x68)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38D738654E296B10F53C0B89F0CCF9F0; // 0x0530 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0CB5EB1940B099C007939B9E96BD47B4; // 0x05B0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C71C8E924733D91F5E43C1B8D63DACE4; // 0x0630 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_881323184FC3C98DEF7217AB3B654B3D; // 0x06B0 (size: 0x70)
    FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_E36671E8487C4ED827F093A965CB3EBD; // 0x0720 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F9071BF5433BF60DB3B141B0152705B3; // 0x07C0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_A3C7A0864F03FC72CA608FA5B0C4282D;        // 0x0830 (size: 0x48)
    FAnimNode_BlendBoneByChannel AnimGraphNode_BlendBoneByChannel_77302D0F44BB3616709DD1B7CEB602DE; // 0x0878 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8F1C8B934057053C96B05AAE599B5A48; // 0x0918 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_DE03C0334A5DA6AE65B66688D7F244CC; // 0x0988 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_145C4F774FB4B77B9DBFDBBFC8EB5D9A;        // 0x09F8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_665DFBBA414C26D18D6F20AB9FF53B50; // 0x0A40 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_60B7D9C1474A5D3C1A9715B256759AEB;        // 0x0AB0 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_60070C6744A5F0C00585348FCAAE4884; // 0x0AF8 (size: 0xD8)
    bool OpenMineHatch;                                                               // 0x0BD0 (size: 0x1)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES3083_RhynocSubmarine_Correct_AnimGraphNode_TransitionResult_C71C8E924733D91F5E43C1B8D63DACE4();
    void CloseHatch();
    void OpenHatch();
    void AnimNotify_RhynocSub_LayMine();
    void ExecuteUbergraph_ABP_CES3083_RhynocSubmarine_Correct(int32 EntryPoint);
}; // Size: 0xBD1

#endif
