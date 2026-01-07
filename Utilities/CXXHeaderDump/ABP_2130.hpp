#ifndef UE4SS_SDK_ABP_2130_HPP
#define UE4SS_SDK_ABP_2130_HPP

class UABP_2130_C : public UTfbAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_9184F4FD4CE29289B758879EE326388D;               // 0x0478 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0EEF67D7487DB98EDE7FE2A9B8ED55C5; // 0x04C0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_064D186D4215D4070CCB488F54A62A3C; // 0x0540 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_91C34A18443EB8D83AE16689D45E0FE0; // 0x05C0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_78B003C44EC76B3D9D26B586B6486C59; // 0x0640 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_607AAD094EF6F564879DA788AD98CE13; // 0x06C0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76DB904E40E8B74209651F9E7A7906F5; // 0x0740 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_EC99A59546223B863C8413B7BCADCC0F;        // 0x07B0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92B97224448E3D034C7981BB221CC5E3; // 0x07F8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_0740ED094E8E8FB50323F38D43A927C8;        // 0x0868 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38A7626D40974430538E43AC1824E309; // 0x08B0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_23E36B40462AE8C4FBB5888506985CBA;        // 0x0920 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_0BFB05C84E7A662B03D47EA46675F7C0; // 0x0968 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_342D2E5A407D97D062F364A403094BA4;               // 0x0A40 (size: 0x68)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4C77107440C10C7404E78BA9805E687F; // 0x0AA8 (size: 0xA8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_739879104D51F136664B459E941FFB85; // 0x0B50 (size: 0x50)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9A9E84D0482B91D946C6F2953D08493B; // 0x0BA0 (size: 0x50)
    FAnimNode_Slot AnimGraphNode_Slot_EBC346C5417AE886DA2AF49DD54021DE;               // 0x0BF0 (size: 0x68)
    FTfbAnimNode_LipSyncBlend TfbAnimGraphNode_LipSyncBlend_CD6420414B5B49CB1937B181E60ECBAB; // 0x0C58 (size: 0x140)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2130_AnimGraphNode_TransitionResult_78B003C44EC76B3D9D26B586B6486C59();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2130_AnimGraphNode_TransitionResult_607AAD094EF6F564879DA788AD98CE13();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2130_AnimGraphNode_TransitionResult_91C34A18443EB8D83AE16689D45E0FE0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2130_AnimGraphNode_TransitionResult_0EEF67D7487DB98EDE7FE2A9B8ED55C5();
    void AnimNotify_EnterIdle();
    void Do Idle 2();
    void AnimNotify_LeaveIdle();
    void ExecuteUbergraph_ABP_2130(int32 EntryPoint);
}; // Size: 0xD98

#endif
