#ifndef UE4SS_SDK_ABP_CES1203_PlaneGnorcPilot_HPP
#define UE4SS_SDK_ABP_CES1203_PlaneGnorcPilot_HPP

class UABP_CES1203_PlaneGnorcPilot_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_8B625B384D285D356E1088BA7D899276;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_42DB3DEB4A975E7AE0BB94A41C97EA5C; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_0837456743C868F408DE44B3D5B03762;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_AF9C39644C8D2AE35D6ED1AA208EBC5B; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E71341354635C07F299F1593DC80FFE2;               // 0x0658 (size: 0x68)
    class UABP_CES1203_PlaneGnorcPilot_C* LocomotionBlendspace;                       // 0x06C0 (size: 0x8)
    float Speed;                                                                      // 0x06C8 (size: 0x4)

    void ExecuteUbergraph_ABP_CES1203_PlaneGnorcPilot(int32 EntryPoint);
}; // Size: 0x6CC

#endif
