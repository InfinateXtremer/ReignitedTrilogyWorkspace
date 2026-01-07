#ifndef UE4SS_SDK_ABP_CFS1159_Rabbits_New_HPP
#define UE4SS_SDK_ABP_CFS1159_Rabbits_New_HPP

class UABP_CFS1159_Rabbits_New_C : public UTfbAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_168D2D6449042C716DDA0F9458DDB358;               // 0x0478 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_947831894FCF830D435A418DD9B78959;               // 0x04C0 (size: 0x68)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_A867CC49418DD21C07FBE794AF519892; // 0x0528 (size: 0xA8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_880FBBCB4A804A6206140E8FD1DEC5B8; // 0x05D0 (size: 0x50)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_98D9374F45C335F1D2EDDFB4E564A0C7; // 0x0620 (size: 0x50)
    FAnimNode_Slot AnimGraphNode_Slot_ACC91CC243F9C46FBED224A8936FDB58;               // 0x0670 (size: 0x68)
    FTfbAnimNode_LipSyncBlend TfbAnimGraphNode_LipSyncBlend_7BC0FA5D4BE4267D450F8D954B3523BF; // 0x06D8 (size: 0x140)

    void AnimNotify_LeftIdle2();
    void AnimNotify_EnterIdle1();
    void AnimNotify_LeftIdle1();
    void ExecuteUbergraph_ABP_CFS1159_Rabbits_New(int32 EntryPoint);
}; // Size: 0x818

#endif
