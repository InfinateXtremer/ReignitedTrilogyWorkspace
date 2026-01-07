#ifndef UE4SS_SDK_ABP_Cactus_Ground_2_HPP
#define UE4SS_SDK_ABP_Cactus_Ground_2_HPP

class UABP_Cactus_Ground_2_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_595A0D324581004B392459935D90318C;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E9A9F55D4D18B550192E84981D0CD2FC; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_CCB6386C4258369400DDA48AE4C81BFC;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_819BC95F4D71F27BBE45C0AAD39C6A1B; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_410D5063437CA5C60D2B5887615A4BE6;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_Cactus_Ground_2(int32 EntryPoint);
}; // Size: 0x608

#endif
