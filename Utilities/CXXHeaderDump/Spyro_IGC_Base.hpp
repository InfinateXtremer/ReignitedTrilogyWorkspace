#ifndef UE4SS_SDK_Spyro_IGC_Base_HPP
#define UE4SS_SDK_Spyro_IGC_Base_HPP

class ASpyro_IGC_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* Text_VO;                                              // 0x0320 (size: 0x8)
    class UTextRenderComponent* Text_Save;                                            // 0x0328 (size: 0x8)
    class UTextRenderComponent* Text_Index;                                           // 0x0330 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0338 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0340 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0348 (size: 0x8)
    class AActor* NPC;                                                                // 0x0350 (size: 0x8)
    class AActor* IGCStartActor;                                                      // 0x0358 (size: 0x8)
    class AActor* CamActor;                                                           // 0x0360 (size: 0x8)
    int32 VO_Index;                                                                   // 0x0368 (size: 0x4)
    TArray<FDataTableRowHandle> VO_Queue;                                             // 0x0370 (size: 0x10)
    bool PlayImmediately;                                                             // 0x0380 (size: 0x1)
    bool UsePrompt;                                                                   // 0x0381 (size: 0x1)
    float CamFadeInTime;                                                              // 0x0384 (size: 0x4)
    float CamFadeOutTime;                                                             // 0x0388 (size: 0x4)
    int32 Next_IGC_Index;                                                             // 0x038C (size: 0x4)
    int32 SaveIndex;                                                                  // 0x0390 (size: 0x4)
    bool SaveShowFairy;                                                               // 0x0394 (size: 0x1)
    bool ReleasePlayerDuringFairy;                                                    // 0x0395 (size: 0x1)
    float VO_Time;                                                                    // 0x0398 (size: 0x4)
    FText VO_Text;                                                                    // 0x03A0 (size: 0x18)
    class UAkAudioEvent* VO_Line;                                                     // 0x03B8 (size: 0x8)
    bool DEBUG ON START;                                                              // 0x03C0 (size: 0x1)
    class AActor* DEBUG ACTOR;                                                        // 0x03C8 (size: 0x8)
    FDataTableRowHandle RowHandleRef;                                                 // 0x03D0 (size: 0x10)
    TArray<FDataTableRowHandle> VO_Queue_Playing;                                     // 0x03E0 (size: 0x10)
    FText VO_DebugLetter;                                                             // 0x03F0 (size: 0x18)
    bool VO_ShowDebugInfo;                                                            // 0x0408 (size: 0x1)
    bool CurrentlyActiveIGC;                                                          // 0x0409 (size: 0x1)
    class UAnimSequence* VO_LipSyncAnimSeq;                                           // 0x0410 (size: 0x8)
    class UAnimMontage* MontageSaved;                                                 // 0x0418 (size: 0x8)
    FText VO_Title;                                                                   // 0x0420 (size: 0x18)
    float CamOffset_Yaw;                                                              // 0x0438 (size: 0x4)
    float CamOffset_Pitch;                                                            // 0x043C (size: 0x4)
    float VODelayLocal;                                                               // 0x0440 (size: 0x4)
    bool PlayingVO;                                                                   // 0x0444 (size: 0x1)
    bool OverrideDesControl;                                                          // 0x0445 (size: 0x1)
    FS1_BalloonistStruct NewVar_0;                                                    // 0x0448 (size: 0x58)
    bool CanLoadLevel;                                                                // 0x04A0 (size: 0x1)
    bool IsHomeworld;                                                                 // 0x04A1 (size: 0x1)
    int32 Sequence;                                                                   // 0x04A4 (size: 0x4)
    bool TalismanMinimapActivate;                                                     // 0x04A8 (size: 0x1)
    bool SkipCheck;                                                                   // 0x04A9 (size: 0x1)
    bool GameState_CutsceneReady;                                                     // 0x04AA (size: 0x1)
    bool QueueReady;                                                                  // 0x04AB (size: 0x1)
    class AActor* TempCamRef;                                                         // 0x04B0 (size: 0x8)
    class AActor* TempReqRef;                                                         // 0x04B8 (size: 0x8)
    class AActor* TempNPCRef;                                                         // 0x04C0 (size: 0x8)
    bool GameState_Paused;                                                            // 0x04C8 (size: 0x1)
    bool DoNotQueue;                                                                  // 0x04C9 (size: 0x1)
    float CamFadeInTime_Local;                                                        // 0x04CC (size: 0x4)
    float FadeDuration;                                                               // 0x04D0 (size: 0x4)
    float HoldDuration;                                                               // 0x04D4 (size: 0x4)
    float FadeTemp;                                                                   // 0x04D8 (size: 0x4)

    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void Is IGC Currently Active(bool& IsActive);
    void TalismanCheck();
    void LipsyncDelayFunction(FLipsyncDelayFunctionDelegate Delegate);
    void TestForValidLevelDestination(const FS1_BalloonistStruct& S1_BalloonistStruct, bool& IsValid);
    void IGC VO Playback();
    void Get Current Dialogue Refs(FDataTableRowHandle Handle);
    void Dialogue Complete();
    void Dialogue Play();
    void IGC Shutdown();
    void IGC Dialogue Start();
    void IGC Init(class AActor* IGCStartActor, class AActor* CamActor, class AActor* NPC);
    void UserConstructionScript();
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void NextLine();
    void All Dialogue Played();
    void VO Watcher(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void SetTriggerState(bool Disabled);
    void HudDialogOptionSelected(int32 selectedIndex);
    void HUD Dialogue Value Startup();
    void HUD Dialogue Value Shutdown();
    void VO_PlayWithDelay();
    void CutsceneModeControl(bool Active);
    void NPCDialogueControl(bool Start);
    void StartSkipTimer();
    void GameStateChange(EFalconGameState PrevState, EFalconGameState NextState);
    void IGC_QueueFire();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void FadeOutControl(float Duration, float Hold, bool Skipped);
    void ExecuteUbergraph_Spyro_IGC_Base(int32 EntryPoint);
}; // Size: 0x4DC

#endif
