#ifndef UE4SS_SDK_ABP_SK_SH_Chest_1UP_HPP
#define UE4SS_SDK_ABP_SK_SH_Chest_1UP_HPP

class UABP_SK_SH_Chest_1UP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_48FC7A054961392EF522788A661D18FB;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_85672FD546896674846BDCB1C70AD641; // 0x0410 (size: 0x70)

    void ExecuteUbergraph_ABP_SK_SH_Chest_1UP(int32 EntryPoint);
}; // Size: 0x480

#endif
