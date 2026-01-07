#ifndef UE4SS_SDK_JumpOutTrigger_HPP
#define UE4SS_SDK_JumpOutTrigger_HPP

class AJumpOutTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class UArrowComponent* JumpDestination2;                                          // 0x0328 (size: 0x8)
    class UArrowComponent* JumpDestination;                                           // 0x0330 (size: 0x8)
    class UCapsuleComponent* WalkDestination;                                         // 0x0338 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0348 (size: 0x8)
    float Timeline_2_NewTrack_0_450C628A42C20AD145D1E99C4346B620;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_450C628A42C20AD145D1E99C4346B620; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0358 (size: 0x8)
    float Timeline_1_JumpVertical_4586DCFC4AA2C30103F8FD8AF11272A9;                   // 0x0360 (size: 0x4)
    float Timeline_1_JumpHorizontal_4586DCFC4AA2C30103F8FD8AF11272A9;                 // 0x0364 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4586DCFC4AA2C30103F8FD8AF11272A9; // 0x0368 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0370 (size: 0x8)
    float Timeline_0_JumpVertical_2AF8EAA94E45732A1E1B4CBFAEA6B306;                   // 0x0378 (size: 0x4)
    float Timeline_0_JumpHorizontal_2AF8EAA94E45732A1E1B4CBFAEA6B306;                 // 0x037C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2AF8EAA94E45732A1E1B4CBFAEA6B306; // 0x0380 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0388 (size: 0x8)
    bool UseWalk;                                                                     // 0x0390 (size: 0x1)
    float JumpMultiplier;                                                             // 0x0394 (size: 0x4)
    FVector StartLoc;                                                                 // 0x0398 (size: 0xC)
    FVector EndLoc;                                                                   // 0x03A4 (size: 0xC)
    FRotator StartRot;                                                                // 0x03B0 (size: 0xC)
    FRotator EndRot;                                                                  // 0x03BC (size: 0xC)
    bool Reseted;                                                                     // 0x03C8 (size: 0x1)
    bool done;                                                                        // 0x03C9 (size: 0x1)
    bool Started;                                                                     // 0x03CA (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void MinigameStart();
    void MinigameEnd();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__WalkDestination_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StartJump();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_JumpOutTrigger(int32 EntryPoint);
}; // Size: 0x3CB

#endif
