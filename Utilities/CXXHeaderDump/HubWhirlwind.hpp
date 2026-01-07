#ifndef UE4SS_SDK_HubWhirlwind_HPP
#define UE4SS_SDK_HubWhirlwind_HPP

class AHubWhirlwind_C : public AWhirlwindTransporter_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1018 (size: 0x8)
    class US2_PortalCollectibles_C* S2_PortalCollectibles;                            // 0x1020 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_HubWhirlwind_Exit;                         // 0x1028 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_HubWhirlwind_Entry;                        // 0x1030 (size: 0x8)
    class UArrowComponent* CamerCompleteLocator;                                      // 0x1038 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x1040 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x1048 (size: 0x8)
    class UArrowComponent* CompleteLocator;                                           // 0x1050 (size: 0x8)
    class UArrowComponent* CameraLocator2;                                            // 0x1058 (size: 0x8)
    class UArrowComponent* CameraLocator;                                             // 0x1060 (size: 0x8)
    class UArrowComponent* StartLocator;                                              // 0x1068 (size: 0x8)
    class UArrowComponent* FinalLocator;                                              // 0x1070 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_DC54929642B61E1DA2C2E5ABCA820C57; // 0x1078 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x1080 (size: 0x8)
    float SpyroWindDownP2_NewTrack_2_1B6535D04D700488949A188FC3EBF221;                // 0x1088 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpyroWindDownP2__Direction_1B6535D04D700488949A188FC3EBF221; // 0x108C (size: 0x1)
    class UTimelineComponent* SpyroWindDownP2;                                        // 0x1090 (size: 0x8)
    float CameraWindDown_NewTrack_0_0ABAD7ED45473DA335B03D81E2F73DCA;                 // 0x1098 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraWindDown__Direction_0ABAD7ED45473DA335B03D81E2F73DCA; // 0x109C (size: 0x1)
    class UTimelineComponent* CameraWindDown;                                         // 0x10A0 (size: 0x8)
    float SpyroWindDownP1_NewTrack_1_322140EA4E0008DC85FBE995B2DBC35F;                // 0x10A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpyroWindDownP1__Direction_322140EA4E0008DC85FBE995B2DBC35F; // 0x10AC (size: 0x1)
    class UTimelineComponent* SpyroWindDownP1;                                        // 0x10B0 (size: 0x8)
    float Floatout_NewTrack_1_D54CFE0744BDF12D571BDEA27D32316C;                       // 0x10B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Floatout__Direction_D54CFE0744BDF12D571BDEA27D32316C; // 0x10BC (size: 0x1)
    class UTimelineComponent* Floatout;                                               // 0x10C0 (size: 0x8)
    float Unwind_NewTrack_0_B758B7614FA83DC672FF69AF0A509E61;                         // 0x10C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Unwind__Direction_B758B7614FA83DC672FF69AF0A509E61; // 0x10CC (size: 0x1)
    class UTimelineComponent* Unwind;                                                 // 0x10D0 (size: 0x8)
    FTransform PlayerStartTransform;                                                  // 0x10E0 (size: 0x30)
    FTransform Whirlwind Camera;                                                      // 0x1110 (size: 0x30)
    class AActor* CameraActor;                                                        // 0x1140 (size: 0x8)
    FTransform FinalTransform;                                                        // 0x1150 (size: 0x30)
    FTransform CameraStartTransform;                                                  // 0x1180 (size: 0x30)
    class ABasePortal_C* sourcePortal;                                                // 0x11B0 (size: 0x8)
    float Player Start Rotation;                                                      // 0x11B8 (size: 0x4)
    float Player Final Rotation;                                                      // 0x11BC (size: 0x4)
    FTransform CameraFinalTransform;                                                  // 0x11C0 (size: 0x30)
    bool IsEnabled;                                                                   // 0x11F0 (size: 0x1)
    bool PlayerSpawned;                                                               // 0x11F1 (size: 0x1)
    bool DataLoaded;                                                                  // 0x11F2 (size: 0x1)

    bool RemoveDownloadMessage();
    bool CheckForPatch();
    void Set Child Actor Visibility(bool visible);
    bool TriggerTransport(class ACharacter* playerCharacter);
    void Setup Incoming Transition Camera();
    void UserConstructionScript();
    void Floatout__FinishedFunc();
    void Floatout__UpdateFunc();
    void Unwind__FinishedFunc();
    void Unwind__UpdateFunc();
    void SpyroWindDownP1__FinishedFunc();
    void SpyroWindDownP1__UpdateFunc();
    void CameraWindDown__FinishedFunc();
    void CameraWindDown__UpdateFunc();
    void SpyroWindDownP2__FinishedFunc();
    void SpyroWindDownP2__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void StartWhirlwindTimeline();
    void TI_TransitionCompleteSource();
    void HandlePlayerSpawn(float delayDuration);
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void setPortalEnabled(bool Enabled);
    void TriggerPreload();
    void UnTriggerPreload();
    void CheckForPC();
    void TI_ReturnHomeMenu();
    void UpdateOrientation();
    void LoadDataRestored();
    void ready();
    void ExecuteUbergraph_HubWhirlwind(int32 EntryPoint);
}; // Size: 0x11F3

#endif
