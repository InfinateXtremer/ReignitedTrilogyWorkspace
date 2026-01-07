#ifndef UE4SS_SDK_ABP_CES1199_TrainGnorcDriver_HPP
#define UE4SS_SDK_ABP_CES1199_TrainGnorcDriver_HPP

class UABP_CES1199_TrainGnorcDriver_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_888D547A483FC89286DFD8BD0A88480F;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BA3031F2468A9AF1E84B808D0CF750DE; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_68EB35C14D479AA71E3DC7A459FD9CB6;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_8A523B2847C1D91FB360B89CB7145F1B; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_D3B5312A40A29A440B5A33B296B197DA;               // 0x0658 (size: 0x68)
    float Speed;                                                                      // 0x06C0 (size: 0x4)

    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES1199_TrainGnorcDriver_AnimGraphNode_BlendSpacePlayer_BA3031F2468A9AF1E84B808D0CF750DE();
    void ExecuteUbergraph_ABP_CES1199_TrainGnorcDriver(int32 EntryPoint);
}; // Size: 0x6C4

#endif
