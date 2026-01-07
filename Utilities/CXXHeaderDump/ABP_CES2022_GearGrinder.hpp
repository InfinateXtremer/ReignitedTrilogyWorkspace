#ifndef UE4SS_SDK_ABP_CES2022_GearGrinder_HPP
#define UE4SS_SDK_ABP_CES2022_GearGrinder_HPP

class UABP_CES2022_GearGrinder_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_60DB9E174D658F5B02E91A83EF001A4F;               // 0x03C8 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_A7F015B14D4A994B8C8E0EBFE440F1CE; // 0x0410 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_C18CDDC64BDB41B654A54AB298EF26A2;        // 0x0538 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_D095B5EE4B3B76B556FDA9958F7C356A; // 0x0580 (size: 0xD8)
    FAnimNode_Slot AnimGraphNode_Slot_E713B61545B1A0962F061FA20BA56BC1;               // 0x0658 (size: 0x68)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    class ACharacter* BaseCharacter;                                                  // 0x06C8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06D0 (size: 0x8)
    FRotator Rotation;                                                                // 0x06D8 (size: 0xC)
    float Speed;                                                                      // 0x06E4 (size: 0x4)
    float Direction;                                                                  // 0x06E8 (size: 0x4)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void SetIdleStartOffset(float OffsetPercent);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CES2022_GearGrinder_AnimGraphNode_BlendSpacePlayer_A7F015B14D4A994B8C8E0EBFE440F1CE();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void ExecuteUbergraph_ABP_CES2022_GearGrinder(int32 EntryPoint);
}; // Size: 0x6EC

#endif
