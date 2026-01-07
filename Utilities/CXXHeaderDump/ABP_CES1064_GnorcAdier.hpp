#ifndef UE4SS_SDK_ABP_CES1064_GnorcAdier_HPP
#define UE4SS_SDK_ABP_CES1064_GnorcAdier_HPP

class UABP_CES1064_GnorcAdier_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_185AC49E499EB59F5B7B1D876ED23B4F;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11A7D4194B7C026B30700C977F987CFB; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_9E3268B64AF435945AAB84AAC7B5A915;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_AA0919FD402E841DF823AF9467040568; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_14A5773844EAF6C61B2F41A572E1CFDD;               // 0x05A0 (size: 0x68)
    class UObject* Pawn;                                                              // 0x0608 (size: 0x8)

    void AnimNotify_HideBomb();
    void AnimNotify_ShowBomb();
    void BlueprintInitializeAnimation();
    void AnimNotify_Light Fuse();
    void AnimNotify_Kill Fuse();
    void ExecuteUbergraph_ABP_CES1064_GnorcAdier(int32 EntryPoint);
}; // Size: 0x610

#endif
