#ifndef UE4SS_SDK_ABP_Cactus_Chunky_HPP
#define UE4SS_SDK_ABP_Cactus_Chunky_HPP

class UABP_Cactus_Chunky_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_0ADA7C084BF0025A029DA1B3D941D535;               // 0x03C8 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_946758E2406C87C62903D486637EABFD; // 0x0410 (size: 0x70)
    FAnimNode_Root AnimGraphNode_StateResult_3BF90E104334C99C8FAAD7BE4ED62E93;        // 0x0480 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_527CA535484BEEA05D3EC1A323511AB7; // 0x04C8 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_45635F724BF6C5B121F0E5BE52179FE0;               // 0x05A0 (size: 0x68)
    float Time;                                                                       // 0x0608 (size: 0x4)
    float Speed;                                                                      // 0x060C (size: 0x4)
    float Direction;                                                                  // 0x0610 (size: 0x4)
    FRotator Rotation;                                                                // 0x0614 (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x0620 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_Cactus_Chunky(int32 EntryPoint);
}; // Size: 0x628

#endif
