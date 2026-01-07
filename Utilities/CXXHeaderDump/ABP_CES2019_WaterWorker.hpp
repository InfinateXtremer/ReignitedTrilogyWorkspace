#ifndef UE4SS_SDK_ABP_CES2019_WaterWorker_HPP
#define UE4SS_SDK_ABP_CES2019_WaterWorker_HPP

class UABP_CES2019_WaterWorker_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_BF4BF2294A0246BB4B8E29A70E12D6FF;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46F0C37A46B6C3FC6AC5859907E29356; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_0894EA224DAD0B41730880813EA98AFC;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_C7606A3C49695DF5CB22229B346654AB; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E7D5D34946B889E7B19692BF9EA755F9;               // 0x05A0 (size: 0x68)

    void ExecuteUbergraph_ABP_CES2019_WaterWorker(int32 EntryPoint);
}; // Size: 0x608

#endif
