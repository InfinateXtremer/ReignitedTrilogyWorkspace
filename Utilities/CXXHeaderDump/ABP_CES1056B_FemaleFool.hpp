#ifndef UE4SS_SDK_ABP_CES1056B_FemaleFool_HPP
#define UE4SS_SDK_ABP_CES1056B_FemaleFool_HPP

class UABP_CES1056B_FemaleFool_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_503161E54ED47F7B68A842A41722E3FF;               // 0x03C8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_951DAB0949E22C74584D14A5CE366D44; // 0x0410 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1070EAFB49EE6C9F041199B9454B37BC; // 0x0490 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_BEEDE1AD4A2C5B1C10BECAB3F2D03266; // 0x0510 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7AB26DC840BCBB1C2E655F88EE963C60; // 0x0590 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_93ECB4394B66A2FA07C3C6AB305FE63D; // 0x0610 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6404213C416BBDA84E15099559638A82; // 0x0690 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_87DF0D0C4EEC76466AB263881A0BEDB4; // 0x0710 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_CF7B3C8C4150A4811FA95E8BA0AAE6F6; // 0x0790 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_BDB144D84E8D17928B2DF8B711978227;        // 0x0800 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_00561BF34FD3D9A7E551D8B97A595455; // 0x0848 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_823BA4634822BAB1B2D8519799B74CDD;        // 0x08B8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6B547BBA427414B76C2B0797141CD04B; // 0x0900 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50C3BC414D0C6FB6F16269836627E279; // 0x0980 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6493ADA9408C28B5137542AC13862AF2; // 0x0A00 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7A0FFAB148237D21017893A3A7BACEC6; // 0x0A80 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_91A53BFE4EBAC297D486E8A69A6E0AA1; // 0x0B00 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_121F3FE84359372E4351BDB8E9E5F503; // 0x0B80 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_765B59864D122A38D9D00A8574D1BCD2;        // 0x0BF0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41C8A329416C4E14A7A435B6F25BD000; // 0x0C38 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_BCC3C7D0480353114D81A5BFF16093A9;        // 0x0CA8 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_9B565CC64A825AA4A8138D953D321446; // 0x0CF0 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_FBD2356F453DE77711A45997B70AC3B0;        // 0x0DC8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_662A8A8D4B12C4503B79519753E4FC68; // 0x0E10 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_73056A0648DF3788253CF3BB5B61A110;        // 0x0E80 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32B78F5E44AAB86841BF3CBDDDBC6748; // 0x0ED0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1D3814114402F938AB427182EF1707BD; // 0x0F50 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_8DF5917A4D6EAFCD194F9184B0307AC5;        // 0x0FC0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FC7FF426496966D98FEC07859690530A; // 0x1008 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_EE4978CB42AFE28ECC257EA69DD25CDB;        // 0x1078 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_13F5E721445DEC4202DE7F8C2CDA62EF; // 0x10C0 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_9A563BE44E6C4AFB7CD14DA24B4A53F5;        // 0x1198 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_82BB56484EDF2F0E16EE24952E455591; // 0x11E0 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_A72F482E4686C97609595DBD65B8CA18;               // 0x12B8 (size: 0x68)
    float MoveSpeed;                                                                  // 0x1320 (size: 0x4)
    float BlendTime;                                                                  // 0x1324 (size: 0x4)
    int32 StateEnum;                                                                  // 0x1328 (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_6404213C416BBDA84E15099559638A82();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_50C3BC414D0C6FB6F16269836627E279();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_93ECB4394B66A2FA07C3C6AB305FE63D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_7AB26DC840BCBB1C2E655F88EE963C60();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_BEEDE1AD4A2C5B1C10BECAB3F2D03266();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_32B78F5E44AAB86841BF3CBDDDBC6748();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_1070EAFB49EE6C9F041199B9454B37BC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_951DAB0949E22C74584D14A5CE366D44();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1056B_FemaleFool_AnimGraphNode_TransitionResult_87DF0D0C4EEC76466AB263881A0BEDB4();
    void AnimNotify_StartAlert();
    void AnimNotify_StartAttack();
    void AnimNotify_StartIdle();
    void AnimNotify_StartTransform();
    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES1056B_FemaleFool(int32 EntryPoint);
}; // Size: 0x132C

#endif
