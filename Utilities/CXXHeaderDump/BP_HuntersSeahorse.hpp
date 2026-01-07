#ifndef UE4SS_SDK_BP_HuntersSeahorse_HPP
#define UE4SS_SDK_BP_HuntersSeahorse_HPP

class ABP_HuntersSeahorse_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreIdle;                       // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FollowPath;                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A08 (size: 0x8)
    class UTextRenderComponent* NPCName;                                              // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A20 (size: 0x8)
    float Timeline_0_0_NewTrack_0_1E273EC141362516E789F499D75DE6CA;                   // 0x0A28 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_1E273EC141362516E789F499D75DE6CA; // 0x0A2C (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0A30 (size: 0x8)
    float Timeline_1_NewTrack_0_4A994D384390E5E798FDBAB97579E031;                     // 0x0A38 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4A994D384390E5E798FDBAB97579E031; // 0x0A3C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A40 (size: 0x8)
    class AHulaController_C* MyController;                                            // 0x0A48 (size: 0x8)
    FVector originalLocation;                                                         // 0x0A50 (size: 0xC)
    class AActor* SplineActor;                                                        // 0x0A60 (size: 0x8)
    class USplineComponent* SplineRef;                                                // 0x0A68 (size: 0x8)
    bool SeahorseB;                                                                   // 0x0A70 (size: 0x1)
    class UParticleSystemComponent* WaterBubblesVFX;                                  // 0x0A78 (size: 0x8)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void SetTriggerState(bool Disabled);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveBeginPlay();
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__FalconEnemyState_FollowPath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void PromptControl(bool On);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionSuspend(bool Suspend);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void Stop();
    void ExecuteUbergraph_BP_HuntersSeahorse(int32 EntryPoint);
}; // Size: 0xA80

#endif
