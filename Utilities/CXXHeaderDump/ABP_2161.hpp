#ifndef UE4SS_SDK_ABP_2161_HPP
#define UE4SS_SDK_ABP_2161_HPP

class UABP_2161_C : public UTfbAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_49FE953C4EC64AE3F520E3BF50E314A0;               // 0x0478 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BF2FACAA4265D2EB413149ABC3213C08; // 0x04C0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_2DAB85114A798241DC87A392A683515F;        // 0x0530 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F55F8DD84EED17479A3CEA86687B7EBB; // 0x0578 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_07EF24FA4914F67EC5750E9050BF7BB0;        // 0x05E8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_537340D64425D28C2C2502B090196B60; // 0x0630 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1B7C55F943E672096570EB87CA56760F; // 0x06A0 (size: 0xD0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4919E3A5405D58EEC9007BBCB83FA0FB; // 0x0770 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_8465AD954BF9AB209A382DBF9DA5C4F1;        // 0x07E0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E6D067584C4771BEB105FD8D9A2893C3; // 0x0828 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_3F1524304F0FFDCF953AB2BA58B67502;        // 0x0898 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_CA72DC9648C20AD865829FB51300DC67; // 0x08E0 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_BE2229E14334FD8D75ACB186D64E8FC0;        // 0x09B8 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_E8F887274BAF91C97D6D49B9DDC96B35; // 0x0A00 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_35201B484FD4D0F4C98A95BFC52B8658;        // 0x0AD8 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_469EFDAA448367051E38669D50399BEF; // 0x0B20 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_4C5D3A34438E2FE329C99AB960511774;               // 0x0BF8 (size: 0x68)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16869B1A4C78692B8F057E9A89BCF02E; // 0x0C60 (size: 0xA8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4F58B64346CEBD125B13A8BC1F61964F; // 0x0D08 (size: 0x50)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3202CAC94172D30E8FCEA1806B6C0681; // 0x0D58 (size: 0x50)
    FAnimNode_Slot AnimGraphNode_Slot_965746EE4117D298867EA8A32CC6BA1F;               // 0x0DA8 (size: 0x68)
    FTfbAnimNode_LipSyncBlend TfbAnimGraphNode_LipSyncBlend_DA7A51924B583CFF44BE18BC756C4142; // 0x0E10 (size: 0x140)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2161_AnimGraphNode_SequencePlayer_4919E3A5405D58EEC9007BBCB83FA0FB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2161_AnimGraphNode_SequencePlayer_E6D067584C4771BEB105FD8D9A2893C3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2161_AnimGraphNode_BlendListByBool_1B7C55F943E672096570EB87CA56760F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2161_AnimGraphNode_SequencePlayer_537340D64425D28C2C2502B090196B60();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2161_AnimGraphNode_SequencePlayer_F55F8DD84EED17479A3CEA86687B7EBB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_2161_AnimGraphNode_SequencePlayer_BF2FACAA4265D2EB413149ABC3213C08();
    void AnimNotify_LeftIdle2();
    void AnimNotify_EnterIdle1();
    void AnimNotify_LeftIdle1();
    void ExecuteUbergraph_ABP_2161(int32 EntryPoint);
}; // Size: 0xF50

#endif
