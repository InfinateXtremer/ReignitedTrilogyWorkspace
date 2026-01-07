#ifndef UE4SS_SDK_BP_CPS1194_Sparx_HPP
#define UE4SS_SDK_BP_CPS1194_Sparx_HPP

class ABP_CPS1194_Sparx_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0328 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    class AActor* PlayerActor;                                                        // 0x0340 (size: 0x8)
    TArray<FVector> PresetWaypoints;                                                  // 0x0348 (size: 0x10)
    FVector CurrentWaypoint;                                                          // 0x0358 (size: 0xC)
    int32 CurPresetWaypointIndex;                                                     // 0x0364 (size: 0x4)
    float DeltaTime;                                                                  // 0x0368 (size: 0x4)
    int32 CurSparxHealth;                                                             // 0x036C (size: 0x4)
    TArray<class UParticleSystem*> HealthParticles;                                   // 0x0370 (size: 0x10)
    class UParticleSystemComponent* CurHealthParticle;                                // 0x0380 (size: 0x8)
    TArray<FLinearColor> Light Colors;                                                // 0x0388 (size: 0x10)
    TEnumAsByte<ESparxMovementModes::Type> MovementMode;                              // 0x0398 (size: 0x1)
    FVector CollectibleLocation;                                                      // 0x039C (size: 0xC)
    FTimerHandle RandomTimer;                                                         // 0x03A8 (size: 0x8)
    class ABP_ButterflyHealth_C* CurButterflyTarget;                                  // 0x03B0 (size: 0x8)
    TArray<class UTexture2D*> ColorRemapTextures;                                     // 0x03B8 (size: 0x10)
    bool DebugForcedInvisibility;                                                     // 0x03C8 (size: 0x1)
    FTransform ReferenceTransform;                                                    // 0x03D0 (size: 0x30)
    FTransform SparxActorRelativeTransform;                                           // 0x0400 (size: 0x30)
    int32 RequestedWaypointIndex;                                                     // 0x0430 (size: 0x4)
    TArray<float> Emissive Values;                                                    // 0x0438 (size: 0x10)
    TArray<FLinearColor> Wing Tint Colors;                                            // 0x0448 (size: 0x10)
    TArray<class UAnimMontage*> TakeHitMontages;                                      // 0x0458 (size: 0x10)
    FVector ActorLocationPrev;                                                        // 0x0468 (size: 0xC)
    bool MovingToButterfly;                                                           // 0x0474 (size: 0x1)
    bool IsUnderwater;                                                                // 0x0475 (size: 0x1)
    class UParticleSystemComponent* SparxBubble;                                      // 0x0478 (size: 0x8)
    class AActor* ClosestGemActor;                                                    // 0x0480 (size: 0x8)
    bool IsGemFinderRequested;                                                        // 0x0488 (size: 0x1)
    bool GemFinderWaitingLOS;                                                         // 0x0489 (size: 0x1)
    bool GemFinderBlockedLOS;                                                         // 0x048A (size: 0x1)
    float GemFinderLastDistanceLOS;                                                   // 0x048C (size: 0x4)
    bool NightmareMode;                                                               // 0x0490 (size: 0x1)
    TEnumAsByte<ESparxMovementModes::Type> MovementModePrevious;                      // 0x0491 (size: 0x1)
    float ChargeInterpAccel;                                                          // 0x0494 (size: 0x4)
    float Butterfly_SparxOriginInterpSpeed;                                           // 0x0498 (size: 0x4)
    float Butterfly_ButterflyLocationInterpSpeed;                                     // 0x049C (size: 0x4)
    float TimerDuration;                                                              // 0x04A0 (size: 0x4)
    FTimerHandle IdleTimeOutTimer;                                                    // 0x04A8 (size: 0x8)
    bool IsInTimeOut;                                                                 // 0x04B0 (size: 0x1)
    FVector IdleTimeOutOffset;                                                        // 0x04B4 (size: 0xC)
    bool TimeOutVariant;                                                              // 0x04C0 (size: 0x1)
    TArray<class UTexture2D*> Emissive map Textures;                                  // 0x04C8 (size: 0x10)
    int32 InvisibilityStack;                                                          // 0x04D8 (size: 0x4)
    float ForwardLocationOffset;                                                      // 0x04DC (size: 0x4)

    void IGetSparxUnderwater(bool& IsUnderwater);
    void IGetSparxCanFetchCollectible(bool& CanFetch);
    void IGetSparxDebugInvisibilityOverride(bool& IsInvisible);
    FVector GetGemFinderTargetLocation();
    void UpdatePlayStationLightBarColor(int32 Health, bool& return);
    void UpdateSparxColors();
    void InitializePosition();
    void CheckIsSafeToMove(bool& SafeToMove);
    void SetSparxActorRelativeTransform(FVector RelativePosition, bool UpdateRotation, float InterpSpeed);
    void SetReferenceTransform();
    void UserConstructionScript();
    void OnNotifyEnd_0C01C96A4F83551B8CFA3DB909C93C41(FName NotifyName);
    void OnNotifyBegin_0C01C96A4F83551B8CFA3DB909C93C41(FName NotifyName);
    void OnInterrupted_0C01C96A4F83551B8CFA3DB909C93C41(FName NotifyName);
    void OnBlendOut_0C01C96A4F83551B8CFA3DB909C93C41(FName NotifyName);
    void OnCompleted_0C01C96A4F83551B8CFA3DB909C93C41(FName NotifyName);
    void OnNotifyEnd_87437BC94268E7024E239E90B574C3F3(FName NotifyName);
    void OnNotifyBegin_87437BC94268E7024E239E90B574C3F3(FName NotifyName);
    void OnInterrupted_87437BC94268E7024E239E90B574C3F3(FName NotifyName);
    void OnBlendOut_87437BC94268E7024E239E90B574C3F3(FName NotifyName);
    void OnCompleted_87437BC94268E7024E239E90B574C3F3(FName NotifyName);
    void CheckShouldIdleTimeOut();
    void DoIdleTimeOutCamera();
    void DoExitIdleTimeOut();
    void UpdateTimeOutCamera();
    void UpdateTimeOutSpyro();
    void UpdateTimeOut();
    void DoIdleTimeOut();
    void DoIdleTimeOutSpyro();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void GoToNewPresetWaypoint();
    void INotifySparxHealthChanged(float NewHealth, bool SkipReaction);
    void UpdateSparxAudioVisuals(bool visible);
    void ToggleSoundEffects(bool PlaySounds);
    void INotifySparxMovementModeChanged(TEnumAsByte<ESparxMovementModes::Type> NewMovementMode);
    void INotifySparxVisibilityChanged(bool visible, bool ResetStack);
    void UpdateMovement();
    void OnChangeToGroundMovement();
    void OnChangeToFreeLook();
    void OnGainHealth();
    void OnLoseHealth();
    void INotifySparxFetchCollectibleRequested(FVector CollectibleLocation, bool IsTreasureChest);
    void INotifySparxChaseButterflyRequested(class ABP_ButterflyHealth_C* ButterflyActor);
    void OnChaseButterfly();
    void ISetSparxDebugInvisibilityOverride(bool IsInvisible);
    void CheckForCollision();
    void UpdateMovementFetchCollectible();
    void UpdateMovementChaseButterfly();
    void INotifySparxIsUnderwater(bool IsUnderwater);
    void INotifySparxGemFindRequested(bool GemFinderRequested, class AActor* NearestActorWithGem);
    void OnGemFinder();
    void UpdateMovementGemFinder();
    void INotifySparxIsNightmareMode(bool NightmareMode);
    void OnChangeToDash();
    void UpdateHealthWithPlayer();
    void ReinitPresetWaypointTimer();
    void IRequestSparxGemFindInputReact(bool FoundAnything);
    void ISetSparxFowardOffset(float ForwardOffset);
    void ExecuteUbergraph_BP_CPS1194_Sparx(int32 EntryPoint);
}; // Size: 0x4E0

#endif
