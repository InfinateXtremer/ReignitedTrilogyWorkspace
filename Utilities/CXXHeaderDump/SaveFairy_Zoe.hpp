#ifndef UE4SS_SDK_SaveFairy_Zoe_HPP
#define UE4SS_SDK_SaveFairy_Zoe_HPP

class ASaveFairy_Zoe_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UFalconEnemyStateComponent* State_AppearPostDragonReplay;                   // 0x0860 (size: 0x8)
    class UFalconEnemyStateComponent* State_Talk;                                     // 0x0868 (size: 0x8)
    class UFalconEnemyStateComponent* State_DelayZap;                                 // 0x0870 (size: 0x8)
    class UFalconEnemyStateComponent* State_AppearZap;                                // 0x0878 (size: 0x8)
    class UFalconEnemyStateComponent* State_HiddenRespawn;                            // 0x0880 (size: 0x8)
    class UFalconEnemyStateComponent* State_ResetRadius;                              // 0x0888 (size: 0x8)
    class UFalconEnemyStateComponent* State_ZapCheck;                                 // 0x0890 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0898 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x08A0 (size: 0x8)
    class UPointLightComponent* PointLight_wand;                                      // 0x08A8 (size: 0x8)
    class UParticleSystemComponent* FairyGlow;                                        // 0x08B0 (size: 0x8)
    class UParticleSystemComponent* WandSparkles;                                     // 0x08B8 (size: 0x8)
    class UFalconEnemyStateComponent* State_HiddenIGC;                                // 0x08C0 (size: 0x8)
    class UFalconEnemyStateComponent* State_DisappearIGC;                             // 0x08C8 (size: 0x8)
    class USceneComponent* Wand_End;                                                  // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* Wand;                                                 // 0x08D8 (size: 0x8)
    class UFalconEnemyStateComponent* State_NPC;                                      // 0x08E0 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x08E8 (size: 0x8)
    class UFalconEnemyStateComponent* State_ZapDone;                                  // 0x08F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Disappear;                                // 0x08F8 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnTo;                                   // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Wait;                                     // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_PromptVisible;                            // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Zap;                                      // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_Alert;                                    // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_Appear;                                   // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hidden;                                   // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_Inactive;                                 // 0x0938 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> ZapDelay__Direction_7A1C314445587722A5644489B070BA33; // 0x0940 (size: 0x1)
    class UTimelineComponent* ZapDelay;                                               // 0x0948 (size: 0x8)
    class ACollectable_Dragon_C* WatchActor;                                          // 0x0950 (size: 0x8)
    bool SaveState;                                                                   // 0x0958 (size: 0x1)
    bool NPC_Start;                                                                   // 0x0959 (size: 0x1)
    bool VFX_Trigger;                                                                 // 0x095A (size: 0x1)
    class ASaveFairy_CheckPoint_C* Checkpoint;                                        // 0x0960 (size: 0x8)
    FString LevelCheckpointRef;                                                       // 0x0968 (size: 0x10)
    FString CheckPointName;                                                           // 0x0978 (size: 0x10)
    bool IGCVersion;                                                                  // 0x0988 (size: 0x1)
    bool SavedCheckpoint;                                                             // 0x0989 (size: 0x1)
    bool ZapImmediately;                                                              // 0x098A (size: 0x1)
    FText FairyName;                                                                  // 0x0990 (size: 0x18)
    class AActor* LastFairySave;                                                      // 0x09A8 (size: 0x8)
    bool PlayerRespawned;                                                             // 0x09B0 (size: 0x1)
    class UParticleSystem* VFX_UniqueFairyFX;                                         // 0x09B8 (size: 0x8)
    bool BindToPlayerDeath;                                                           // 0x09C0 (size: 0x1)
    FName StateOverride;                                                              // 0x09C8 (size: 0x8)
    class UParticleSystem* customSaveFairyVFX;                                        // 0x09D0 (size: 0x8)
    TArray<class AActor*> Notify Actors;                                              // 0x09D8 (size: 0x10)
    int32 Notify Value;                                                               // 0x09E8 (size: 0x4)

    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetNPCValues(FText& NPCName);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void UserConstructionScript();
    void ZapDelay__FinishedFunc();
    void ZapDelay__UpdateFunc();
    void BndEvt__State_Hidden_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Appear_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__State_Disappear_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Zap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DisappearIGC_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_HiddenIGC_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void SetTriggerState(bool Disabled);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void BndEvt__State_ZapCheck_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_ResetRadius_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_HiddenRespawn_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PlayerReady();
    void BndEvt__State_AppearZap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Zap_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_NPC_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void SaveGame();
    void PlayerDead(class AActor* Actor, const FGameplayEventData Payload);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BindPlayerControl();
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__State_PostDragonReplay_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void PromptControl(bool On);
    void BndEvt__State_Inactive_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void EmergencySetup();
    void ExecuteUbergraph_SaveFairy_Zoe(int32 EntryPoint);
}; // Size: 0x9EC

#endif
