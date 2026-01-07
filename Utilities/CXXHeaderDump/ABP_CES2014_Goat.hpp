#ifndef UE4SS_SDK_ABP_CES2014_Goat_HPP
#define UE4SS_SDK_ABP_CES2014_Goat_HPP

class UABP_CES2014_Goat_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_D2C2C0EA48A696B238717C9FFABFA9CC;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_0DAB126646520BC2C3F612ABD203FF09; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_22C8E5964514C68641EAB6B5BA10650F;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_E73FAC22499BEE47874A9A8865DCFBC8; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_54D1A9F941CAF2EADFEDCC9D73CAE1BD;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    float Speed;                                                                      // 0x06D0 (size: 0x4)
    FRotator Rotation;                                                                // 0x06D4 (size: 0xC)
    float Direction;                                                                  // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2014_Goat_AnimGraphNode_BlendSpacePlayer_0DAB126646520BC2C3F612ABD203FF09();
    void SetIdleStartOffset(float OffsetPercent);
    void ExecuteUbergraph_ABP_CES2014_Goat(int32 EntryPoint);
}; // Size: 0x6F0

#endif
