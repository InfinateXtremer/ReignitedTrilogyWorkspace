#ifndef UE4SS_SDK_ABP_Spyro_SquidBoard_HPP
#define UE4SS_SDK_ABP_Spyro_SquidBoard_HPP

class UABP_Spyro_SquidBoard_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_0EFAF9AA4A9CC96A7B29B4A5F47EB098;               // 0x03C8 (size: 0x48)
    FAnimNode_ProcChain AnimGraphNode_ProcChain_591894824E16CF1FA110218E087D26E1;     // 0x0410 (size: 0x130)
    FAnimNode_ProcChain AnimGraphNode_ProcChain_64433D3E49C981F137C2F18BF6E54236;     // 0x0540 (size: 0x130)
    FAnimNode_ProcChain AnimGraphNode_ProcChain_B53899D04612182321BDF5B2B9C604F5;     // 0x0670 (size: 0x130)
    FAnimNode_ProcChain AnimGraphNode_ProcChain_9771F1B645D8B201528E3D997797C678;     // 0x07A0 (size: 0x130)
    FAnimNode_ProcChain AnimGraphNode_ProcChain_63F894CC4DE9F1B184016AA71D7E6EA2;     // 0x08D0 (size: 0x130)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_127099D54C92D9FC335ECDA72E7948C5; // 0x0A00 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0D6F715641118EE32B88838DDAB8A134; // 0x0A48 (size: 0x70)
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_4EA516D849BB4DE7D5A72A8FBEE3B595; // 0x0AB8 (size: 0x30)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_301A36444F7D552A9030B0BB4D9A8B4A; // 0x0AE8 (size: 0x78)

    void ExecuteUbergraph_ABP_Spyro_SquidBoard(int32 EntryPoint);
}; // Size: 0xB60

#endif
