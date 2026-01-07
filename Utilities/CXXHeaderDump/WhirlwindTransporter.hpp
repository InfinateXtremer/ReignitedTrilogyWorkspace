#ifndef UE4SS_SDK_WhirlwindTransporter_HPP
#define UE4SS_SDK_WhirlwindTransporter_HPP

class AWhirlwindTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    //class UPointLightComponent* GreenPointLight;                                      // 0x0EC8 (size: 0x8)
    //class UVisibilityComponentBP_C* VisibilityComponentBP;                            // 0x0ED0 (size: 0x8)
    //class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0ED8 (size: 0x8)
    //class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0EE0 (size: 0x8)
    //class UTfbAkComponent* AkAudio;                                                   // 0x0EE8 (size: 0x8)
    //class UParticleSystemComponent* PS_VFX_Levitate_Level_Exit_NEW;                   // 0x0EF0 (size: 0x8)
    //class UStaticMeshComponent* Cube1;                                                // 0x0EF8 (size: 0x8)
    //class UCameraComponent* Camera;                                                   // 0x0F00 (size: 0x8)
    //class USpringArmComponent* SpringArm;                                             // 0x0F08 (size: 0x8)
    //class UStaticMeshComponent* BaseGeo;                                              // 0x0F10 (size: 0x8)
    //float WhirlwindTimeline_LightIntensity_74DF67F942910D64C8887CBA4FCAE3F8;          // 0x0F18 (size: 0x4)
    //float WhirlwindTimeline_Beta_74DF67F942910D64C8887CBA4FCAE3F8;                    // 0x0F1C (size: 0x4)
    //float WhirlwindTimeline_Alpha_74DF67F942910D64C8887CBA4FCAE3F8;                   // 0x0F20 (size: 0x4)
    //TEnumAsByte<ETimelineDirection::Type> WhirlwindTimeline__Direction_74DF67F942910D64C8887CBA4FCAE3F8; // 0x0F24 (size: 0x1)
    //class UTimelineComponent* WhirlwindTimeline;                                      // 0x0F28 (size: 0x8)
    //float Timeline_1_Alpha_17DC8FC94F494101D2CDE89DF0C9E7D4;                          // 0x0F30 (size: 0x4)
    //TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_17DC8FC94F494101D2CDE89DF0C9E7D4; // 0x0F34 (size: 0x1)
    //class UTimelineComponent* Timeline_1;                                             // 0x0F38 (size: 0x8)
    float PlayerEntryRotation;                                                        // 0x0F40 (size: 0x4)
    float ExitRotation;                                                               // 0x0F44 (size: 0x4)
    FVector ExitLocation;                                                             // 0x0F48 (size: 0xC)
    FVector originalLocation;                                                         // 0x0F54 (size: 0xC)
    float TravelRate;                                                                 // 0x0F60 (size: 0x4)
    float TravelHeight;                                                               // 0x0F64 (size: 0x4)
    FTransform CamTransform_Start;                                                    // 0x0F70 (size: 0x30)
    FTransform CamTransform_End;                                                      // 0x0FA0 (size: 0x30)
    class ASimpleCamera_C* CamActorRef;                                               // 0x0FD0 (size: 0x8)
    bool ReturnHomeOnly;                                                              // 0x0FD8 (size: 0x1)
    float fadeTime;                                                                   // 0x0FDC (size: 0x4)
    float DistFromChar;                                                               // 0x0FE0 (size: 0x4)
    float TargetDistFromChar;                                                         // 0x0FE4 (size: 0x4)
    float Dot Product;                                                                // 0x0FE8 (size: 0x4)
    float OriginalZ;                                                                  // 0x0FEC (size: 0x4)
    float PlayerForward(Degrees);                                                     // 0x0FF0 (size: 0x4)
    bool WaitingOnTargetTransportLoad;                                                // 0x0FF4 (size: 0x1)
    bool WaitingOnTargetTransportFlyout;                                              // 0x0FF5 (size: 0x1)
    float Preload Radius;                                                             // 0x0FF8 (size: 0x4)
    bool ReturnHomeInProgress;                                                        // 0x0FFC (size: 0x1)
    bool RotationSaved;                                                               // 0x0FFD (size: 0x1)
    bool IsHubWW;                                                                     // 0x0FFE (size: 0x1)
    FRotator StartRotation;                                                           // 0x1000 (size: 0xC)
    bool Camera crossed;                                                              // 0x100C (size: 0x1)
    float Final Angle;                                                                // 0x1010 (size: 0x4)
    float CamFollowPercentage;                                                        // 0x1014 (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void Put in Flying transition();
    void Set rotation parameters();
    void UpdateOrientation();
    bool TriggerTransport(class ACharacter* playerCharacter);
    void CheckForPC();
    void update save data();
    void DotProduct(float& angle);
    void GetNewCamPos(float Alpha, float PC Forward, float Dot Product, float OrigZ, FVector& Location);
    void GetNewCamPos_OLD(float Track1, float Track2, FVector XPos, FVector& Location);
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void WhirlwindTimeline__FinishedFunc();
    void WhirlwindTimeline__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void StartCustomCam();
    void EndCustomCam();
    void TriggerPreload();
    void UnTriggerPreload();
    void ReceiveBeginPlay();
    void StartFlyoutOfWhirlwindTimeline();
    void StartWhirlwindTimeline();
    void SetupStaticData();
    void InternalReturnHomeOnly();
    void CompleteFlyout();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void SavePortalRotation(FRotator CurrentRotation);
    void OnPartnerPortalFound(class APortal* FoundParter);
    void TI_ReturnHomeMenu();
    void TI_TransitionBeginSource();
    void DEMO TITLE SCREEN(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void HandleLevelJump(FDataTableRowHandle Next Level);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_WhirlwindTransporter(int32 EntryPoint);
}; // Size: 0x1018

#endif
