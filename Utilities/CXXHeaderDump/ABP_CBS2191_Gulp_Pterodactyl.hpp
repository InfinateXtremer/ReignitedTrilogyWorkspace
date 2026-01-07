#ifndef UE4SS_SDK_ABP_CBS2191_Gulp_Pterodactyl_HPP
#define UE4SS_SDK_ABP_CBS2191_Gulp_Pterodactyl_HPP

class UABP_CBS2191_Gulp_Pterodactyl_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_B1341B6646D392FDC81AD7BA6E1D1C25;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_EC163A944445337189D7DB92452EA58D; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_1D28646A4C7C5CB56971CC91D790EECF;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_6977E1D34549CF7F2D4591B1DB1FAD28; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_FD6269AC4253CA043AC9F681D8C3889A;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D0 (size: 0xC)
    float Direction;                                                                  // 0x06DC (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    float Speed;                                                                      // 0x06E8 (size: 0x4)

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CBS2191_Gulp_Pterodactyl_AnimGraphNode_BlendSpacePlayer_EC163A944445337189D7DB92452EA58D();
    void ExecuteUbergraph_ABP_CBS2191_Gulp_Pterodactyl(int32 EntryPoint);
}; // Size: 0x6EC

#endif
