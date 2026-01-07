#ifndef UE4SS_SDK_AbilityGate_Base_HPP
#define UE4SS_SDK_AbilityGate_Base_HPP

class AAbilityGate_Base_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_AbilityGate_Boom_Center;                   // 0x0450 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_AbilityGate_Boom_L;                        // 0x0458 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_AbilityGate_L;                             // 0x0460 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_AbilityGate_R;                             // 0x0468 (size: 0x8)
    class UBoxComponent* NavVolume;                                                   // 0x0470 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_AbilityGate_Boom_R;                        // 0x0478 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_AbilityGate_Icon_Sparkles;                 // 0x0480 (size: 0x8)
    class USphereComponent* SpiritSphere;                                             // 0x0488 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0490 (size: 0x8)
    class UPortalNameComponent_C* SpiritParticlesRequired;                            // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Icon;                                                 // 0x04A0 (size: 0x8)
    class UTfbAkComponent* AK Audio;                                                  // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Pole_L;                                               // 0x04B0 (size: 0x8)
    class UStaticMeshComponent* Pole_R;                                               // 0x04B8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x04C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04C8 (size: 0x8)
    float Timeline_1_NewTrack_1_702EC5004D9608B492D5ED99EDDE8514;                     // 0x04D0 (size: 0x4)
    float Timeline_1_NewTrack_0_702EC5004D9608B492D5ED99EDDE8514;                     // 0x04D4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_702EC5004D9608B492D5ED99EDDE8514; // 0x04D8 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04E0 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> AbilityGrantedTimeline__Direction_FD22310D43DF266F73BB95833E7D5CAB; // 0x04E8 (size: 0x1)
    class UTimelineComponent* AbilityGrantedTimeline;                                 // 0x04F0 (size: 0x8)
    TEnumAsByte<AbilityGate_Enum::Type> AbilityState;                                 // 0x04F8 (size: 0x1)
    float AbilityTimer;                                                               // 0x04FC (size: 0x4)
    bool ActiveOnStart;                                                               // 0x0500 (size: 0x1)
    class AActor* ReportingActor;                                                     // 0x0508 (size: 0x8)
    FText TextName;                                                                   // 0x0510 (size: 0x18)
    FVector Location_Start;                                                           // 0x0528 (size: 0xC)
    FVector Location_End;                                                             // 0x0534 (size: 0xC)
    float LerpVal;                                                                    // 0x0540 (size: 0x4)
    EInventoryType WatchEnum;                                                         // 0x0544 (size: 0x1)
    int32 WatchEnum_Value;                                                            // 0x0548 (size: 0x4)
    int32 WatchEnum_Last;                                                             // 0x054C (size: 0x4)
    bool WatchForValue;                                                               // 0x0550 (size: 0x1)
    bool UI_Timer_Active;                                                             // 0x0551 (size: 0x1)
    TEnumAsByte<EHudGateTimerType::Type> timer type;                                  // 0x0552 (size: 0x1)
    float PlayRate;                                                                   // 0x0554 (size: 0x4)
    bool Activated;                                                                   // 0x0558 (size: 0x1)
    bool GlowEnabled;                                                                 // 0x0559 (size: 0x1)
    float GlowVal_Current;                                                            // 0x055C (size: 0x4)
    float Z_IconPos;                                                                  // 0x0560 (size: 0x4)
    bool SpiritUIActive;                                                              // 0x0564 (size: 0x1)
    FColor EmissiveTint;                                                              // 0x0568 (size: 0x4)
    bool AllowWhirlwindsToKeepAbilities;                                              // 0x056C (size: 0x1)
    TArray<class AActor*> NotifyOtherGates;                                           // 0x0570 (size: 0x10)

    void SuperFlyJumpCheck(bool& TRUE);
    void Ability_TimeScale(float NewPlayRate);
    void UI_Timer_Shutdown();
    void UI_Timer_Startup();
    void Initialize_GrantAbility();
    void ReadyToStart();
    void Ability_ShutdownSeq();
    void Ability_StartupSeq();
    void Initialize_Ready();
    void RevokeAbility();
    void AbilityActive();
    void AbilityInactive();
    void GrantAbility();
    void UserConstructionScript();
    void AbilityGrantedTimeline__FinishedFunc();
    void AbilityGrantedTimeline__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void SpireGlow(bool Disable);
    void UpdateGlowValues();
    void AttachNumbers();
    void UpdateNumberOrientation();
    void PlayerOverlapBox();
    void SpiritUIShow(bool Show);
    void MissionReset(class AActor* RequestActor);
    void OnPlayerWithAbilityEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ForceRevoke();
    void ExecuteUbergraph_AbilityGate_Base(int32 EntryPoint);
}; // Size: 0x580

#endif
