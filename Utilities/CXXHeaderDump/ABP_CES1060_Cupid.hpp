#ifndef UE4SS_SDK_ABP_CES1060_Cupid_HPP
#define UE4SS_SDK_ABP_CES1060_Cupid_HPP

class UABP_CES1060_Cupid_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BFE17A0B402DECA0A67D14B5BF0115C6;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D3937E04422D1951209AED9BC560C9C0; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_8508D35F429B45155C637B8AB805905C;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_725928274ECC1C5DBAE8EDA35B4B8775; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_FC6E8E284C75F5F3C465C3AD70ECEC51;               // 0x05A0 (size: 0x68)
    class ABP_CES1060_Cupid_C* CupidSelf;                                             // 0x0608 (size: 0x8)

    void BlueprintBeginPlay();
    void AnimNotify_ShowProj();
    void AnimNotify_HideProj();
    void AnimNotify_ShowFire();
    void AnimNotify_HideFire();
    void ExecuteUbergraph_ABP_CES1060_Cupid(int32 EntryPoint);
}; // Size: 0x610

#endif
