#ifndef UE4SS_SDK_ABP_CES1196_RamNew_HPP
#define UE4SS_SDK_ABP_CES1196_RamNew_HPP

class UABP_CES1196_RamNew_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_2C35452D4310049512D6F7BD62660973;               // 0x03C8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_0A73D80448288CCEEE77F2B3A1919B8F; // 0x0410 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_99F301674099D0C67FCB509542F530C4; // 0x0490 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B8B6B9324A4D6F541F7BC984F11D04C1; // 0x0510 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E0C631294F5160FE3BE5439C9C9DD645; // 0x0590 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_93A8826546F1DE1D10BB64AB4A5CC210;        // 0x0600 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AA82EEBA4496544B27F3D2823AD9B12F; // 0x0648 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_5766C30E45D7F4B7A01BB69827518774;        // 0x06B8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_978DAACA4D942047264CC19941B6DE7E; // 0x0700 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2EB04CFE418A04EB9BEDF386A2F999F4; // 0x0780 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_AE7788D748B1C8D46FDBA2A227EFD046; // 0x0800 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_B88DE4E745E4CD2C73B6FCA2A6F27F7A; // 0x0880 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_E7DC94734079A1B42F6495A5AE40499F; // 0x0900 (size: 0x80)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D4DEE4734F593A5A8A0538AF8807E09B; // 0x0980 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_EFED5D9444D5036579896697C55CAEE3;        // 0x0AA8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_05523CFF408BA46343A324B341653C46; // 0x0AF0 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_73DC2A364F2FBA8FB27DFB8DC4FEBDD1; // 0x0B70 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_04F955134DC8F8B064023C8534AE6663; // 0x0BF0 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_A044B6AD41F8088C1ABC82A53E052F77;        // 0x0C60 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_A89A7B714153EDF94E21D3BE49DCA428; // 0x0CA8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_BB30D9DE4BFF6456C4A11B8A80E533C8;        // 0x0D18 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_0CEDE1E44C455CB597FB458311D1ED8E; // 0x0D60 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_775995D34D652130C474F3A452C7A8A2;        // 0x0E38 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_D7271D634CAA87200BA259B634F9977A; // 0x0E80 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_E9DF6524440C2C51F1D5C0B3CBCC16DC;        // 0x0FA8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_649A173A4A90AA0A5B995B9B19AA91CA; // 0x0FF0 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_BA97A86849E54AEB1F389DBE18E372CB;        // 0x1118 (size: 0x48)
    FAnimNode_Root AnimGraphNode_StateResult_F70CC9FF4285F3228F6C0F989BB87F7A;        // 0x1160 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5F5D939C41995471E91E69AC7DC1B62D; // 0x11A8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_D887C4D3443D62629D5843A748739E79;        // 0x1218 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C26AB50F4107ADCA02E21F8ADF5A7F0C; // 0x1260 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_56DFD6EE445B5A10481CBF8F04E780C0;        // 0x1338 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_BBEC0B244573EDB157BC149AC3ED566D; // 0x1380 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_FD7583BA45E3646CEF1D63B8478BF5E6;               // 0x1458 (size: 0x68)
    float Time;                                                                       // 0x14C0 (size: 0x4)
    float TurnRate;                                                                   // 0x14C4 (size: 0x4)
    FRotator Rotation;                                                                // 0x14C8 (size: 0xC)
    float Yaw;                                                                        // 0x14D4 (size: 0x4)
    float PreviousYaw;                                                                // 0x14D8 (size: 0x4)
    float Speed;                                                                      // 0x14DC (size: 0x4)
    int32 StateEnum;                                                                  // 0x14E0 (size: 0x4)
    float BlendTime;                                                                  // 0x14E4 (size: 0x4)
    float PreviousSpeed;                                                              // 0x14E8 (size: 0x4)
    float Idle Start Offset;                                                          // 0x14EC (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_BlendSpacePlayer_D4DEE4734F593A5A8A0538AF8807E09B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_05523CFF408BA46343A324B341653C46();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_AE7788D748B1C8D46FDBA2A227EFD046();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_73DC2A364F2FBA8FB27DFB8DC4FEBDD1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_SequencePlayer_A89A7B714153EDF94E21D3BE49DCA428();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_2EB04CFE418A04EB9BEDF386A2F999F4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_BlendSpacePlayer_D7271D634CAA87200BA259B634F9977A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_978DAACA4D942047264CC19941B6DE7E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_BlendSpacePlayer_649A173A4A90AA0A5B995B9B19AA91CA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_B8B6B9324A4D6F541F7BC984F11D04C1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_99F301674099D0C67FCB509542F530C4();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_E7DC94734079A1B42F6495A5AE40499F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_0A73D80448288CCEEE77F2B3A1919B8F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1196_RamNew_AnimGraphNode_TransitionResult_B88DE4E745E4CD2C73B6FCA2A6F27F7A();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void ExecuteUbergraph_ABP_CES1196_RamNew(int32 EntryPoint);
}; // Size: 0x14F0

#endif
