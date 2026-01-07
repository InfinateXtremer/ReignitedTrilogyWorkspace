#ifndef UE4SS_SDK_ABP_CES2019B_WaterWorker_HPP
#define UE4SS_SDK_ABP_CES2019B_WaterWorker_HPP

class UABP_CES2019B_WaterWorker_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_065AFC31430862C2ADDC90B9CDE05B0A;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_995E8B6B45A524374A355E87C063872B; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_6EDF6F864163A56BAB4A078245FC5919;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_FD4F82AA44052C0CDBCD80B4C8E88806; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_F844AD484B48D4540BE2EBAFC521CD6E;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_CES2019B_WaterWorker(int32 EntryPoint);
}; // Size: 0x608

#endif
