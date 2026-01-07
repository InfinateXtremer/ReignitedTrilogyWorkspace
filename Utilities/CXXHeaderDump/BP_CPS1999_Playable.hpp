#ifndef UE4SS_SDK_BP_CPS1999_Playable_HPP
#define UE4SS_SDK_BP_CPS1999_Playable_HPP

class ABP_CPS1999_Playable_C : public ABP_Base_Playable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0D30 (size: 0x8)
    class UStaticMeshComponent* SunGlasses;                                           // 0x0D38 (size: 0x8)
    class UCapsuleComponent* HitRegion_Neck;                                          // 0x0D40 (size: 0x8)
    class USphereComponent* HitRegion_Head;                                           // 0x0D48 (size: 0x8)
    class UCapsuleComponent* HitRegion_Body;                                          // 0x0D50 (size: 0x8)
    class UChildActorComponent* FireAttackSplines;                                    // 0x0D58 (size: 0x8)
    FTimerHandle DebugTimerHandle;                                                    // 0x0D60 (size: 0x8)
    FActiveGameplayEffectHandle SpeedControlEffect;                                   // 0x0D68 (size: 0x8)
    bool IsJumpPressed;                                                               // 0x0D70 (size: 0x1)
    FVector Velocity;                                                                 // 0x0D74 (size: 0xC)
    bool IsChargePressed;                                                             // 0x0D80 (size: 0x1)
    class ABP_SpitItemPlacement_Base_C* SpitItemActor;                                // 0x0D88 (size: 0x8)
    FVector ClimbingSurfaceNormal;                                                    // 0x0D90 (size: 0xC)
    bool ClimbingSurfaceAvailable;                                                    // 0x0D9C (size: 0x1)
    FVector SwimCurrentSurface;                                                       // 0x0DA0 (size: 0xC)
    float Speed;                                                                      // 0x0DAC (size: 0x4)
    float DeltaSpeed;                                                                 // 0x0DB0 (size: 0x4)
    bool IsMovingAlongForwardVector;                                                  // 0x0DB4 (size: 0x1)
    float FlyMaxAltitude;                                                             // 0x0DB8 (size: 0x4)
    float FlyMaxAltitudeSpeed;                                                        // 0x0DBC (size: 0x4)
    float FlyMinAltitude;                                                             // 0x0DC0 (size: 0x4)
    float FlyMinAltitudeSpeed;                                                        // 0x0DC4 (size: 0x4)
    FActiveGameplayEffectHandle FlySpeedControlEffect;                                // 0x0DC8 (size: 0x8)
    float FlyYawInput;                                                                // 0x0DD0 (size: 0x4)
    float FlyPitchInput;                                                              // 0x0DD4 (size: 0x4)
    float FlyRollInput;                                                               // 0x0DD8 (size: 0x4)
    bool FlyIsLooping;                                                                // 0x0DDC (size: 0x1)
    bool FlyIsTwisting;                                                               // 0x0DDD (size: 0x1)
    float FlyMaxPitchAngle;                                                           // 0x0DE0 (size: 0x4)
    float SuperChargeRamps_GravityScale;                                              // 0x0DE4 (size: 0x4)
    float SuperChargeRamps_ZVelocity;                                                 // 0x0DE8 (size: 0x4)
    float SuperChargeRamps_MaxHoldTime;                                               // 0x0DEC (size: 0x4)
    float SuperChargeRamps_GravityScale_Stage2;                                       // 0x0DF0 (size: 0x4)
    float SuperChargeRamps_ZVelocity_Stage2;                                          // 0x0DF4 (size: 0x4)
    float SuperChargeRamps_MaxHoldTime_Stage2;                                        // 0x0DF8 (size: 0x4)
    FPhasmidProjectileStruct CustomProjectile;                                        // 0x0E00 (size: 0x2F0)
    FTransform FlyLoopEndTransform;                                                   // 0x10F0 (size: 0x30)
    FTimerHandle FlyLoopTimer;                                                        // 0x1120 (size: 0x8)
    class UParticleSystemComponent* SuperFireIndicator;                               // 0x1128 (size: 0x8)
    float RotateSpyroRadius;                                                          // 0x1130 (size: 0x4)
    bool IsStandingOnLedge;                                                           // 0x1134 (size: 0x1)
    int32 FlyTwistState;                                                              // 0x1138 (size: 0x4)
    float FlyTwistClimbDuration;                                                      // 0x113C (size: 0x4)
    bool FlyIsCloseToGround;                                                          // 0x1140 (size: 0x1)
    int32 FlyLoopCamSettingsId;                                                       // 0x1144 (size: 0x4)
    float SuperChargeRamps_GravityScale_Stage3;                                       // 0x1148 (size: 0x4)
    float SuperChargeRamps_ZVelocity_Stage3;                                          // 0x114C (size: 0x4)
    float SuperChargeRamps_MaxHoldTime_Stage3;                                        // 0x1150 (size: 0x4)
    class UParticleSystemComponent* FlightWaterWake;                                  // 0x1158 (size: 0x8)
    int32 DebugInt;                                                                   // 0x1160 (size: 0x4)
    FHitResult FlyGroundCheckHit;                                                     // 0x1168 (size: 0x88)
    int32 SpeedControlLevel;                                                          // 0x11F0 (size: 0x4)
    int32 FlySpeedControlLevel;                                                       // 0x11F4 (size: 0x4)
    FRotator FlyCombinedAttitude;                                                     // 0x11F8 (size: 0xC)
    class UParticleSystemComponent* GlideBackPedalDust;                               // 0x1208 (size: 0x8)
    bool FlyIsOutOfBounds;                                                            // 0x1210 (size: 0x1)
    class UParticleSystemComponent* RageFireEffects;                                  // 0x1218 (size: 0x8)
    class UMaterialInterface* CurrentSpyroDefaultMaterial;                            // 0x1220 (size: 0x8)
    class UMaterialInterface* CurrentSpyroMaterialOverride;                           // 0x1228 (size: 0x8)
    float GlidePreviousAltiude;                                                       // 0x1230 (size: 0x4)
    bool DEBUG_PrintsOn;                                                              // 0x1234 (size: 0x1)
    FVector VelocityLastFrame;                                                        // 0x1238 (size: 0xC)
    bool ChargeObstacleAvoiding;                                                      // 0x1244 (size: 0x1)
    TArray<FLinearColor> CheatTints;                                                  // 0x1248 (size: 0x10)
    bool CheatsSquidSkateboard;                                                       // 0x1258 (size: 0x1)
    class UParticleSystemComponent* IceBreathEffects;                                 // 0x1260 (size: 0x8)
    bool IsCurrentRadiusTargetSmall;                                                  // 0x1268 (size: 0x1)
    class UParticleSystemComponent* LevelTransition_WindLines;                        // 0x1270 (size: 0x8)
    class UParticleSystemComponent* LevelTransition_Contrails;                        // 0x1278 (size: 0x8)
    bool IsFloorChest;                                                                // 0x1280 (size: 0x1)
    FTimerHandle ChestFloorTimer;                                                     // 0x1288 (size: 0x8)
    bool HiddenByCamClipVV;                                                           // 0x1290 (size: 0x1)
    bool IsAutoCharging;                                                              // 0x1291 (size: 0x1)
    bool FlyIsKeyboardMouseAndUsingMouse;                                             // 0x1292 (size: 0x1)
    float FlySpeedBoost;                                                              // 0x1294 (size: 0x4)
    int32 DrawCount;                                                                  // 0x1298 (size: 0x4)
    FVector SwimCurrentSurface_Prev;                                                  // 0x129C (size: 0xC)
    bool NoSwimSoundCooldown;                                                         // 0x12A8 (size: 0x1)
    bool ChargeGroundParticleSystem;                                                  // 0x12A9 (size: 0x1)
    class UParticleSystemComponent* Charge_GroundEffects;                             // 0x12B0 (size: 0x8)
    bool DidJustReattach;                                                             // 0x12B8 (size: 0x1)
    TArray<FString> CheatsList;                                                       // 0x12C0 (size: 0x10)

    void IsKeyboardMouse(bool& Value);
    void ResetLeftStickYOnKBM();
    void GetIsPhysicsCollisionEnabled(class UPrimitiveComponent* PrimitiveComponent, bool& TRUE);
    void IDoChargeMovementWallHugCheck(FVector DesiredMovementVector, float Tolerance, FVector& CompensatedVector, bool& PushingAgainstGeo);
    void IDoChargeMovementBonkCheck(FVector Direction, float Tolerance, bool SwitchVerticalOffset, bool& ShouldBonk);
    float CalculateFlightSpeed();
    void CheckShouldSlideDown();
    bool OnDealDamage(const FGameplayEventData Payload);
    void CheckGroundForDustEffect(bool CheckGround);
    void CheckShouldIceSkate();
    void IForceAbility:GetCustomProjectile(FPhasmidProjectileStruct& CustomProjectile);
    void IGetSuperChargeJumpAssistParams(float& Gravity, float& JumpZVelocity, float& JumpMaxHoldTime, float& GravityStageTwo, float& JumpZVelocityStageTwo, float& JumpMaxHoldTimeStageTwo, float& GravityStageThree, float& JumpZVelocityStageThree, float& JumpMaxHoldTimeStageThree);
    void CheckForObstacles(FVector StartPosition, FVector ForwardVector, float DistanceToCheck, class AActor*& HitActor, bool& FoundObstacle, FVector& HitLocation, float& DistanceToHit, FVector& HitSurfaceNormal, FVector& ImpactNormal);
    void IGetGeoCompensatedMovementVector(FVector DesiredMovementVector, float Tolerance, FVector& CompensatedVector);
    void ICheckCanDive(bool& CanDive);
    void IGetSwimVolumeInfo(FVector& SurfaceOrigin, bool& DivingDisabled);
    bool CanJumpInternal();
    void IGetIsSwimming(bool& IsSwimming);
    void GetClimbingSurfaceInfo(FVector RaycastStart, FVector RaycastDirection, float RaycastLength, bool& FoundAnything, bool& IsClimbable, FVector& SurfaceNormal, FVector& HitLocation);
    void IRequestClimbMovement(FVector2D StickInput, bool& CanMove);
    void IGetSpitItemActor(bool& IsValid, class ABP_SpitItemPlacement_Base_C*& SpitItemActor);
    void IGetIsInAbilities(FGameplayTagContainer AbilityTags, bool& IsInAbilities);
    void IGetIsInFlightLevel(bool& IsInFlightLevel);
    void IGetIsSideRolling(bool& IsSideRolling);
    void IGetIsFlying(bool& IsFlying);
    void IGetIsJumping(bool& IsJumping);
    void IGetIsFreeLooking(bool& IsFreeLooking);
    void IGetIsGliding(bool& IsGliding);
    void IGetIsCharging(bool& IsCharging);
    void UserConstructionScript();
    void InpActEvt_Ctrl+Shift_D_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Ctrl+Shift_H_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_T_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Ctrl+Shift_N_K2Node_InputKeyEvent_0(FKey Key);
    void CheckCameraProximity();
    void ICheatCodeBigHeadMode(bool BigHeadEnabled);
    void ICheatCodeFlatSpyroMode(bool FlatSpyroEnabled);
    void ICheatCodeMiniHeadMode(bool MiniHeadEnabled);
    void ICheatCodeMiniWingsMode(bool MiniWingsEnabled);
    void ICheatCodeSetSpyroTintColor();
    void ICheatCodeSquidSkateboard(bool SquidSkateboardEnabled);
    void ICheatCodeSetSpyroSkin(int32 SpyroSkinIndex);
    void ICheatCodeNotifySpyro(FString CheatStringKey);
    void Cheats_CheckAreEnabled();
    void Cheats_Initialize(FString CheatStringKey);
    void CheckCheatTint();
    void ILevelTransitionFaceBottom(bool Pressed);
    void ILevelTransitionBumperLeft(bool Pressed);
    void ILevelTransitionBumperRight(bool Pressed);
    void Is In Flying Transition(bool IsInFlyingTransition, class ALightingManager_C* IncomingLightingManager);
    void LevelTransition_OnBegin();
    void LevelTransition_OnEnd();
    void IDoFireAttack();
    void INotifySpitItemConsumed(class ABP_SpitItemPlacement_Base_C* SpitItemActor);
    void IClearSpitItemActor();
    void IDoFireAttackButtonReleased();
    void IDoFly();
    void INotifyCharacterIsInFlightLevel(bool IsInFlightLevel);
    void Fly_Update();
    void INotifyFlyStarted();
    void INotifyFlyEnded();
    void IUpdateFlightControls(float YawInput, float PitchInput, float RollInput, bool IsKeyboardMouseAndUsingMouse);
    void Fly_UpdateLooping();
    void Fly_UpdateFlap();
    void IDoRequestFlyLoop();
    void IDoRequestFlyTwistLoop();
    void Fly_LoopOnTimerEnd();
    void Fly_UpdateSFX();
    void OnTwistStateZeroEnd();
    void Fly_UpdateTwisting();
    void OnTwistStateOneEnd();
    void Fly_CleanUpLoops();
    void Fly_OnTwistEnd();
    void OnTwistStateTwoEnd();
    void OnTwistStateThreeEnd();
    void FlyShouldUpdateSurfaceEffects(FHitResult OutHit);
    void Fly_OnLanded();
    void IDoNotifyFlyOutOfBounds();
    void Fly_LoopNotAvailable();
    void Flying_GroundCheck();
    void IForceAbility:Fly(bool IsFlying);
    void IForceAbility:Glide(bool IsGliding);
    void IForceAbility:SuperFly(bool IsSuperFlying);
    void IForceAbility:Invincibility(bool IsInvincible);
    void IForceAbility:SuperJump();
    void IForceAbility:SuperFire(bool CanSuperFire);
    void IForceAbility:IceBreath(bool CanIceBreath);
    void IForceAbility:SetFlightParameters(float MaxAltitude, float MaxAltitudeSpeed, float MinAltitude, float MinAltitudeSpeed, class AActor* ReferenceAltitudeActor);
    void IForceAbility:CanSuperFly(bool CanSuperFly);
    void IForceAbility:SuperCharge(bool IsSuperCharging, bool Alternate);
    void IForceAbility:CanSuperCharge(bool CanSuperCharge, bool Alternate);
    void IForceAbility:SetCustomProjectile(FPhasmidProjectileStruct Projectile);
    void IForceAbility:ClearCustomProjectile();
    void IForceAbility:RageFire(bool CanRageFire);
    void IForceAbility:ChangeSpyroMaterial(TEnumAsByte<ESpyroMaterials::Type> NewSpyroMaterial);
    void SetSpyroCurrentDefaultMaterial(class UMaterialInterface* NewDefaultMaterial);
    void IForceAbility:SuperFireUpdateIndicator();
    void IForceAbility:AutoCharge(bool AutoCharge);
    void IForceAbility:IceFire(bool CanIceFire);
    void IForceAbility:TimeOutFireSneeze();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnNotifyJumpApex();
    void IDoJump(bool Pressed);
    void IDoGlide();
    void OnLanded(const FHitResult& Hit);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void IDoCharge(bool Pressed);
    void IDoGlideCancel();
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    void IDoSideRoll(bool Pressed, float Direction);
    void UpdateMaxGroundSpeed();
    void Charge_Update();
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void IGetIsJumpButtonPressed(bool Pressed);
    void CheckForBucking();
    void IDoRequestHeadBash();
    void Climb_UpdateMovementConstraint(FVector MoveToNormal);
    void Climb_ShouldTryReattach();
    void INotifyPlayerInClimbVolume(bool InVolume, FVector VolumeForwardVector);
    void INotifyPlayerInSwimVolume(FVector SurfaceOrigin, bool DivingDisabled);
    void Swim_Update();
    void Swim_CheckShouldSurface();
    void Swim_UpdateSurfaceInformation();
    void Swim_CheckShouldStart();
    void IDoSkateboard(bool EnableTurbo);
    void Swim_CheckShouldForceUnderwater();
    void INotifyForwardVectorMovement(bool ForwardVectorMovement);
    void Swim_CheckForShallows();
    void OnSetSkateboardState(FName stateName);
    void ISetSuperChargeJumpAssistParams(float Gravity, float JumpZVelocity, float JumpMaxHoldTime, float GravityStageTwo, float JumpZVelocityStageTwo, float JumpMaxHoldTimeStageTwo, float GravityStageThree, float JumpZVelocityStageThree, float JumpMaxHoldTimeStageThree);
    void UpdateFreelook();
    void Glide_Update();
    void INotifyUnderDesignerControl(bool IsUnderDesignerControl);
    void ReceivePossessed(class AController* NewController);
    void IDoFreeLook(bool Pressed);
    void Glide_OnLanded();
    void IRequestChargeBonk();
    void FreeLook_ShouldPushForward();
    void Glide_CheckAltitudeGain();
    void Swim_CheckOverVolume(const TArray<class AActor*>& OverlappingSwimVolumes);
    void JumpInputExpired();
    void HandleGameStateChange(EFalconGameState previous state, EFalconGameState current state);
    void Swim_CheckForSurfaceChange();
    void EnableSkateboardTurbo(bool EnableTurbo);
    void GiveTurboPoints(int32 TurboPoints);
    void Charge_UpdateGroundEffects(bool IsCharging);
    void SetCharacterVisible(bool NewVisibility);
    void INotifyClimbingReattach();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CPS1999_Playable(int32 EntryPoint);
}; // Size: 0x12D0

#endif
