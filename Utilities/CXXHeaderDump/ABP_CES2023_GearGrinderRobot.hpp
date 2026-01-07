#ifndef UE4SS_SDK_ABP_CES2023_GearGrinderRobot_HPP
#define UE4SS_SDK_ABP_CES2023_GearGrinderRobot_HPP

class UABP_CES2023_GearGrinderRobot_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_14BA68E64ECF0AF180C17891A941C432;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_BAB4B1494E747A655CCBCEA8ACADC0D6; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_04E80A3F46F502BD07454CB8480B94ED;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_EBCF7BD34C5E7D3B860E44985EAA98AD; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_F87C10C84FDEF12EF91E64888A9BEF5E;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D0 (size: 0xC)
    float Speed;                                                                      // 0x06DC (size: 0x4)
    float Direction;                                                                  // 0x06E0 (size: 0x4)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E8 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2023_GearGrinderRobot_AnimGraphNode_BlendSpacePlayer_BAB4B1494E747A655CCBCEA8ACADC0D6();
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2023_GearGrinderRobot(int32 EntryPoint);
}; // Size: 0x6F0

#endif
