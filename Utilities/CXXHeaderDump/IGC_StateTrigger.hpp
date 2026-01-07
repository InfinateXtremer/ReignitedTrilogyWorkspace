#ifndef UE4SS_SDK_IGC_StateTrigger_HPP
#define UE4SS_SDK_IGC_StateTrigger_HPP

class AIGC_StateTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    bool ActiveOnStart;                                                               // 0x0338 (size: 0x1)
    TArray<class AActor*> ObjectiveActors;                                            // 0x0340 (size: 0x10)
    FName ObjectiveState;                                                             // 0x0350 (size: 0x8)
    TArray<class AActor*> ObjectiveActors_Triggered;                                  // 0x0358 (size: 0x10)
    bool TriggerWhenAll;                                                              // 0x0368 (size: 0x1)
    class ASpyro_IGC_Base_C* IGC;                                                     // 0x0370 (size: 0x8)
    class AActor* CameraExternal;                                                     // 0x0378 (size: 0x8)
    class AActor* NPC;                                                                // 0x0380 (size: 0x8)
    TArray<class AActor*> NotifyActors;                                               // 0x0388 (size: 0x10)
    bool NotifyOnStart;                                                               // 0x0398 (size: 0x1)
    int32 NotifyValue;                                                                // 0x039C (size: 0x4)
    bool Repeatable;                                                                  // 0x03A0 (size: 0x1)
    bool CurrentlyActive;                                                             // 0x03A1 (size: 0x1)
    bool InitBindEvents;                                                              // 0x03A2 (size: 0x1)
    FGameplayTagContainer TagsPreventingStart;                                        // 0x03A8 (size: 0x20)
    bool RetryIfTagPrevents;                                                          // 0x03C8 (size: 0x1)
    class UAkAudioEvent* Music On IGC Start;                                          // 0x03D0 (size: 0x8)
    class UAkAudioEvent* Music On IGC End;                                            // 0x03D8 (size: 0x8)
    bool DoNotQueue;                                                                  // 0x03E0 (size: 0x1)
    FGameplayTagContainer DamageTags;                                                 // 0x03E8 (size: 0x20)
    FGameplayTagContainer EmptyTags;                                                  // 0x0408 (size: 0x20)
    bool AnotherIGCActive;                                                            // 0x0428 (size: 0x1)
    int32 IGC_Queue;                                                                  // 0x042C (size: 0x4)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void Cancel Player Damage Abilities();
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Execute IGC();
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void ResetTrigger();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void ExecuteUbergraph_IGC_StateTrigger(int32 EntryPoint);
}; // Size: 0x430

#endif
