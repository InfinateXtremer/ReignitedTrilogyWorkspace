#ifndef UE4SS_SDK_ABP_CES1155_LampFool_HPP
#define UE4SS_SDK_ABP_CES1155_LampFool_HPP

class UABP_CES1155_LampFool_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BBAEB2D244F135ABDD3D0ABFB568A1D4;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_FADF4AE34E9ADEC81E5EDFACD87BD7F8; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_80B26C4649A3066FD89311A308B8C6B0;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_85E017974D8F345963B1CEB040826495; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_8C9FCE40411E6A0FE6F111BEBD3DA14E;               // 0x05A0 (size: 0x68)

    void AnimNotify_LightsOn();
    void AnimNotify_LightsOff();
    void ExecuteUbergraph_ABP_CES1155_LampFool(int32 EntryPoint);
}; // Size: 0x608

#endif
