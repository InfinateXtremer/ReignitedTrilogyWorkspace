#ifndef UE4SS_SDK_Collectable_Dragon_HPP
#define UE4SS_SDK_Collectable_Dragon_HPP

class ACollectable_Dragon_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USpotLightComponent* Dragon_SpotLight;                                      // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* Dragon_Statue;                                        // 0x03D8 (size: 0x8)
    class USkeletalMeshComponent* CrystalDragonStatue;                                // 0x03E0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03E8 (size: 0x8)
    class UPointLightComponent* GreenLight_PointLight;                                // 0x03F0 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x03F8 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0400 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0408 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0410 (size: 0x8)
    class USphereComponent* TriggerFreeLookDisable;                                   // 0x0418 (size: 0x8)
    class USphereComponent* TriggerCutscene;                                          // 0x0420 (size: 0x8)
    class UStaticMeshComponent* Dragon_Base;                                          // 0x0428 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0430 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0438 (size: 0x8)
    float GreenPointLight_Timeline_GreenPointLight_Intensity_B415FBA64BE375DEE7339082EAAA2C6C; // 0x0440 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GreenPointLight_Timeline__Direction_B415FBA64BE375DEE7339082EAAA2C6C; // 0x0444 (size: 0x1)
    class UTimelineComponent* GreenPointLight_Timeline;                               // 0x0448 (size: 0x8)
    float DragonSpotLight_Fade_LightFade_2931796B4D3E41422587FA993F7DC7D1;            // 0x0450 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DragonSpotLight_Fade__Direction_2931796B4D3E41422587FA993F7DC7D1; // 0x0454 (size: 0x1)
    class UTimelineComponent* DragonSpotLight_Fade;                                   // 0x0458 (size: 0x8)
    float Timeline_0_Rotation_61A1D756401C1A458A455B8E473A5B83;                       // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_61A1D756401C1A458A455B8E473A5B83; // 0x0464 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0468 (size: 0x8)
    float DragonSkeletalMesh_Tint_Lerp_6900ACCC4AD2079488F5A2BAA01697D5;              // 0x0470 (size: 0x4)
    float DragonSkeletalMesh_Emissive_Value_6900ACCC4AD2079488F5A2BAA01697D5;         // 0x0474 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DragonSkeletalMesh__Direction_6900ACCC4AD2079488F5A2BAA01697D5; // 0x0478 (size: 0x1)
    class UTimelineComponent* DragonSkeletalMesh;                                     // 0x0480 (size: 0x8)
    class ALevelSequenceActor* Level_Sequence;                                        // 0x0488 (size: 0x8)
    class ATargetPoint* Walk to Target Point;                                         // 0x0490 (size: 0x8)
    class AActor* Target_Player;                                                      // 0x0498 (size: 0x8)
    bool Bypass Available;                                                            // 0x04A0 (size: 0x1)
    class ALevelSequenceActor* Alternate_Sequence;                                    // 0x04A8 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x04B0 (size: 0x8)
    bool Cutscene_Disabled;                                                           // 0x04B8 (size: 0x1)
    bool Collected_Dragons;                                                           // 0x04B9 (size: 0x1)
    bool Temp_Mesh_Dragon;                                                            // 0x04BA (size: 0x1)
    bool preventShake;                                                                // 0x04BB (size: 0x1)
    bool Active Dragon;                                                               // 0x04BC (size: 0x1)
    class ASaveFairy_C* SaveFairyRef;                                                 // 0x04C0 (size: 0x8)
    class UAkAudioEvent* SFX_Rescue;                                                  // 0x04C8 (size: 0x8)
    bool IAMMAGNUS;                                                                   // 0x04D0 (size: 0x1)
    int32 ShakeStyle;                                                                 // 0x04D4 (size: 0x4)
    float xRot;                                                                       // 0x04D8 (size: 0x4)
    float yRot;                                                                       // 0x04DC (size: 0x4)
    bool CutsceneActive;                                                              // 0x04E0 (size: 0x1)
    bool DragonGlowInit;                                                              // 0x04E1 (size: 0x1)
    class ASkeletalMeshActor* DragonSkeletalRef;                                      // 0x04E8 (size: 0x8)
    FColor EmissiveColor;                                                             // 0x04F0 (size: 0x4)
    bool SFX_ShakeEnabled;                                                            // 0x04F4 (size: 0x1)
    float FaceDragon_Start;                                                           // 0x04F8 (size: 0x4)
    float FaceDragon_End;                                                             // 0x04FC (size: 0x4)
    class AActor* VFXActor;                                                           // 0x0500 (size: 0x8)
    TArray<class UAnimSequenceBase*> ShakeAnims;                                      // 0x0508 (size: 0x10)
    class AActor* Flyoff_Dragon_BP;                                                   // 0x0518 (size: 0x8)
    int32 InteractionState;                                                           // 0x0520 (size: 0x4)
    FText Prompt_Text;                                                                // 0x0528 (size: 0x18)
    FText Name;                                                                       // 0x0540 (size: 0x18)
    int32 FairyState;                                                                 // 0x0558 (size: 0x4)
    FName CurrentFairyStateName;                                                      // 0x0560 (size: 0x8)
    bool PlayerRespawned;                                                             // 0x0568 (size: 0x1)
    bool DontUseFairyCam;                                                             // 0x0569 (size: 0x1)
    FTransform DragonTransform;                                                       // 0x0570 (size: 0x30)
    FTransform DragonTransform_Offset;                                                // 0x05A0 (size: 0x30)
    bool CutsceneActive_0;                                                            // 0x05D0 (size: 0x1)
    class ABP_Collectible_Dragon_LeaveFX_C* SpawnedDragon;                            // 0x05D8 (size: 0x8)
    FDataTableRowHandle DialogueTable;                                                // 0x05E0 (size: 0x10)
    class UParticleSystem* customSaveFairyVFX;                                        // 0x05F0 (size: 0x8)
    bool ReplayMenuActive;                                                            // 0x05F8 (size: 0x1)
    bool useDragonLight;                                                              // 0x05F9 (size: 0x1)
    float DragonLightIntensity;                                                       // 0x05FC (size: 0x4)
    FLinearColor DragonLightColor;                                                    // 0x0600 (size: 0x10)
    bool testDragonLight;                                                             // 0x0610 (size: 0x1)
    FLightingChannels Local Channels;                                                 // 0x0611 (size: 0x1)
    FLightingChannels NewVar_0;                                                       // 0x0612 (size: 0x1)
    bool StopIconRotate;                                                              // 0x0613 (size: 0x1)
    TArray<FText> MenuChoices;                                                        // 0x0618 (size: 0x10)
    bool DontSkipIGC;                                                                 // 0x0628 (size: 0x1)
    FCollectable_Dragon_CDragonIGCStarted DragonIGCStarted;                           // 0x0630 (size: 0x10)
    FCollectable_Dragon_CDragonIGCEnded DragonIGCEnded;                               // 0x0640 (size: 0x10)
    int32 CamSettingsIndex;                                                           // 0x0650 (size: 0x4)
    float GreenPointLight_Intensity;                                                  // 0x0654 (size: 0x4)
    TArray<FName> BadFairyStateNames;                                                 // 0x0658 (size: 0x10)
    FGameplayTagContainer TagsPreventingStart;                                        // 0x0668 (size: 0x20)
    class AFalconSubtitleDataSource_C* tfbSubtitleDataSource;                         // 0x0688 (size: 0x8)
    class UtfbSubtitlePlayer_C* tfbSubtitlePlayer;                                    // 0x0690 (size: 0x8)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x0698 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void GetChildActorName(FString& NewParam);
    void hide dragons();
    void CheckpointSave();
    void set collected();
    void init save data();
    void was collected?(bool& collected);
    void restore from save(FPhasmidObjectSaveDataList save data);
    void UserConstructionScript();
    void DragonSkeletalMesh__FinishedFunc();
    void DragonSkeletalMesh__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void DragonSpotLight_Fade__FinishedFunc();
    void DragonSpotLight_Fade__UpdateFunc();
    void GreenPointLight_Timeline__FinishedFunc();
    void GreenPointLight_Timeline__UpdateFunc();
    void OnNotifyEnd_E082A2FB471B77B7D5EB3BA1E5BAB915(FName NotifyName);
    void OnNotifyBegin_E082A2FB471B77B7D5EB3BA1E5BAB915(FName NotifyName);
    void OnInterrupted_E082A2FB471B77B7D5EB3BA1E5BAB915(FName NotifyName);
    void OnBlendOut_E082A2FB471B77B7D5EB3BA1E5BAB915(FName NotifyName);
    void OnCompleted_E082A2FB471B77B7D5EB3BA1E5BAB915(FName NotifyName);
    void InpActEvt_SkipCutscene_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_FreeLook_K2Node_InputActionEvent_0(FKey Key);
    void Enter Cutscene();
    void SequenceEnd();
    void ReceiveBeginPlay();
    void Collected_Item();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void TriggerCutsceneStart(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TriggerSaveStarted(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void spyroHide();
    void ReceiveTick(float DeltaSeconds);
    void MovePlayerSeq(int32 PlayerMoveVal);
    void ShakeStatue();
    void HudDialogOptionSelected(int32 selectedIndex);
    void Replay Dragon();
    void FairyStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void PlayerReady();
    void StartFairyChoice();
    void SaveFairyStateChangeSetup();
    void BndEvt__TriggerFreeLookDisable_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerFreeLookDisable_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void FairyTalk();
    void CutsceneControl(bool StartCutscene);
    void Fade_DragonSpotLight();
    void Event Fade GreenLight_PointLight();
    void PlayerDied(class AActor* Actor, const FGameplayEventData Payload);
    void ShutdownTalkUI();
    void tfbSubtitlePlayerEventTick();
    void ExecuteUbergraph_Collectable_Dragon(int32 EntryPoint);
    void DragonIGCEnded__DelegateSignature();
    void DragonIGCStarted__DelegateSignature();
}; // Size: 0x6A0

#endif
