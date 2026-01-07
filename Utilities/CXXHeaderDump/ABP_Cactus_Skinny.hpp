#ifndef UE4SS_SDK_ABP_Cactus_Skinny_HPP
#define UE4SS_SDK_ABP_Cactus_Skinny_HPP

class UABP_Cactus_Skinny_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_90EB2CBC42C7E5DA44BBE69B6C5FA948;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_317BD7F4476CD4208127F8978FAB25C5; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_456DC42547FC383F9A4C039B1760949F;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_BDDBE3264EC49D32D18089B665488FA0; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_02196FC741A69E125C8DA28947C69470;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_Cactus_Skinny(int32 EntryPoint);
}; // Size: 0x608

#endif
