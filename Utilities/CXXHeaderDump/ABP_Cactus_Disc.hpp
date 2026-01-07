#ifndef UE4SS_SDK_ABP_Cactus_Disc_HPP
#define UE4SS_SDK_ABP_Cactus_Disc_HPP

class UABP_Cactus_Disc_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_E8C524CD45E73C2AEFEBA382D33A9F60;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D9CD0B4B4C8DBFB4ABAA2DA8545A51D5; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_76DE5B0546DF2BDB9AC0368CC2E3C923;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1A1312DC41E410FD5B005BA77BDB59B6; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_BDBDEE554C02674F1209838CAC59CD31;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_Cactus_Disc(int32 EntryPoint);
}; // Size: 0x608

#endif
