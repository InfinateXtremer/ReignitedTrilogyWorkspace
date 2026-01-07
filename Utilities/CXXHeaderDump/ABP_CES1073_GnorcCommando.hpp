#ifndef UE4SS_SDK_ABP_CES1073_GnorcCommando_HPP
#define UE4SS_SDK_ABP_CES1073_GnorcCommando_HPP

class UABP_CES1073_GnorcCommando_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_A4943E534568A16D6F0F59A3C4A5BCF9;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_23F0FDD04B6398D855BDE8B8154E7204;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_89BD698043EAB82285C6BDB6DB5F0278; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E19E020E4724592940F18FB4A2508B48;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D0 (size: 0xC)
    float Direction;                                                                  // 0x06DC (size: 0x4)
    float Speed;                                                                      // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void SetIdleStartOffset(float OffsetPercent);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1073_GnorcCommando_AnimGraphNode_BlendSpacePlayer_DB19CB9C4D99287516854287E84D7FCC();
    void ExecuteUbergraph_ABP_CES1073_GnorcCommando(int32 EntryPoint);
}; // Size: 0x6F0

#endif
