#ifndef UE4SS_SDK_ABP_CES2021_DUck_HPP
#define UE4SS_SDK_ABP_CES2021_DUck_HPP

class UABP_CES2021_Duck_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_0BB1619E4F22934F2F8500BEFA8B725F;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77BB5F8B47F459C538E8ACB03BC1E676; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_F904FF7E4A837E129590A79AFD6A4F91;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D048690B490305E1C27A4E8F63EC3BAD; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_A5D718B54DAD2B157CC42BADD89BD400;               // 0x05A0 (size: 0x68)
    class ABP_CES2021_Duck_C* MyDuck;                                                 // 0x0608 (size: 0x8)

    void AnimNotify_StopSliding();
    void BlueprintInitializeAnimation();
    void AnimNotify_Custom Duck Dissolve();
    void AnimNotify_Throw Helmet();
    void AnimNotify_Start Turning();
    void AnimNotify_Stop Turning();
    void AnimNotify_Rumble();
    void AnimNotify_PlayShock();
    void ExecuteUbergraph_ABP_CES2021_Duck(int32 EntryPoint);
}; // Size: 0x610

#endif
