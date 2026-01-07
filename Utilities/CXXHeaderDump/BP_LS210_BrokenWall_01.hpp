#ifndef UE4SS_SDK_BP_LS210_BrokenWall_01_HPP
#define UE4SS_SDK_BP_LS210_BrokenWall_01_HPP

class ABP_LS210_BrokenWall_01_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UDestructibleComponent* SM_LS210_BrokenWall_1_DM;                           // 0x0488 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0490 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState-Boom;                // 0x0498 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04A8 (size: 0x8)

    void UserConstructionScript();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void BndEvt__FalconLevelActorState-Boom_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_LS210_BrokenWall_01(int32 EntryPoint);
}; // Size: 0x4B0

#endif
