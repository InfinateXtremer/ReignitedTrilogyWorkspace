#ifndef UE4SS_SDK_ABP_SP3_SpyroPlayable_HPP
#define UE4SS_SDK_ABP_SP3_SpyroPlayable_HPP

class UABP_SP3_SpyroPlayable_C : public USP3_AnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_117263704CD9BF6F6E2D5CBC3C7231D7;               // 0x06C8 (size: 0x48)
    FAnimNode_Locomotion AnimGraphNode_Locomotion_DF8F737F43A43BE71FEBED9AA3185AE5;   // 0x0710 (size: 0x7E0)
    FAnimNode_ProcChain AnimGraphNode_ProcChain_4586BDC244BB9244449A19BFC927ABDB;     // 0x0EF0 (size: 0x130)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5A14D86440723B3AA40556BED7E51BD4; // 0x1020 (size: 0x48)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7C725A7046DA0D7D52DC38A13B217DEB; // 0x1068 (size: 0x48)
    FAnimNode_RK4Spring AnimGraphNode_RK4Spring_E0386F38400E72D42B038CA73ECE0796;     // 0x10B0 (size: 0xF0)
    FAnimNode_RK4Spring AnimGraphNode_RK4Spring_BC3774E64C4B7B301F2830A2C207A8DB;     // 0x11A0 (size: 0xF0)
    FAnimNode_RK4Spring AnimGraphNode_RK4Spring_5703291E42BB26B62A92D0AFBECCB92E;     // 0x1290 (size: 0xF0)
    FAnimNode_RK4Spring AnimGraphNode_RK4Spring_482F6B534639DC1F0061B8A4B6951920;     // 0x1380 (size: 0xF0)

    void ExecuteUbergraph_ABP_SP3_SpyroPlayable(int32 EntryPoint);
}; // Size: 0x1470

#endif
