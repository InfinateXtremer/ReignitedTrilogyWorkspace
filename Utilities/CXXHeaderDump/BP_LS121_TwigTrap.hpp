#ifndef UE4SS_SDK_BP_LS121_TwigTrap_HPP
#define UE4SS_SDK_BP_LS121_TwigTrap_HPP

class ABP_LS121_TwigTrap_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Disrupted;           // 0x0488 (size: 0x8)
    class UFalconSaveLocal_C* FalconSaveLocal;                                        // 0x0490 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0498 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04A0 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x04A8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04B0 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Boom;                // 0x04B8 (size: 0x8)
    FVector Timeline_0_0_Trap_Sprung_47D9A72D49C6E0B07195A780F7F9B347;                // 0x04C0 (size: 0xC)
    float Timeline_0_0_NewTrack_0_47D9A72D49C6E0B07195A780F7F9B347;                   // 0x04CC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_47D9A72D49C6E0B07195A780F7F9B347; // 0x04D0 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04D8 (size: 0x8)
    FRotator OriginalRot;                                                             // 0x04E0 (size: 0xC)
    FRotator TargetRot;                                                               // 0x04EC (size: 0xC)
    class UFalconEnemyStateComponent* Squawk;                                         // 0x04F8 (size: 0x8)
    class AActor* Chicken Be Free;                                                    // 0x0500 (size: 0x8)
    class AActor* achievement;                                                        // 0x0508 (size: 0x8)
    bool ChickenCaught;                                                               // 0x0510 (size: 0x1)
    class AActor* Collision;                                                          // 0x0518 (size: 0x8)
    bool Gnorc_Alive;                                                                 // 0x0520 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FalconLevelActorState_Boom_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_LS121_TwigTrap(int32 EntryPoint);
}; // Size: 0x521

#endif
