#ifndef UE4SS_SDK_CNS2161_Zoe_HPP
#define UE4SS_SDK_CNS2161_Zoe_HPP

class ACNS2161_Zoe_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UParticleSystemComponent* PS_CNS2161_Wand_glow;                             // 0x0860 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0868 (size: 0x8)
    class UParticleSystemComponent* PS_SaveFairyZoe2161_glow;                         // 0x0870 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RiptoState;                    // 0x0878 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PlayerRespawn;                 // 0x0880 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Evade;                         // 0x0888 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ZapCheck;                      // 0x0890 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Talk;                          // 0x0898 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IntroZapZoe2;                  // 0x08A0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MovePostCS;                    // 0x08A8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaitPreCS_Low;                 // 0x08B0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HiddenAtRange;                 // 0x08B8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DisappearAtRange;              // 0x08C0 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x08C8 (size: 0x8)
    class UFalconEnemyStateComponent* State_WaitPostCS;                               // 0x08D0 (size: 0x8)
    class UFalconEnemyStateComponent* State_WaitPreCS;                                // 0x08D8 (size: 0x8)
    class UFalconEnemyStateComponent* State_AppearPreCS;                              // 0x08E0 (size: 0x8)
    class UFalconEnemyStateComponent* State_HiddenPreCS;                              // 0x08E8 (size: 0x8)
    class UFalconEnemyStateComponent* State_DisappearPreCS;                           // 0x08F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Line2;                                    // 0x08F8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Appear;                                   // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hidden;                                   // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_Disappear;                                // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Wait;                                     // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_IntroZap;                                 // 0x0920 (size: 0x8)
    class USceneComponent* Wand_End;                                                  // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Wand;                                                 // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_NPC;                                      // 0x0938 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* State_ZapDone;                                  // 0x0948 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnTo;                                   // 0x0950 (size: 0x8)
    class UFalconEnemyStateComponent* State_PromptVisible;                            // 0x0958 (size: 0x8)
    class UFalconEnemyStateComponent* State_Zap;                                      // 0x0960 (size: 0x8)
    class UFalconEnemyStateComponent* State_Alert;                                    // 0x0968 (size: 0x8)
    class UFalconEnemyStateComponent* State_Inactive;                                 // 0x0970 (size: 0x8)
    float ZapOffsetTimeline_NewTrack_0_FC02F6034E8E3A00004E2087DF6D6271;              // 0x0978 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ZapOffsetTimeline__Direction_FC02F6034E8E3A00004E2087DF6D6271; // 0x097C (size: 0x1)
    class UTimelineComponent* ZapOffsetTimeline;                                      // 0x0980 (size: 0x8)
    float Timeline_0_NewTrack_0_C234A12943123E2CABD9C59DABD558B9;                     // 0x0988 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C234A12943123E2CABD9C59DABD558B9; // 0x098C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0990 (size: 0x8)
    float RaiseZoe_NewTrack_0_6DA34FAC403B2CC15D9343BCFD46AEF9;                       // 0x0998 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RaiseZoe__Direction_6DA34FAC403B2CC15D9343BCFD46AEF9; // 0x099C (size: 0x1)
    class UTimelineComponent* RaiseZoe;                                               // 0x09A0 (size: 0x8)
    float LowerZoe_NewTrack_0_D5EF2C6C419E50B5EF17D5A0382570BE;                       // 0x09A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LowerZoe__Direction_D5EF2C6C419E50B5EF17D5A0382570BE; // 0x09AC (size: 0x1)
    class UTimelineComponent* LowerZoe;                                               // 0x09B0 (size: 0x8)
    class ACollectable_Dragon_C* WatchActor;                                          // 0x09B8 (size: 0x8)
    bool SaveState;                                                                   // 0x09C0 (size: 0x1)
    bool NPC_Start;                                                                   // 0x09C1 (size: 0x1)
    bool VFX_Trigger;                                                                 // 0x09C2 (size: 0x1)
    class ASaveFairy_CheckPoint_C* Checkpoint;                                        // 0x09C8 (size: 0x8)
    class AActor* IGC Selector;                                                       // 0x09D0 (size: 0x8)
    int32 IGCIndex;                                                                   // 0x09D8 (size: 0x4)
    FPhasmidObjectSaveDataList saveData;                                              // 0x09E0 (size: 0x10)
    FVector Origin;                                                                   // 0x09F0 (size: 0xC)
    bool MovingToOrigin;                                                              // 0x09FC (size: 0x1)
    bool Zoe2;                                                                        // 0x09FD (size: 0x1)
    bool Zapped;                                                                      // 0x09FE (size: 0x1)
    bool TurnToPlayer;                                                                // 0x09FF (size: 0x1)
    class UAnimSequence* NewVar_0;                                                    // 0x0A00 (size: 0x8)
    class UAnimMontage* PlayingLipSync;                                               // 0x0A08 (size: 0x8)
    class UAnimSequence* LocalLipSync;                                                // 0x0A10 (size: 0x8)
    float RelativeZPos;                                                               // 0x0A18 (size: 0x4)
    bool ReadyForRespawn;                                                             // 0x0A1C (size: 0x1)
    bool Hidden;                                                                      // 0x0A1D (size: 0x1)
    class AZoe_GlowFX_C* GlowFX;                                                      // 0x0A20 (size: 0x8)
    bool RespawnActive;                                                               // 0x0A28 (size: 0x1)
    bool DisableGlowVFX;                                                              // 0x0A29 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetNPCValues(FText& NPCName);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void UserConstructionScript();
    void LowerZoe__FinishedFunc();
    void LowerZoe__UpdateFunc();
    void RaiseZoe__FinishedFunc();
    void RaiseZoe__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ZapOffsetTimeline__FinishedFunc();
    void ZapOffsetTimeline__UpdateFunc();
    void ZapOffsetTimeline__Zap__EventFunc();
    void PromptControl(bool On);
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
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Appear_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Disappear_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Zap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DisappearIGC_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_IntroZap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Line2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_AppearPreCS_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DisappearPreCS_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BndEvt__State_HiddenPreCS_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Hidden_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_HiddenAtRange_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_DisappearAtRange_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MovePostCS_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IntroZapZoe2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__State_WaitPreCS_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ZapCheck_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void RaiseZoeEvent();
    void BndEvt__FalconEnemyState_Evade_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PlayerDied(class AActor* Actor, const FGameplayEventData Payload);
    void PlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CNS2161_Zoe(int32 EntryPoint);
}; // Size: 0xA2A

#endif
