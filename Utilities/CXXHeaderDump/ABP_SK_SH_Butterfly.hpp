#ifndef UE4SS_SDK_ABP_SK_SH_Butterfly_HPP
#define UE4SS_SDK_ABP_SK_SH_Butterfly_HPP

class UABP_SK_SH_Butterfly_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_ECAD379E41A99BBD7EA77D9E5F84523E;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_450A43EB48EF0D77004A4CA9D3A3EB81; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_2BF4216E45A14A1B9F46CE94537D0AD5;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1182C7B244552232B29D34A62F3A48BD; // 0x04C8 (size: 0xD8)

    void ExecuteUbergraph_ABP_SK_SH_Butterfly(int32 EntryPoint);
}; // Size: 0x5A0

#endif
