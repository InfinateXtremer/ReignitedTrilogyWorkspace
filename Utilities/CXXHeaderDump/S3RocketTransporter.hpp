#ifndef UE4SS_SDK_S3RocketTransporter_HPP
#define UE4SS_SDK_S3RocketTransporter_HPP

class AS3RocketTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UStaticMeshComponent* Collision;                                            // 0x0EC8 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0ED0 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_PlatformBooster;             // 0x0ED8 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_BlastOff;                    // 0x0EE0 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_MainThruster;                // 0x0EE8 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_Ground;                      // 0x0EF0 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_SteamAmbient;                // 0x0EF8 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_BoosterR;                    // 0x0F00 (size: 0x8)
    class UParticleSystemComponent* PS_RocketTransporter_BoosterL;                    // 0x0F08 (size: 0x8)
    class USceneComponent* BoosterR;                                                  // 0x0F10 (size: 0x8)
    class USceneComponent* BoosterL;                                                  // 0x0F18 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0F20 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0F28 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0F30 (size: 0x8)
    class USplineComponent* SplineBoard;                                              // 0x0F38 (size: 0x8)
    class USkeletalMeshComponent* Platform;                                           // 0x0F40 (size: 0x8)
    class UStaticMeshComponent* SM_LS300_TransporterRocket;                           // 0x0F48 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent1;                     // 0x0F50 (size: 0x8)
    class UAkComponent* AkAudio_0;                                                    // 0x0F58 (size: 0x8)
    class UStaticMeshComponent* Cube_0;                                               // 0x0F60 (size: 0x8)
    class USceneComponent* Scene_0;                                                   // 0x0F68 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh_0;                                     // 0x0F70 (size: 0x8)
    class USpringArmComponent* SpringArm_0;                                           // 0x0F78 (size: 0x8)
    class USplineComponent* Spline_Exit_0;                                            // 0x0F80 (size: 0x8)
    class UStaticMeshComponent* Platform_0;                                           // 0x0F88 (size: 0x8)
    class USplineComponent* Spline_Board_0;                                           // 0x0F90 (size: 0x8)
    class UStaticMeshComponent* PlacementLoc_0;                                       // 0x0F98 (size: 0x8)
    class UCameraComponent* Camera_0;                                                 // 0x0FA0 (size: 0x8)
    class UStaticMeshComponent* BalloonMesh_0;                                        // 0x0FA8 (size: 0x8)
    float BringDownBoss_Time_5501B0CB407B145512922AAF012D46FF;                        // 0x0FB0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BringDownBoss__Direction_5501B0CB407B145512922AAF012D46FF; // 0x0FB4 (size: 0x1)
    class UTimelineComponent* BringDownBoss;                                          // 0x0FB8 (size: 0x8)
    float BringDown_Time_CE2BC14B4D9FCDDCCEEE358E7BCC281D;                            // 0x0FC0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BringDown__Direction_CE2BC14B4D9FCDDCCEEE358E7BCC281D; // 0x0FC4 (size: 0x1)
    class UTimelineComponent* BringDown;                                              // 0x0FC8 (size: 0x8)
    float RiseUp_Time_EC14D4AE46982F09A040578C777BC133;                               // 0x0FD0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RiseUp__Direction_EC14D4AE46982F09A040578C777BC133; // 0x0FD4 (size: 0x1)
    class UTimelineComponent* RiseUp;                                                 // 0x0FD8 (size: 0x8)
    FVector Timeline_0_0_Vector_3D2E0F6F4F41D0A7F102B49526EB8CC7;                     // 0x0FE0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_3D2E0F6F4F41D0A7F102B49526EB8CC7; // 0x0FEC (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0FF0 (size: 0x8)
    FVector CameraRotations_Descent_0_NewTrack_5_2AD0A937410EE841B0A941BE0B1D0949;    // 0x0FF8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CameraRotations_Descent_0__Direction_2AD0A937410EE841B0A941BE0B1D0949; // 0x1004 (size: 0x1)
    class UTimelineComponent* CameraRotations_Descent_0;                              // 0x1008 (size: 0x8)
    float SplineTimeline_Enter_0_Alpha_C52CAFF44FAF0AF5B15E5EA79E02FC69;              // 0x1010 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline_Enter_0__Direction_C52CAFF44FAF0AF5B15E5EA79E02FC69; // 0x1014 (size: 0x1)
    class UTimelineComponent* SplineTimeline_Enter_0;                                 // 0x1018 (size: 0x8)
    float ObjectPosition_Ascent_0_NewTrack_2_A0EECC9F44821D45994D8CA03B307FC6;        // 0x1020 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjectPosition_Ascent_0__Direction_A0EECC9F44821D45994D8CA03B307FC6; // 0x1024 (size: 0x1)
    class UTimelineComponent* ObjectPosition_Ascent_0;                                // 0x1028 (size: 0x8)
    float ObjectPosition_Descent_0_NewTrack_6_E3036BCF4CA9361947B546A185048AAA;       // 0x1030 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjectPosition_Descent_0__Direction_E3036BCF4CA9361947B546A185048AAA; // 0x1034 (size: 0x1)
    class UTimelineComponent* ObjectPosition_Descent_0;                               // 0x1038 (size: 0x8)
    float LerpToTarget_0_NewTrack_4_DADCA4974B315AB88914E780C272AFD1;                 // 0x1040 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LerpToTarget_0__Direction_DADCA4974B315AB88914E780C272AFD1; // 0x1044 (size: 0x1)
    class UTimelineComponent* LerpToTarget_0;                                         // 0x1048 (size: 0x8)
    FVector CameraRotations_Ascent_0_Vector_C3D4F2334D550257B826F686FE92F1DC;         // 0x1050 (size: 0xC)
    float CameraRotations_Ascent_0_ArmLength_C3D4F2334D550257B826F686FE92F1DC;        // 0x105C (size: 0x4)
    float CameraRotations_Ascent_0_NewTrack_0_C3D4F2334D550257B826F686FE92F1DC;       // 0x1060 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraRotations_Ascent_0__Direction_C3D4F2334D550257B826F686FE92F1DC; // 0x1064 (size: 0x1)
    class UTimelineComponent* CameraRotations_Ascent_0;                               // 0x1068 (size: 0x8)
    FRotator PlayerRot_0;                                                             // 0x1070 (size: 0xC)
    FVector LocationStart_0;                                                          // 0x107C (size: 0xC)
    FRotator SpringArmRot_0;                                                          // 0x1088 (size: 0xC)
    FVector Location_Current_0;                                                       // 0x1094 (size: 0xC)
    class AActor* TargetActor_0;                                                      // 0x10A0 (size: 0x8)
    bool HoldPlayerInBalloon_0;                                                       // 0x10A8 (size: 0x1)
    FVector SpringArmLocationStart_0;                                                 // 0x10AC (size: 0xC)
    FVector SpringArmLocationHold_0;                                                  // 0x10B8 (size: 0xC)
    class AActor* MissionActor_0;                                                     // 0x10C8 (size: 0x8)
    class AActor* DebugTargetActor_0;                                                 // 0x10D0 (size: 0x8)
    TArray<FString> PartnerPortalList_0;                                              // 0x10D8 (size: 0x10)
    TArray<FDataTableRowHandle> LevelStreamTableRow_List_0;                           // 0x10E8 (size: 0x10)
    int32 DestinationIndex_0;                                                         // 0x10F8 (size: 0x4)
    FRotator BalloonRot_0;                                                            // 0x10FC (size: 0xC)
    TArray<FText> DestinationList_0;                                                  // 0x1108 (size: 0x10)
    FText DestinationQ_0;                                                             // 0x1118 (size: 0x18)
    FDataTableRowHandle LevelStreamTableUnload_0;                                     // 0x1130 (size: 0x10)
    bool IsAscending_0;                                                               // 0x1140 (size: 0x1)
    bool LoadComplere_0;                                                              // 0x1141 (size: 0x1)
    FS1_BalloonistStruct ReceivedStructure_0;                                         // 0x1148 (size: 0x58)
    FVector SkySphereScale_0;                                                         // 0x11A0 (size: 0xC)
    class UCameraComponent* BalloonCam_0;                                             // 0x11B0 (size: 0x8)
    float origFOV_0;                                                                  // 0x11B8 (size: 0x4)
    FName CurrentLevelName_0;                                                         // 0x11C0 (size: 0x8)
    FVector Player_Rise;                                                              // 0x11C8 (size: 0xC)
    FVector Spring_Rise;                                                              // 0x11D4 (size: 0xC)
    FRotator Spring_rot;                                                              // 0x11E0 (size: 0xC)
    float Spring_len;                                                                 // 0x11EC (size: 0x4)
    bool StayHere;                                                                    // 0x11F0 (size: 0x1)
    class UStaticMeshComponent* RocketMesh;                                           // 0x11F8 (size: 0x8)
    class UFileMediaSource* FMV Source;                                               // 0x1200 (size: 0x8)
    class UUserWidget* UI Ref;                                                        // 0x1208 (size: 0x8)

    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetNPCValues(FText& NPCName);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void CreateMovieElement(class UFileMediaSource* NewParam);
    void MainThrusterOffVFX();
    void LandingVFX();
    void DeactivatePlatformThrusterVFX();
    void ActivatePlatformThrusterVFX();
    void BlastoffVFX();
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void SplineTimeline_Enter_0__FinishedFunc();
    void SplineTimeline_Enter_0__UpdateFunc();
    void ObjectPosition_Ascent_0__FinishedFunc();
    void ObjectPosition_Ascent_0__UpdateFunc();
    void LerpToTarget_0__FinishedFunc();
    void LerpToTarget_0__UpdateFunc();
    void CameraRotations_Ascent_0__FinishedFunc();
    void CameraRotations_Ascent_0__UpdateFunc();
    void CameraRotations_Descent_0__FinishedFunc();
    void CameraRotations_Descent_0__UpdateFunc();
    void ObjectPosition_Descent_0__FinishedFunc();
    void ObjectPosition_Descent_0__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void RiseUp__FinishedFunc();
    void RiseUp__UpdateFunc();
    void BringDown__FinishedFunc();
    void BringDown__UpdateFunc();
    void BringDownBoss__FinishedFunc();
    void BringDownBoss__UpdateFunc();
    void InpActEvt_SkipCutscene_K2Node_InputActionEvent_0(FKey Key);
    void StartAscent();
    void SpyroBoards();
    void CheckForLevelLoadComplete();
    void StartDescent();
    void ReleasePlayer(bool StayHere);
    void Reset();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ChooseDestination();
    void InitializeChoices();
    void SetMediaSource(class UFileMediaSource* MediaSource);
    void LevelLoadCompleted();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void SpyroMinigameControl(bool Enable);
    void MissionAlert(class AActor* Actor, int32 Value);
    void setPortalEnabled(bool Enabled);
    void setPortalVisible(bool visible);
    void Off(bool StayHere);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ITransitionCompleteSource();
    void ITransitionTriggerDetectedTarget();
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void SetTriggerState(bool Disabled);
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void PromptControl(bool On);
    void HudDialogOptionSelected(int32 selectedIndex);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void LowerPlatformBoss();
    void Boss Movie Event(class UFileMediaSource* FMV Source);
    void Trigger Next Phase();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_S3RocketTransporter(int32 EntryPoint);
}; // Size: 0x1210

#endif
