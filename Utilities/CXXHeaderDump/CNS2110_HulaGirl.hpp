#ifndef UE4SS_SDK_CNS2110_HulaGirl_HPP
#define UE4SS_SDK_CNS2110_HulaGirl_HPP

class ACNS2110_HulaGirl_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FlamedVictory;                 // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flamed;                        // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wave;                          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToCenterOnPedestal;        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DanceOnPedestal;               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_VictoryDance;                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_InCenter;                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HitReturn;                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HitToCenter;                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A40 (size: 0x8)
    class UTextRenderComponent* NPCName;                                              // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)
    float Timeline_0_0_Spin_68E5E54A4066C9309362919838D27438;                         // 0x0A60 (size: 0x4)
    float Timeline_0_0_NewTrack_0_68E5E54A4066C9309362919838D27438;                   // 0x0A64 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_68E5E54A4066C9309362919838D27438; // 0x0A68 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0A70 (size: 0x8)
    float Timeline_1_NewTrack_0_00AAE9F04B3F9254CA08B8828DDD384E;                     // 0x0A78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_00AAE9F04B3F9254CA08B8828DDD384E; // 0x0A7C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A80 (size: 0x8)
    class AHulaController_C* MyController;                                            // 0x0A88 (size: 0x8)
    class AActor* SplineActorA;                                                       // 0x0A90 (size: 0x8)
    class AActor* SplineActorB;                                                       // 0x0A98 (size: 0x8)
    class USplineComponent* SplineRefA;                                               // 0x0AA0 (size: 0x8)
    class USplineComponent* SplineRefB;                                               // 0x0AA8 (size: 0x8)
    FRotator StartingRot;                                                             // 0x0AB0 (size: 0xC)
    FVector StartingLoc;                                                              // 0x0ABC (size: 0xC)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__FalconEnemyState_HitToCenter_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void SetTriggerState(bool Disabled);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void BndEvt__FalconEnemyState_HitReturn_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void PromptControl(bool On);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_DanceOnPedestal_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReset(class AActor* RequestActor);
    void Force Victory();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_CNS2110_HulaGirl(int32 EntryPoint);
}; // Size: 0xAC8

#endif
