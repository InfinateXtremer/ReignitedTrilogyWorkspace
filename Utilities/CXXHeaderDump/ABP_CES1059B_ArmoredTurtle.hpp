#ifndef UE4SS_SDK_ABP_CES1059B_ArmoredTurtle_HPP
#define UE4SS_SDK_ABP_CES1059B_ArmoredTurtle_HPP

class UABP_CES1059B_ArmoredTurtle_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_76BB51C34E936F519B0F7F97CF18AAA6;               // 0x03C8 (size: 0x48)
    FAnimNode_Root AnimGraphNode_StateResult_9EF3BCA440F0E18B80D58AAA6C963DE4;        // 0x0410 (size: 0x48)
    FAnimNode_Root AnimGraphNode_StateResult_CFA3703E4F9C05C46C0F62A691A8BFCF;        // 0x0458 (size: 0x48)
    FAnimNode_Root AnimGraphNode_StateResult_72444BCD4052CFE5D142B68E2D6F25CC;        // 0x04A0 (size: 0x48)
    FAnimNode_Root AnimGraphNode_StateResult_8F1AE00144BB06AD852E84A4EFA49AF2;        // 0x04E8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0530 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0658 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_32D86222437A58DA66EA5E828B281943; // 0x06A0 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_1921D51E4246EA1059D5798B7C6347B3;               // 0x0778 (size: 0x68)
    float Time;                                                                       // 0x07E0 (size: 0x4)
    float Speed;                                                                      // 0x07E4 (size: 0x4)
    float Direction;                                                                  // 0x07E8 (size: 0x4)
    FRotator Rotation;                                                                // 0x07EC (size: 0xC)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x07F8 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1059B_ArmoredTurtle_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ExecuteUbergraph_ABP_CES1059B_ArmoredTurtle(int32 EntryPoint);
}; // Size: 0x800

#endif
