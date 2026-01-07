#ifndef UE4SS_SDK_IGC_Selector_HPP
#define UE4SS_SDK_IGC_Selector_HPP

class AIGC_Selector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Icon1;                                                // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Icon2;                                                // 0x0328 (size: 0x8)
    class USplineComponent* name spline;                                              // 0x0330 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x0338 (size: 0x8)
    class USceneComponent* R_Reward;                                                  // 0x0340 (size: 0x8)
    class USceneComponent* L_Reward;                                                  // 0x0348 (size: 0x8)
    class UCameraComponent* Camera2;                                                  // 0x0350 (size: 0x8)
    class UTextRenderComponent* Prompt;                                               // 0x0358 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0360 (size: 0x8)
    class UArrowComponent* FairySpawn;                                                // 0x0368 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0370 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0378 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0388 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0390 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0398 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x03A0 (size: 0x8)
    float CamLerpTimeline_NewTrack_0_0C243E4C49E10CB66831BB8832F2E8E0;                // 0x03A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CamLerpTimeline__Direction_0C243E4C49E10CB66831BB8832F2E8E0; // 0x03AC (size: 0x1)
    class UTimelineComponent* CamLerpTimeline;                                        // 0x03B0 (size: 0x8)
    float RewardCamTransition_Transition_8F22C5C44CEE07B97CCB359BCFBF1F60;            // 0x03B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RewardCamTransition__Direction_8F22C5C44CEE07B97CCB359BCFBF1F60; // 0x03BC (size: 0x1)
    class UTimelineComponent* RewardCamTransition;                                    // 0x03C0 (size: 0x8)
    float Timeline_0_Rotation_25AE20164480AFBDB65AD4B56DD979D8;                       // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_25AE20164480AFBDB65AD4B56DD979D8; // 0x03CC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03D0 (size: 0x8)
    class AActor* NPC;                                                                // 0x03D8 (size: 0x8)
    int32 IGC_Index;                                                                  // 0x03E0 (size: 0x4)
    TArray<class AActor*> IGC_List;                                                   // 0x03E8 (size: 0x10)
    class AActor* IGC_Current;                                                        // 0x03F8 (size: 0x8)
    class ULevelSequencePlayer* LevelSequencePlayback;                                // 0x0400 (size: 0x8)
    FPhasmidSoftReference FairyCheckpoint;                                            // 0x0408 (size: 0x28)
    float DeltaSeconds;                                                               // 0x0430 (size: 0x4)
    bool ShouldRotate;                                                                // 0x0434 (size: 0x1)
    FText LocalText;                                                                  // 0x0438 (size: 0x18)
    FText ReplaceText;                                                                // 0x0450 (size: 0x18)
    bool NeedsPrompt;                                                                 // 0x0468 (size: 0x1)
    bool PromptVisible;                                                               // 0x0469 (size: 0x1)
    bool PlayerInVolume;                                                              // 0x046A (size: 0x1)
    class AActor* SimpleCamRef;                                                       // 0x0470 (size: 0x8)
    class AActor* LootActor;                                                          // 0x0478 (size: 0x8)
    int32 IGCIndexOnSucceed;                                                          // 0x0480 (size: 0x4)
    int32 IGCIndexOnFail;                                                             // 0x0484 (size: 0x4)
    FPhasmidObjectSaveDataList saveData;                                              // 0x0488 (size: 0x10)
    class ASaveFairy_C* SaveFairy;                                                    // 0x0498 (size: 0x8)
    bool Disabled;                                                                    // 0x04A0 (size: 0x1)
    int32 SaveIndex;                                                                  // 0x04A4 (size: 0x4)
    FPhasmidObjectSaveDataList LocalSaveData;                                         // 0x04A8 (size: 0x10)
    bool ResetNPCPosition;                                                            // 0x04B8 (size: 0x1)
    FTransform NPCPosition;                                                           // 0x04C0 (size: 0x30)
    bool Activated;                                                                   // 0x04F0 (size: 0x1)
    bool IsWalking;                                                                   // 0x04F1 (size: 0x1)
    class AIGC_SimpleCamera_C* LocalCamActor;                                         // 0x04F8 (size: 0x8)
    bool AlertFromExternalSource;                                                     // 0x0500 (size: 0x1)
    int32 IGCIndex_Last;                                                              // 0x0504 (size: 0x4)
    FRotator FaceNPC_Start;                                                           // 0x0508 (size: 0xC)
    FRotator FaceNPC_End;                                                             // 0x0514 (size: 0xC)
    bool FirstEnter;                                                                  // 0x0520 (size: 0x1)
    FRotator RewardCamRot_Start;                                                      // 0x0524 (size: 0xC)
    FRotator RewardCamRot_End;                                                        // 0x0530 (size: 0xC)
    FVector RewardCamLoc_Start;                                                       // 0x053C (size: 0xC)
    FVector RewardCamLoc_End;                                                         // 0x0548 (size: 0xC)
    FVector RewardPosition;                                                           // 0x0554 (size: 0xC)
    float DelayLocal;                                                                 // 0x0560 (size: 0x4)
    class AActor* CheckpointActor;                                                    // 0x0568 (size: 0x8)
    bool PromptInit;                                                                  // 0x0570 (size: 0x1)
    float NPCPrompt_ZVal;                                                             // 0x0574 (size: 0x4)
    FTransform CamActor_Start;                                                        // 0x0580 (size: 0x30)
    FTransform CamActor_End;                                                          // 0x05B0 (size: 0x30)
    FTransform CamPos_Start;                                                          // 0x05E0 (size: 0x30)
    FTransform CamPos_End;                                                            // 0x0610 (size: 0x30)
    bool CamLerpDone;                                                                 // 0x0640 (size: 0x1)
    FGameplayTagContainer TagsPreventingStart;                                        // 0x0648 (size: 0x20)
    bool RewardOrbIconFirst;                                                          // 0x0668 (size: 0x1)
    TArray<class AActor*> RewardIconActors;                                           // 0x0670 (size: 0x10)
    bool DisableSparxControl;                                                         // 0x0680 (size: 0x1)
    FString RewardString;                                                             // 0x0688 (size: 0x10)
    FString PromptString;                                                             // 0x0698 (size: 0x10)
    bool CameraMoving;                                                                // 0x06A8 (size: 0x1)
    bool DisableOrbRewardIcon;                                                        // 0x06A9 (size: 0x1)
    bool CameraPlaced;                                                                // 0x06AA (size: 0x1)
    class UUI_CinematicTestFrame_C* UI_SafeZone;                                      // 0x06B0 (size: 0x8)
    class USkeletalMeshComponent* SpyroMesh;                                          // 0x06B8 (size: 0x8)
    TArray<class ABP_S2_Orb_Rewarded_C*> OrbsToActivate;                              // 0x06C0 (size: 0x10)
    FVector PlayerPosCurrent;                                                         // 0x06D0 (size: 0xC)
    FVector PlayerPosDest;                                                            // 0x06DC (size: 0xC)
    bool FadeupActive;                                                                // 0x06E8 (size: 0x1)
    bool UpdatePromptPos;                                                             // 0x06E9 (size: 0x1)
    FGameplayTagContainer EmptyTags;                                                  // 0x06F0 (size: 0x20)
    FGameplayTagContainer DamageTags;                                                 // 0x0710 (size: 0x20)
    bool DontPlaySpyroTurn;                                                           // 0x0730 (size: 0x1)
    bool OtherIGCActive;                                                              // 0x0731 (size: 0x1)
    TArray<class AActor*> IGCActivators;                                              // 0x0738 (size: 0x10)
    class AActor* CurrentActivator;                                                   // 0x0748 (size: 0x8)
    class ASpyro_IGC_Base_C* CurrentIGC;                                              // 0x0750 (size: 0x8)
    int32 TempIGCIndex;                                                               // 0x0758 (size: 0x4)
    class AActor* TempIGCActor;                                                       // 0x0760 (size: 0x8)
    TArray<class AActor*> IGCQueue;                                                   // 0x0768 (size: 0x10)
    bool LevelLoadInitiated;                                                          // 0x0778 (size: 0x1)
    bool CutsceneActive;                                                              // 0x0779 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void GetNPCValues(FText& NPCName);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void IsSpyroIGCBaseActive(class UObject* Object, bool& Value);
    void AttemptStartIGC(class UObject* self2, class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void Cancel Player Damage Abilities();
    void Disable Pause Menu();
    void RewardIconSetup();
    void PlayerTagCheck(bool& HasBadTags);
    bool SelectorCheckPlayerDead();
    void CheckpointSave();
    void GetSaveParams(class UPhasmidObjectSaveComponent* self2, FPhasmidSaveParam& Output);
    void Save Game Update Values(int32 SaveIndex);
    void DebugCamSetup();
    void MissionAlertHandler(class AActor* Actor, int32 IGC_Index);
    void CommunicateState();
    void AssignCurrentIGC(class AActor*& ReturnActor);
    void MissionEndHandler(bool Success);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void RewardCamTransition__FinishedFunc();
    void RewardCamTransition__UpdateFunc();
    void CamLerpTimeline__FinishedFunc();
    void CamLerpTimeline__UpdateFunc();
    void OnNotifyEnd_3FAB19E7467457D5E443109E117A8C83(FName NotifyName);
    void OnNotifyBegin_3FAB19E7467457D5E443109E117A8C83(FName NotifyName);
    void OnInterrupted_3FAB19E7467457D5E443109E117A8C83(FName NotifyName);
    void OnBlendOut_3FAB19E7467457D5E443109E117A8C83(FName NotifyName);
    void OnCompleted_3FAB19E7467457D5E443109E117A8C83(FName NotifyName);
    void InpActEvt_FreeLook_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_RightThumbstickButton_K2Node_InputActionEvent_0(FKey Key);
    void PromptControl(bool On);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
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
    void MissionAlert(class AActor* Actor, int32 Value);
    void MovePlayerToCenter(int32 Index);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_38_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void PlayImmediately_Fadeout();
    void ResetTrigger();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void SetTriggerState(bool Disabled);
    void InitializePrompt();
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void Start Via Immediate();
    void Print Local Save Data Values();
    void PlaceLocalCamera();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void RewardCamera(bool Start, class AActor* CamActorRef);
    void PlayerReady();
    void Hide HUD();
    void PromptSetup(bool Hide);
    void CalculateRewardPoa();
    void CameraLerp();
    void CheckForTags();
    void SparxControl(bool On);
    void TurnPrompt();
    void OrbChallengeCheck();
    void UpdatePromptPosition();
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void AlertActivators(bool Start);
    void ShutdownPrompt();
    void GameStateChange(EFalconGameState PrevState, EFalconGameState NextState);
    void ExecuteUbergraph_IGC_Selector(int32 EntryPoint);
}; // Size: 0x77A

#endif
