#ifndef UE4SS_SDK_ABP_CES2006_IndigoLizard_HPP
#define UE4SS_SDK_ABP_CES2006_IndigoLizard_HPP

class UABP_CES2006_IndigoLizard_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_AE7D3E484A6DFEE499BD0CB4B97F361D;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_732A774A4F3429A1C5D9E39401198C8A; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_0FDAF36F4D28CFA33531CB88C01E690D;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_F5747EDB47AB01BF8FA4E3A72325B1AE; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_2BEDD6674E0F911691706BAD7E6E1926;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D0 (size: 0xC)
    float Direction;                                                                  // 0x06DC (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    float Speed;                                                                      // 0x06E8 (size: 0x4)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2006_IndigoLizard_AnimGraphNode_BlendSpacePlayer_732A774A4F3429A1C5D9E39401198C8A();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2006_IndigoLizard(int32 EntryPoint);
}; // Size: 0x6EC

#endif
