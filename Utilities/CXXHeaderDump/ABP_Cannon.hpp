#ifndef UE4SS_SDK_ABP_Cannon_HPP
#define UE4SS_SDK_ABP_Cannon_HPP

class UABP_Cannon_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3CEABBCD4C1AC3C3EF5897A61DE08418;               // 0x03C8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38EF3C4149DA885C1456AFB5C77D6DCF; // 0x0410 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D62C9CFF4FABB0380CAB268F3F939102; // 0x0490 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_710404AD44A95B87A5B317BE2EA0C020; // 0x0510 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_54E1CB0649313E5B63E5F2B23B1F1466; // 0x0590 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_D235F1514C5085DB3D783C82ACCB39D0; // 0x0610 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_F95261A24E719AACC44AAEB3E0AA1DC5; // 0x0690 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_335F37ED4D105A1E6B4EE6A2F7D9C9C7; // 0x0710 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5DCA22714956940D412265908689D91F; // 0x0790 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_38E9E8A6429C9C1C3CCFFBB048C86E85;        // 0x0800 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28F0FF0846638B861256BCA0BCC606C7; // 0x0848 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_6408AB5342C5B525EB22788C168EA387;        // 0x08B8 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_E03ECBF34020DE50510274831B1E1098; // 0x0900 (size: 0xD8)
    FAnimNode_Root AnimGraphNode_StateResult_D807259D47FB386528EF6DB5A70142B4;        // 0x09D8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_784E950046190031D4603391339522C7; // 0x0A20 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_C16FCFCA4D780FE8037BC9BA7DFD2A8D;        // 0x0A90 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78A88F6448FD48869B5E739425A4D53B; // 0x0AD8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_00782CB34827A4B809000FADACE0A033;        // 0x0B48 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_7CDA6268451455098255F6BDC2623718; // 0x0B90 (size: 0xD8)
    float Time;                                                                       // 0x0C68 (size: 0x4)
    float Speed;                                                                      // 0x0C6C (size: 0x4)
    float Direction;                                                                  // 0x0C70 (size: 0x4)
    float CurrentYaw;                                                                 // 0x0C74 (size: 0x4)
    float PreviousYaw;                                                                // 0x0C78 (size: 0x4)
    FRotator Rotation;                                                                // 0x0C7C (size: 0xC)
    class AActor* BaseCharacter;                                                      // 0x0C88 (size: 0x8)
    bool isFiring;                                                                    // 0x0C90 (size: 0x1)
    float TurnRate;                                                                   // 0x0C94 (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_710404AD44A95B87A5B317BE2EA0C020();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_54E1CB0649313E5B63E5F2B23B1F1466();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_D235F1514C5085DB3D783C82ACCB39D0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_F95261A24E719AACC44AAEB3E0AA1DC5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_335F37ED4D105A1E6B4EE6A2F7D9C9C7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_D62C9CFF4FABB0380CAB268F3F939102();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Cannon_AnimGraphNode_TransitionResult_38EF3C4149DA885C1456AFB5C77D6DCF();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void IFireCannon(bool isFiring);
    void ExecuteUbergraph_ABP_Cannon(int32 EntryPoint);
}; // Size: 0xC98

#endif
