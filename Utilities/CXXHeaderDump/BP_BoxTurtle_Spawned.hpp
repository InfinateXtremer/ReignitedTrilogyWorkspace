#ifndef UE4SS_SDK_BP_BoxTurtle_Spawned_HPP
#define UE4SS_SDK_BP_BoxTurtle_Spawned_HPP

class ABP_BoxTurtle_Spawned_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToCauldron_Invuln;         // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS206_Soup_Turtle_Spin;                    // 0x0A00 (size: 0x8)
    class UPhasmidProjectileMovementComponent* PhasmidProjectileMovement;             // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SlideOut;                      // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SlideIn;                       // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveOutOfTube;                 // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToCauldron;                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Slide;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToDummy;                   // 0x0A38 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Jump;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunAway;                       // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Swim;                          // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Pause;                         // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_GameOver;                      // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToCauldron;                // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnAway;                      // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A88 (size: 0x8)
    float Timeline_0_0_NewTrack_0_929DCEAA4BD73ACCAD5F3683F44D72E8;                   // 0x0A90 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_929DCEAA4BD73ACCAD5F3683F44D72E8; // 0x0A94 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0A98 (size: 0x8)
    float TurnAway_Turning_E0394A7244470B675D80989A1306AF31;                          // 0x0AA0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TurnAway__Direction_E0394A7244470B675D80989A1306AF31; // 0x0AA4 (size: 0x1)
    class UTimelineComponent* TurnAway;                                               // 0x0AA8 (size: 0x8)
    FRotator MyRotation;                                                              // 0x0AB0 (size: 0xC)
    FRotator TargetRotation;                                                          // 0x0ABC (size: 0xC)
    class AActor* MyDummy;                                                            // 0x0AC8 (size: 0x8)
    class AActor* Cauldron;                                                           // 0x0AD0 (size: 0x8)
    class AActor* OtherActor;                                                         // 0x0AD8 (size: 0x8)
    FName State;                                                                      // 0x0AE0 (size: 0x8)
    bool Checking;                                                                    // 0x0AE8 (size: 0x1)
    class AActor* TurtleController;                                                   // 0x0AF0 (size: 0x8)
    class AActor* TubeExitDummy;                                                      // 0x0AF8 (size: 0x8)
    class UParticleSystemComponent* Spin_VFX;                                         // 0x0B00 (size: 0x8)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void TurnAway__FinishedFunc();
    void TurnAway__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_TurnAway_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Jump_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FalconEnemyState_Slide_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_MoveToDummy_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_SlideIn_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_BoxTurtle_Spawned(int32 EntryPoint);
}; // Size: 0xB08

#endif
