#ifndef UE4SS_SDK_BP_CNS2221B_CavemanBoneBuilderBaby_HPP
#define UE4SS_SDK_BP_CNS2221B_CavemanBoneBuilderBaby_HPP

class ABP_CNS2221B_CavemanBoneBuilderBaby_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlarmedClock;                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FakeIdle;                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hit2;                          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Hit1;                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunOnFireDoneB;                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunOnFireFromEnemyB;           // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunOnFireDone;                 // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunOnFireFromEnemy;            // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlarmedCounterClock;           // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BurnedByEnemy;                 // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BurnedByPlayer;                // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Happy;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointsDone;                 // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WalkToWaypoints;               // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreIdle;                       // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FakeDeath;                     // 0x0A70 (size: 0x8)
    class UTextRenderComponent* NPCName;                                              // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A88 (size: 0x8)
    FVector Location;                                                                 // 0x0A90 (size: 0xC)
    FRotator Rotation;                                                                // 0x0A9C (size: 0xC)
    FTransform originalLocation;                                                      // 0x0AB0 (size: 0x30)
    class AActor* MyEnemy;                                                            // 0x0AE0 (size: 0x8)
    class ASaveGame_Mgr_Collect_Local_C* MySaveObject;                                // 0x0AE8 (size: 0x8)
    bool EnemyDead;                                                                   // 0x0AF0 (size: 0x1)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreIdle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void PromptControl(bool On);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void ReceiveBeginPlay();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__FalconEnemyState_BurnedByPlayer_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_BurnedByEnemy_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void PlayerReady();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_CNS2221B_CavemanBoneBuilderBaby(int32 EntryPoint);
}; // Size: 0xAF1

#endif
