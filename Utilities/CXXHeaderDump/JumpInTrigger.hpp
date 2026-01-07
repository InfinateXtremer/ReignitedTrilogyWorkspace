#ifndef UE4SS_SDK_JumpInTrigger_HPP
#define UE4SS_SDK_JumpInTrigger_HPP

class AJumpInTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0320 (size: 0x8)
    class UArrowComponent* JumpDestination;                                           // 0x0328 (size: 0x8)
    class UCapsuleComponent* WalkDestination;                                         // 0x0330 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0338 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float Timeline_0_JumpVertical_84C464D2476CD5E026FB8E892C3E8308;                   // 0x0350 (size: 0x4)
    float Timeline_0_JumpHorizontal_84C464D2476CD5E026FB8E892C3E8308;                 // 0x0354 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_84C464D2476CD5E026FB8E892C3E8308; // 0x0358 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0360 (size: 0x8)
    bool UseWalk;                                                                     // 0x0368 (size: 0x1)
    bool Activated;                                                                   // 0x0369 (size: 0x1)
    float JumpMultiplier;                                                             // 0x036C (size: 0x4)
    FVector StartLoc;                                                                 // 0x0370 (size: 0xC)
    FVector EndLoc;                                                                   // 0x037C (size: 0xC)
    FRotator StartRot;                                                                // 0x0388 (size: 0xC)
    FRotator EndRot;                                                                  // 0x0394 (size: 0xC)
    class AActor* SubRef;                                                             // 0x03A0 (size: 0x8)
    class AActor* TeleportSpot;                                                       // 0x03A8 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MinigameStart();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__WalkDestination_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StartJump();
    void ResetTriggers();
    void MissionEnd(bool Success, bool LevelEnd);
    void MinigameEnd();
    void InitializeMoving();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_JumpInTrigger(int32 EntryPoint);
}; // Size: 0x3B0

#endif
