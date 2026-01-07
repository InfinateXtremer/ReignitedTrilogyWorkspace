#ifndef UE4SS_SDK_S3WhirligigTransporter_HPP
#define UE4SS_SDK_S3WhirligigTransporter_HPP

class AS3WhirligigTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0EC8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0ED0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0ED8 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0EE0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0EE8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0EF0 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0EF8 (size: 0x8)
    class USplineComponent* Spline_Exit;                                              // 0x0F00 (size: 0x8)
    class UStaticMeshComponent* Platform;                                             // 0x0F08 (size: 0x8)
    class USplineComponent* Spline_Board;                                             // 0x0F10 (size: 0x8)
    class UStaticMeshComponent* PlacementLoc;                                         // 0x0F18 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0F20 (size: 0x8)
    class UStaticMeshComponent* BalloonMesh;                                          // 0x0F28 (size: 0x8)
    FVector Timeline_0_Vector_E307E446467452E49A835A9159ABB811;                       // 0x0F30 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E307E446467452E49A835A9159ABB811; // 0x0F3C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0F40 (size: 0x8)
    float SplineTimeline_Exit_NewTrack_7_72C6C98047D8DFFCD8805BB13EBC0A31;            // 0x0F48 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline_Exit__Direction_72C6C98047D8DFFCD8805BB13EBC0A31; // 0x0F4C (size: 0x1)
    class UTimelineComponent* SplineTimeline_Exit;                                    // 0x0F50 (size: 0x8)
    float SplineTimeline_Enter_NewTrack_0_426143754EDF8E78416F6CBC42ED9CE7;           // 0x0F58 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline_Enter__Direction_426143754EDF8E78416F6CBC42ED9CE7; // 0x0F5C (size: 0x1)
    class UTimelineComponent* SplineTimeline_Enter;                                   // 0x0F60 (size: 0x8)
    float ObjectPosition_Descent_NewTrack_6_FE58EA1542B8C1A9F3F92E957FBE79EF;         // 0x0F68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjectPosition_Descent__Direction_FE58EA1542B8C1A9F3F92E957FBE79EF; // 0x0F6C (size: 0x1)
    class UTimelineComponent* ObjectPosition_Descent;                                 // 0x0F70 (size: 0x8)
    FVector CameraRotations_Descent_NewTrack_5_E190DF24442BDD196030F7AFF78A34D8;      // 0x0F78 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> CameraRotations_Descent__Direction_E190DF24442BDD196030F7AFF78A34D8; // 0x0F84 (size: 0x1)
    class UTimelineComponent* CameraRotations_Descent;                                // 0x0F88 (size: 0x8)
    float LerpToTarget_NewTrack_4_EFF3E09448849D966198019D38E9D72B;                   // 0x0F90 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LerpToTarget__Direction_EFF3E09448849D966198019D38E9D72B; // 0x0F94 (size: 0x1)
    class UTimelineComponent* LerpToTarget;                                           // 0x0F98 (size: 0x8)
    float ObjectPosition_Ascent_NewTrack_2_F0DFB7AB4372A8728A5714BECD88638A;          // 0x0FA0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ObjectPosition_Ascent__Direction_F0DFB7AB4372A8728A5714BECD88638A; // 0x0FA4 (size: 0x1)
    class UTimelineComponent* ObjectPosition_Ascent;                                  // 0x0FA8 (size: 0x8)
    FVector CameraRotations_Ascent_Vector_6E6348844F5C66EF284A0199D1AA1D6B;           // 0x0FB0 (size: 0xC)
    float CameraRotations_Ascent_NewTrack_0_6E6348844F5C66EF284A0199D1AA1D6B;         // 0x0FBC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraRotations_Ascent__Direction_6E6348844F5C66EF284A0199D1AA1D6B; // 0x0FC0 (size: 0x1)
    class UTimelineComponent* CameraRotations_Ascent;                                 // 0x0FC8 (size: 0x8)
    FRotator PlayerRot;                                                               // 0x0FD0 (size: 0xC)
    FVector LocationStart;                                                            // 0x0FDC (size: 0xC)
    FRotator SpringArmRot;                                                            // 0x0FE8 (size: 0xC)
    FVector Location_Current;                                                         // 0x0FF4 (size: 0xC)
    class AActor* TargetActor;                                                        // 0x1000 (size: 0x8)
    bool HoldPlayerInBalloon;                                                         // 0x1008 (size: 0x1)
    FVector SpringArmLocationStart;                                                   // 0x100C (size: 0xC)
    FVector SpringArmLocationHold;                                                    // 0x1018 (size: 0xC)
    class AActor* MissionActor;                                                       // 0x1028 (size: 0x8)
    class AActor* DebugTargetActor;                                                   // 0x1030 (size: 0x8)
    TArray<FString> PartnerPortalList;                                                // 0x1038 (size: 0x10)
    TArray<FDataTableRowHandle> LevelStreamTableRow_List;                             // 0x1048 (size: 0x10)
    int32 DestinationIndex;                                                           // 0x1058 (size: 0x4)
    FRotator BalloonRot;                                                              // 0x105C (size: 0xC)
    TArray<FText> DestinationList;                                                    // 0x1068 (size: 0x10)
    FText DestinationQ;                                                               // 0x1078 (size: 0x18)
    FDataTableRowHandle LevelStreamTableUnload;                                       // 0x1090 (size: 0x10)
    bool IsAscending;                                                                 // 0x10A0 (size: 0x1)
    bool LoadComplere;                                                                // 0x10A1 (size: 0x1)
    FS1_BalloonistStruct ReceivedStructure;                                           // 0x10A8 (size: 0x58)
    FVector SkySphereScale;                                                           // 0x1100 (size: 0xC)
    class UCameraComponent* BalloonCam;                                               // 0x1110 (size: 0x8)
    float origFOV;                                                                    // 0x1118 (size: 0x4)
    FName CurrentLevelName;                                                           // 0x1120 (size: 0x8)
    bool StayHere;                                                                    // 0x1128 (size: 0x1)
    class UUserWidget* UI Ref;                                                        // 0x1130 (size: 0x8)
    class UFileMediaSource* FMV Source;                                               // 0x1138 (size: 0x8)
    float DeltaSecs;                                                                  // 0x1140 (size: 0x4)

    void GetRewardType(EInventoryType& Type, class ABP_Loot_BASE_C*& LootBaseActor);
    void GetSelectorValues(bool& IsSelector, int32& CurrentIndex, class AActor*& NPC, class AActor*& LocalCamActor, class AIGC_Selector_C*& SelectorRef);
    void GetNPCValues(FText& NPCName);
    void GetIGCValues(bool& UsePrompt, bool& PlayImmediately, bool& UsesIGCBase);
    void CreateMovieElement(class UFileMediaSource* Media FIle);
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
    void OnNotifyEnd_38A63568458F8F0DC79E4E92228D84B0(FName NotifyName);
    void OnNotifyBegin_38A63568458F8F0DC79E4E92228D84B0(FName NotifyName);
    void OnInterrupted_38A63568458F8F0DC79E4E92228D84B0(FName NotifyName);
    void OnBlendOut_38A63568458F8F0DC79E4E92228D84B0(FName NotifyName);
    void OnCompleted_38A63568458F8F0DC79E4E92228D84B0(FName NotifyName);
    void InpActEvt_SkipCutscene_K2Node_InputActionEvent_0(FKey Key);
    void SetMediaSource(class UFileMediaSource* MediaSource);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void IGCNotification(class AActor* Activator, class ASpyro_IGC_Base_C* IGC, bool Start);
    void SetTriggerState(bool Disabled);
    void StartAscent();
    void SpyroBoards();
    void IGCSave(int32 SaveIndex, bool UseFairy);
    void EndIGC(class AActor* IGC_Actor, int32 IGC_Index);
    void StartIGC(class AActor* Camera, class AActor* RequestingActor, class AActor* SpeakingNPC, float Delay);
    void CheckForLevelLoadComplete();
    void StartDescent();
    void ReleasePlayer(bool StayHere);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void Reset();
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void PromptControl(bool On);
    void ChooseDestination();
    void InitializeChoices();
    void HudDialogOptionSelected(int32 selectedIndex);
    void LevelLoadCompleted();
    void SpyroMinigameControl(bool Enable);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void setPortalEnabled(bool Enabled);
    void setPortalVisible(bool visible);
    void ITransitionCompleteSource();
    void ITransitionTriggerDetectedTarget();
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TakeOff();
    void Off(bool StayHere);
    void BalloonistRow(FS1_BalloonistStruct Destination, class AActor* SourceActor);
    void Boss Movie Event(class UFileMediaSource* FMV Source);
    void Trigger Next Phase();
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_S3WhirligigTransporter(int32 EntryPoint);
}; // Size: 0x1144

#endif
