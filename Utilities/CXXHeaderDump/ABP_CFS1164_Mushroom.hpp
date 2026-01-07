#ifndef UE4SS_SDK_ABP_CFS1164_Mushroom_HPP
#define UE4SS_SDK_ABP_CFS1164_Mushroom_HPP

class UABP_CFS1164_Mushroom_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3E50A8BB4EEE448C89C2ABB54F3F54B3;               // 0x03C8 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_4A6573FC45502666A4C6AC8B869120BD;               // 0x0410 (size: 0x68)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2CD8881C47F1D42906A3A092A19CE7E4; // 0x0478 (size: 0x128)
    FAnimNode_Root AnimGraphNode_StateResult_1E299C8140E8E07B1E2EABAECFDCF452;        // 0x05A0 (size: 0x48)
    FAnimNode_StateMachine AnimGraphNode_StateMachine_A6946D59463E05DE990DD2A212DDF93C; // 0x05E8 (size: 0xD8)
    float Time;                                                                       // 0x06C0 (size: 0x4)
    float Speed;                                                                      // 0x06C4 (size: 0x4)
    float Direction;                                                                  // 0x06C8 (size: 0x4)
    FRotator Rotation;                                                                // 0x06CC (size: 0xC)
    class ACharacter* BaseCharacter;                                                  // 0x06D8 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x06E0 (size: 0x8)
    class ABP_CFS1164_Mushrooms_C* Mushrooms;                                         // 0x06E8 (size: 0x8)

    void BlueprintUpdateAnimation(float DeltaTimeX);
    void CustomEvent(class UBlendSpaceBase* BlendSpace);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CFS1164_Mushroom_AnimGraphNode_BlendSpacePlayer_2CD8881C47F1D42906A3A092A19CE7E4();
    void AnimNotify_Butterfly();
    void AnimNotify_InAir();
    void AnimNotify_Landed();
    void ExecuteUbergraph_ABP_CFS1164_Mushroom(int32 EntryPoint);
}; // Size: 0x6F0

#endif
