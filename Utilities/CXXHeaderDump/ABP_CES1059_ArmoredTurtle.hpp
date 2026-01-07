#ifndef UE4SS_SDK_ABP_CES1059_ArmoredTurtle_HPP
#define UE4SS_SDK_ABP_CES1059_ArmoredTurtle_HPP

class UABP_CES1059_ArmoredTurtle_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_DBF439964C838B4A16EEFA9F777733F2;               // 0x03C8 (size: 0x48)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_52B219CD4BA3F35068E3A489746580DC; // 0x0410 (size: 0x80)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_C3C946094FAEAE4278A6D59C37C29E05; // 0x0490 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1A1C6C594BF280E1F10A2ABDEE18FF2E; // 0x0510 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_BEBCFD8E41B7A982BAC6068BE0994DC0;        // 0x0580 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39A3660D4B4C3714A16605BBAA683408; // 0x05C8 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_4231326D4FCD58E01117F786E551363E;        // 0x0638 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E1221C9E4F1E498C9F349BA61A33AF30; // 0x0680 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_E8DE4CA64819B4A5E06E8D89A191CD8D; // 0x06F0 (size: 0xD0)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x07C0 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x08E8 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_B5517E0843B3294D8359878B7CDA8E39; // 0x0930 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_71E4BB2B434280C6678E12853C656954;               // 0x0A08 (size: 0x68)
    float Time;                                                                       // 0x0A70 (size: 0x4)
    float Speed;                                                                      // 0x0A74 (size: 0x4)
    float Direction;                                                                  // 0x0A78 (size: 0x4)
    FRotator Rotation;                                                                // 0x0A7C (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x0A88 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x0A90 (size: 0x8)
    bool IsSmall;                                                                     // 0x0A98 (size: 0x1)
    float Yaw;                                                                        // 0x0A9C (size: 0x4)
    float PreviousYaw;                                                                // 0x0AA0 (size: 0x4)
    float TurnRate;                                                                   // 0x0AA4 (size: 0x4)
    bool isAttacking;                                                                 // 0x0AA8 (size: 0x1)
    class ABP_CES1059_ArmoredTurtle_C* ArmoredTurtle;                                 // 0x0AB0 (size: 0x8)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1059_ArmoredTurtle_AnimGraphNode_TransitionResult_52B219CD4BA3F35068E3A489746580DC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1059_ArmoredTurtle_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1059_ArmoredTurtle_AnimGraphNode_BlendListByBool_E8DE4CA64819B4A5E06E8D89A191CD8D();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1059_ArmoredTurtle_AnimGraphNode_TransitionResult_C3C946094FAEAE4278A6D59C37C29E05();
    void BlueprintBeginPlay();
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_CES1059_ArmoredTurtle(int32 EntryPoint);
}; // Size: 0xAB8

#endif
