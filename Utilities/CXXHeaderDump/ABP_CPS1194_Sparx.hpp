#ifndef UE4SS_SDK_ABP_CPS1194_Sparx_HPP
#define UE4SS_SDK_ABP_CPS1194_Sparx_HPP

class UABP_CPS1194_Sparx_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BAD632C4478F13BAA4C6E28CC079846A;               // 0x03C8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33D37BDC412EE56C61982E8FDD198C1F; // 0x0410 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_EE65D9C745BCCECDBB20AB90C4295A43; // 0x0490 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1C28A852450BD7A34456E28B6A954ED2; // 0x0510 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BC20EE2D4F9DE1025BAB1997963864D5; // 0x0590 (size: 0x80)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_AAA09D664240479D068076A8D8B49284; // 0x0610 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_CD67C3054635F23D2C320F8D2B4AD10E;        // 0x0738 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7696A4FF414CA019FC22DF9857380D1B; // 0x0780 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_DE220248458E344A06ADE3B9BE3D33F2;        // 0x07F0 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_62BBE12547FB20797BF7AAA56E3CA7EE; // 0x0838 (size: 0x128)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6408809C45B5FA359D386C9D358A1CFF; // 0x0960 (size: 0x78)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3348F53749E977CFDA1668BF082595E0; // 0x09D8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_1D7E91FE4F15204BF2CAE2AFC52E5E1F;        // 0x0A48 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_2D3D60AE4CE194E166319D8933C77319; // 0x0A90 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_3B47473942736CDDEE97F9B0A731F097;               // 0x0B68 (size: 0x68)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6F8015DA436A6E1375D1FDAF99A7D5CA; // 0x0BD0 (size: 0x78)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_E76CD4DF4A5431E7FE47ED8568907802; // 0x0C48 (size: 0xA8)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt_45FDD3744E01F7D5E7D502836D0FA07C; // 0x0CF0 (size: 0xD0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_BEA932A24780384EED75A1ADF80EF149; // 0x0DC0 (size: 0x50)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_C5979B234C8F4FDFF03F778344738BD6; // 0x0E10 (size: 0xD0)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5995E03A45FE66D63ADAD29B812F73DB; // 0x0EE0 (size: 0x50)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F285748545E76B29033DFAB1B2C18DA2; // 0x0F30 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8E24E61B443D1D9667F2578D1540CECF; // 0x0FA0 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7CC2817F429CF9B014F870AE58A10572; // 0x1010 (size: 0x70)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79CBCA614474CDC7C98C69AD8673E6F3; // 0x1080 (size: 0x70)
    TEnumAsByte<ESparxState::Type> SparxState;                                        // 0x10F0 (size: 0x1)
    FVector2D MoveToLocationDirection;                                                // 0x10F4 (size: 0x8)
    int32 SparxHealthState;                                                           // 0x10FC (size: 0x4)
    class AActor* SparxActor;                                                         // 0x1100 (size: 0x8)
    float VerticalVelocity;                                                           // 0x1108 (size: 0x4)
    FVector SparxActorLocationLast;                                                   // 0x110C (size: 0xC)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_TransitionResult_BC20EE2D4F9DE1025BAB1997963864D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_BlendSpacePlayer_AAA09D664240479D068076A8D8B49284();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_TransitionResult_EE65D9C745BCCECDBB20AB90C4295A43();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_BlendSpacePlayer_62BBE12547FB20797BF7AAA56E3CA7EE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_TransitionResult_33D37BDC412EE56C61982E8FDD198C1F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_BlendListByInt_45FDD3744E01F7D5E7D502836D0FA07C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_BlendListByBool_C5979B234C8F4FDFF03F778344738BD6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CPS1194_Sparx_AnimGraphNode_TransitionResult_1C28A852450BD7A34456E28B6A954ED2();
    void INotifySparxStateChanged(TEnumAsByte<ESparxState::Type> NewSparxState);
    void AnimNotify_EnteredChaseButterfly();
    void AnimNotify_EnteredMoveToLocation();
    void ISetSparxMoveToDirection(FVector2D MoveToDirection);
    void INotifySparxHealthStateChanged(int32 NewHealth);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_CPS1194_Sparx(int32 EntryPoint);
}; // Size: 0x1118

#endif
