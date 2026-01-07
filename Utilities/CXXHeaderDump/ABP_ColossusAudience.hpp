#ifndef UE4SS_SDK_ABP_ColossusAudience_HPP
#define UE4SS_SDK_ABP_ColossusAudience_HPP

class UABP_ColossusAudience_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D8D94BCF4525B3FCCC05E5905C01074C;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_AE30FD1E466E719DEA6511B8DF546E4A; // 0x0410 (size: 0x70)
    float PlayRate;                                                                   // 0x0480 (size: 0x4)
    float StartPos;                                                                   // 0x0484 (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ColossusAudience_AnimGraphNode_SequencePlayer_AE30FD1E466E719DEA6511B8DF546E4A();
    void BlueprintBeginPlay();
    void ExecuteUbergraph_ABP_ColossusAudience(int32 EntryPoint);
}; // Size: 0x488

#endif
