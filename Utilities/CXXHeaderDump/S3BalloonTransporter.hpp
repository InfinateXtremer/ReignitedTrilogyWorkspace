#ifndef UE4SS_SDK_S3BalloonTransporter_HPP
#define UE4SS_SDK_S3BalloonTransporter_HPP

class AS3BalloonTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0EC8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0ED0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0ED8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0EE0 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0EE8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0EF0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0EF8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0F00 (size: 0x8)
    class USplineComponent* Spline_Exit;                                              // 0x0F08 (size: 0x8)
    class UStaticMeshComponent* Platform;                                             // 0x0F10 (size: 0x8)
    class USplineComponent* Spline_Board;                                             // 0x0F18 (size: 0x8)
    class UStaticMeshComponent* PlacementLoc;                                         // 0x0F20 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0F28 (size: 0x8)
    class UStaticMeshComponent* BalloonMesh;                                          // 0x0F30 (size: 0x8)
    FVector Timeline_0_Vector_B00FF8C74623810A4FB6B2BB42A543DD;                       // 0x0F38 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B00FF8C74623810A4FB6B2BB42A543DD; // 0x0F44 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0F48 (size: 0x8)
    float SplineTimeline_Exit_NewTrack_7_318E73B94C8406E42D9F9999B50D2D84;            // 0x0F50 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline_Exit__Direction_318E73B94C8406E42D9F9999B50D2D84; // 0x0F54 (size: 0x1)
    class UTimelineComponent* SplineTimeline_Exit;                                    // 0x0F58 (size: 0x8)
    float SplineTimeline_Enter_NewTrack_0_4540380F4F24B6FF28DE27A1374C0C27;           // 0x0F60 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline_Enter__Direction_4540380F4F24B6FF28DE27A1374C0C27; // 0x0F64 (size: 0x1)
    class UTimelineComponent* SplineTimeline_Enter;                                   // 0x0F68 (size: 0x8)
    float ObjectPosition_Descent_NewTrack_6_12D3E334410C836A93D428A638B9D172;         // 0x0F70 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjectPosition_Descent__Direction_12D3E334410C836A93D428A638B9D172; // 0x0F74 (size: 0x1)
    class UTimelineComponent* ObjectPosition_Descent;                                 // 0x0F78 (size: 0x8)
    FVector CameraRotations_Descent_NewTrack_5_816E9BC143A1975B5FB24DBD3DBEFB8C;      // 0x0F80 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CameraRotations_Descent__Direction_816E9BC143A1975B5FB24DBD3DBEFB8C; // 0x0F8C (size: 0x1)
    class UTimelineComponent* CameraRotations_Descent;                                // 0x0F90 (size: 0x8)
    float LerpToTarget_NewTrack_4_8D9C89D040FA96683865BD9B276F4D6E;                   // 0x0F98 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LerpToTarget__Direction_8D9C89D040FA96683865BD9B276F4D6E; // 0x0F9C (size: 0x1)
    class UTimelineComponent* LerpToTarget;                                           // 0x0FA0 (size: 0x8)
    float ObjectPosition_Ascent_NewTrack_2_DF4AB62840AAB20808A3B5B2FE40EEE7;          // 0x0FA8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjectPosition_Ascent__Direction_DF4AB62840AAB20808A3B5B2FE40EEE7; // 0x0FAC (size: 0x1)
    class UTimelineComponent* ObjectPosition_Ascent;                                  // 0x0FB0 (size: 0x8)
    FVector CameraRotations_Ascent_Vector_E54C685F4901EECD6B1DB5B519A79D51;           // 0x0FB8 (size: 0xC)
    float CameraRotations_Ascent_NewTrack_0_E54C685F4901EECD6B1DB5B519A79D51;         // 0x0FC4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraRotations_Ascent__Direction_E54C685F4901EECD6B1DB5B519A79D51; // 0x0FC8 (size: 0x1)
    class UTimelineComponent* CameraRotations_Ascent;                                 // 0x0FD0 (size: 0x8)
    FRotator PlayerRot;                                                               // 0x0FD8 (size: 0xC)
    FVector LocationStart;                                                            // 0x0FE4 (size: 0xC)
    FRotator SpringArmRot;                                                            // 0x0FF0 (size: 0xC)
    FVector Location_Current;                                                         // 0x0FFC (size: 0xC)
    class AActor* TargetActor;                                                        // 0x1008 (size: 0x8)
    bool HoldPlayerInBalloon;                                                         // 0x1010 (size: 0x1)
    FVector SpringArmLocationStart;                                                   // 0x1014 (size: 0xC)
    FVector SpringArmLocationHold;                                                    // 0x1020 (size: 0xC)
    class AActor* MissionActor;                                                       // 0x1030 (size: 0x8)
    class AActor* DebugTargetActor;                                                   // 0x1038 (size: 0x8)
    TArray<FString> PartnerPortalList;                                                // 0x1040 (size: 0x10)
    TArray<FDataTableRowHandle> LevelStreamTableRow_List;                             // 0x1050 (size: 0x10)
    int32 DestinationIndex;                                                           // 0x1060 (size: 0x4)
    FRotator BalloonRot;                                                              // 0x1064 (size: 0xC)
    TArray<FText> DestinationList;                                                    // 0x1070 (size: 0x10)
    FText DestinationQ;                                                               // 0x1080 (size: 0x18)
    FDataTableRowHandle LevelStreamTableUnload;                                       // 0x1098 (size: 0x10)
    bool IsAscending;                                                                 // 0x10A8 (size: 0x1)
    bool LoadComplere;                                                                // 0x10A9 (size: 0x1)
    FS1_BalloonistStruct ReceivedStructure;                                           // 0x10B0 (size: 0x58)
    FVector SkySphereScale;                                                           // 0x1108 (size: 0xC)
    class UCameraComponent* BalloonCam;                                               // 0x1118 (size: 0x8)
    float origFOV;                                                                    // 0x1120 (size: 0x4)
    FName CurrentLevelName;                                                           // 0x1128 (size: 0x8)
    bool StayHere;                                                                    // 0x1130 (size: 0x1)
    class UFileMediaSource* FMV Source;                                               // 0x1138 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x1140 (size: 0x8)

    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetNPCValues(FText& NPCName);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void CreateMovieElement(class UFileMediaSource* NewParam);
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void SplineTimeline_Enter__FinishedFunc();
    void SplineTimeline_Enter__UpdateFunc();
    void CameraRotations_Ascent__FinishedFunc();
    void CameraRotations_Ascent__UpdateFunc();
    void ObjectPosition_Ascent__FinishedFunc();
    void ObjectPosition_Ascent__UpdateFunc();
    void LerpToTarget__FinishedFunc();
    void LerpToTarget__UpdateFunc();
    void CameraRotations_Descent__FinishedFunc();
    void CameraRotations_Descent__UpdateFunc();
    void ObjectPosition_Descent__FinishedFunc();
    void ObjectPosition_Descent__UpdateFunc();
    void SplineTimeline_Exit__FinishedFunc();
    void SplineTimeline_Exit__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_2105EFAB477929D5E8A520BF7C797FAE(FName NotifyName);
    void OnNotifyBegin_2105EFAB477929D5E8A520BF7C797FAE(FName NotifyName);
    void OnInterrupted_2105EFAB477929D5E8A520BF7C797FAE(FName NotifyName);
    void OnBlendOut_2105EFAB477929D5E8A520BF7C797FAE(FName NotifyName);
    void OnCompleted_2105EFAB477929D5E8A520BF7C797FAE(FName NotifyName);
    void OnNotifyEnd_3A3201A04734858514A9F887704F4B11(FName NotifyName);
    void OnNotifyBegin_3A3201A04734858514A9F887704F4B11(FName NotifyName);
    void OnInterrupted_3A3201A04734858514A9F887704F4B11(FName NotifyName);
    void OnBlendOut_3A3201A04734858514A9F887704F4B11(FName NotifyName);
    void OnCompleted_3A3201A04734858514A9F887704F4B11(FName NotifyName);
    void OnNotifyEnd_ED5D3F87459C23CF199A9EA5CE0F3EC8(FName NotifyName);
    void OnNotifyBegin_ED5D3F87459C23CF199A9EA5CE0F3EC8(FName NotifyName);
    void OnInterrupted_ED5D3F87459C23CF199A9EA5CE0F3EC8(FName NotifyName);
    void OnBlendOut_ED5D3F87459C23CF199A9EA5CE0F3EC8(FName NotifyName);
    void OnCompleted_ED5D3F87459C23CF199A9EA5CE0F3EC8(FName NotifyName);
    void OnNotifyEnd_9E3F8F214F82C780F4C89F9B09652003(FName NotifyName);
    void OnNotifyBegin_9E3F8F214F82C780F4C89F9B09652003(FName NotifyName);
    void OnInterrupted_9E3F8F214F82C780F4C89F9B09652003(FName NotifyName);
    void OnBlendOut_9E3F8F214F82C780F4C89F9B09652003(FName NotifyName);
    void OnCompleted_9E3F8F214F82C780F4C89F9B09652003(FName NotifyName);
    void InpActEvt_SkipCutscene_K2Node_InputActionEvent_0(FKey Key);
    void ITransitionTriggerDetectedTarget();
    void ITransitionCompleteSource();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void SetMediaSource(class UFileMediaSource* MediaSource);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void PromptControl(bool On);
    void StartAscent();
    void SpyroBoards();
    void CheckForLevelLoadComplete();
    void StartDescent();
    void ReleasePlayer(bool StayHere);
    void Reset();
    void ChooseDestination();
    void InitializeChoices();
    void HudDialogOptionSelected(int32 selectedIndex);
    void LevelLoadCompleted();
    void SpyroMinigameControl(bool Enable);
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void SetTriggerState(bool Disabled);
    void setPortalEnabled(bool Enabled);
    void setPortalVisible(bool visible);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void TakeOff();
    void Off(bool StayHere);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void Boss Movie Event(class UFileMediaSource* FMV Source);
    void Trigger Next Phase();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_S3BalloonTransporter(int32 EntryPoint);
}; // Size: 0x1148

#endif
