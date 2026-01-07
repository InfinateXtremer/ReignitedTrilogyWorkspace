#ifndef UE4SS_SDK_BP_Base_Playable_HPP
#define UE4SS_SDK_BP_Base_Playable_HPP

class ABP_Base_Playable_C : public ASpyroCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class USphereComponent* SparxLootRadius;                                          // 0x0878 (size: 0x8)
    class UChildActorComponent* SparxActor;                                           // 0x0880 (size: 0x8)
    class UCameraManagerComponent_C* CameraManagerComponent;                          // 0x0888 (size: 0x8)
    TEnumAsByte<EMovementMode> MovementModeCur;                                       // 0x0890 (size: 0x1)
    TEnumAsByte<EMovementMode> MovementModePrev;                                      // 0x0891 (size: 0x1)
    class UAnimInstance* AnimInstance;                                                // 0x0898 (size: 0x8)
    float DeltaSeconds;                                                               // 0x08A0 (size: 0x4)
    float OrientToUpVectorInterpSpeed;                                                // 0x08A4 (size: 0x4)
    FVector AdjustedGroundNormal;                                                     // 0x08A8 (size: 0xC)
    FBP_Base_Playable_COnDamageDispatcher OnDamageDispatcher;                         // 0x08B8 (size: 0x10)
    TMap<TEnumAsByte<EPhysicalSurface>, FFootstepEffect> SurfaceTypeEffects;          // 0x08C8 (size: 0x50)
    bool ForceFeedbackEnabled;                                                        // 0x0918 (size: 0x1)
    FActiveGameplayEffectHandle DebugGodModeEffect;                                   // 0x091C (size: 0x8)
    TArray<class AActor*> SparxLootInRadius;                                          // 0x0928 (size: 0x10)
    bool SparxLootFetching;                                                           // 0x0938 (size: 0x1)
    class AActor* SparxLootFetchingCurrent;                                           // 0x0940 (size: 0x8)
    int32 SparxLootCurIndex;                                                          // 0x0948 (size: 0x4)
    class ABP_ButterflyHealth_C* OldButterfly;                                        // 0x0950 (size: 0x8)
    FFollowCameraSettings ActiveCamSettings;                                          // 0x0958 (size: 0x130)
    FFollowCameraSettings PassiveCamSettings;                                         // 0x0A88 (size: 0x130)
    bool SparxGemFinderOn;                                                            // 0x0BB8 (size: 0x1)
    bool SparxGemFinderDelay;                                                         // 0x0BB9 (size: 0x1)
    bool SparxGemFinderMinTime;                                                       // 0x0BBA (size: 0x1)
    TMap<class UForceFeedbackEffect*, class UForceFeedbackEffect*> ForceFeedbackMapXB1; // 0x0BC0 (size: 0x50)
    bool SparxDestroysChests;                                                         // 0x0C10 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> PreviousGroundType;                                 // 0x0C11 (size: 0x1)
    int32 DrawIndex;                                                                  // 0x0C14 (size: 0x4)
    bool DrawDebugCam;                                                                // 0x0C18 (size: 0x1)
    bool DrawPosition;                                                                // 0x0C19 (size: 0x1)
    bool DrawPull;                                                                    // 0x0C1A (size: 0x1)
    bool HiddenByCamClip;                                                             // 0x0C1B (size: 0x1)
    float CameraClipMinZ;                                                             // 0x0C1C (size: 0x4)
    float CameraClipMinXY;                                                            // 0x0C20 (size: 0x4)
    float CameraClipMaxXY;                                                            // 0x0C24 (size: 0x4)
    float SparxForwardOffset;                                                         // 0x0C28 (size: 0x4)
    float CameraClipFreeLookOffsetXY;                                                 // 0x0C2C (size: 0x4)
    float CameraClipFreeLookOffsetZ;                                                  // 0x0C30 (size: 0x4)
    FVector FootstepDecalSize;                                                        // 0x0C34 (size: 0xC)
    float SparxLootCollectMinHeight;                                                  // 0x0C40 (size: 0x4)
    FGameplayEventData DeathPayload;                                                  // 0x0C48 (size: 0xA8)
    bool DieOnUpdate;                                                                 // 0x0CF0 (size: 0x1)
    TSoftClassPtr<UObject> GemClassSoftRef;                                           // 0x0CF8 (size: 0x28)
    FVector StoredHitNormal;                                                          // 0x0D20 (size: 0xC)

    void IForceAbility:GetCustomProjectile(FPhasmidProjectileStruct& CustomProjectile);
    void IForceAbility:DebugGetSparxInvisibility(bool& IsInvisible);
    void IGetFollowCameraComponent(class UFollowCameraComponent*& FollowCameraComponent);
    void IGetDefaultCamera(class AActor*& Actor);
    void IDoChargeMovementWallHugCheck(FVector DesiredMovementVector, float Tolerance, FVector& CompensatedVector, bool& PushingAgainstGeo);
    void IDoChargeMovementBonkCheck(FVector Direction, float Tolerance, bool SwitchVerticalOffset, bool& ShouldBonk);
    void IGetSuperChargeJumpAssistParams(float& Gravity, float& JumpZVelocity, float& JumpMaxHoldTime, float& GravityStageTwo, float& JumpZVelocityStageTwo, float& JumpMaxHoldTimeStageTwo, float& GravityStageThree, float& JumpZVelocityStageThree, float& JumpMaxHoldTimeStageThree);
    void IGetIsBombing(bool& IsBombing);
    void IGetIsShooting(bool& IsShooting);
    void IGetIsStrafing(bool& IsStrafing);
    void IGetGeoCompensatedMovementVector(FVector DesiredMovementVector, float Tolerance, FVector& CompensatedVector);
    void ICheckCanDive(bool& CanDive);
    void IGetIsSkateboarding(bool& IsSkateboarding);
    void IGetSwimVolumeInfo(FVector& SurfaceOrigin, bool& DivingDisabled);
    void IGetIsSwimming(bool& IsSwimming);
    void IRequestClimbMovement(FVector2D StickInput, bool& CanMove);
    void IGetIsClimbing(bool& IsClimbing);
    void IGetSpitItemActor(bool& IsValid, class ABP_SpitItemPlacement_Base_C*& SpitItemActor);
    void IGetCharacterInitialData(FSpyroCharacterInitialData& InitialData);
    void IGetIsInAbilities(FGameplayTagContainer AbilityTags, bool& IsInAbilities);
    void IGetIsInFlightLevel(bool& IsInFlightLevel);
    void IGetIsSideRolling(bool& IsSideRolling);
    void IGetIsFlying(bool& IsFlying);
    void IGetIsJumping(bool& IsJumping);
    void IGetIsFreeLooking(bool& IsFreeLooking);
    void IGetIsGliding(bool& IsGliding);
    void IGetIsCharging(bool& IsCharging);
    void IGetMovementMode(TEnumAsByte<EMovementMode>& CurrentMovementMode, TEnumAsByte<EMovementMode>& PreviousMovementMode);
    void ResolveGemFinderClasses(TArray<TSoftClassPtr<AActor>>& NewParam, TArray<class TSubclassOf<AActor>>& Resolved Classes1);
    void HandleDeath(const FGameplayEventData Payload);
    void ConditionallyDieOnUpdate();
    void UpdateVisibilityForCameraClip();
    void SetCharacterVisible(bool NewVisibility);
    void DrawDebugCamInfo();
    void CheckShouldDoWorldDamage(class AActor* DamageCauser);
    void LoadActiveCamSettings();
    void GiveButterflyReward(class ABP_ButterflyHealth_C* ButterflyActor, bool& Success);
    void CheckSparxCanFetch(bool& CanFetch);
    void CheckSparxCanReachLoot(class AActor* LootActor, bool& Fetchable, bool& IsTreasureChest);
    bool IsDead();
    bool ShouldCheckPushOffLedge();
    void UpdateMovingTowardsLedge();
    void UpdateAnimInstanceOnLedge();
    void CheckShouldSlideOffFloor();
    void CheckFloorCanDamage();
    bool OnDealDamage(const FGameplayEventData Payload);
    bool OnHealthRestored(const FGameplayEventData Payload);
    void InitializeSettingsAndRefs();
    bool OnDamage(const FGameplayEventData Payload);
    bool OnDeath(const FGameplayEventData Payload);
    void OrientMeshFromUpVector(class USceneComponent* SkeletalMesh, FVector NewUpVector, float DeltaTime, float InterpSpeed);
    FRotator MakeNewActorRotationFromUpVector(FVector NewUpVector);
    void GetAdjustedGroundNormal(float Tolerance, FVector& AdjustedGroundNormal);
    void UserConstructionScript();
    void IForceAbility:Glide(bool IsGliding);
    void IForceAbility:Fly(bool IsFlying);
    void IForceAbility:SuperCharge(bool IsSuperCharging, bool Alternate);
    void IForceAbility:SuperFly(bool IsSuperFlying);
    void IForceAbility:Invincibility(bool IsInvincible);
    void IForceAbility:SuperJump();
    void IForceAbility:SuperFire(bool CanSuperFire);
    void IForceAbility:IceBreath(bool CanIceBreath);
    void IForceAbility:SetFlightParameters(float MaxAltitude, float MaxAltitudeSpeed, float MinAltitude, float MinAltitudeSpeed, class AActor* ReferenceAltitudeActor);
    void IForceAbility:CanSuperFly(bool CanSuperFly);
    void IForceAbility:CanSuperCharge(bool CanSuperCharge, bool Alternate);
    void IForceAbility:SetCustomProjectile(FPhasmidProjectileStruct Projectile);
    void IForceAbility:ClearCustomProjectile();
    void IForceAbility:RageFire(bool CanRageFire);
    void IForceAbility:ChangeSpyroMaterial(TEnumAsByte<ESpyroMaterials::Type> NewSpyroMaterial);
    void IForceAbility:SuperFireUpdateIndicator();
    void IForceAbility:AutoCharge(bool AutoCharge);
    void IForceAbility:IceFire(bool CanIceFire);
    void IForceAbility:TimeOutFireSneeze();
    void IDoJump(bool Pressed);
    void IDoGlide();
    void IDoCharge(bool Pressed);
    void IDoFireAttack();
    void IDoGlideCancel();
    void IDoFreeLook(bool Pressed);
    void IDoFly();
    void IDoSideRoll(bool Pressed, float Direction);
    void INotifyCharacterIsInFlightLevel(bool IsInFlightLevel);
    void IGetIsJumpButtonPressed(bool Pressed);
    void IDoRequestHeadBash();
    void INotifyCarryingItem(bool CarryingItem);
    void INotifySpitItemConsumed(class ABP_SpitItemPlacement_Base_C* SpitItemActor);
    void IClearSpitItemActor();
    void INotifyPlayerInClimbVolume(bool InVolume, FVector VolumeForwardVector);
    void INotifyPlayerInSwimVolume(FVector SurfaceOrigin, bool DivingDisabled);
    void IDoSkateboard(bool EnableTurbo);
    void INotifyForwardVectorMovement(bool ForwardVectorMovement);
    void INotifyFlyStarted();
    void INotifyFlyEnded();
    void IUpdateFlightControls(float YawInput, float PitchInput, float RollInput, bool IsKeyboardMouseAndUsingMouse);
    void IDoStrafe(bool Pressed);
    void IDoShoot(bool Pressed);
    void IDoBomb(bool Pressed);
    void ISetSuperChargeJumpAssistParams(float Gravity, float JumpZVelocity, float JumpMaxHoldTime, float GravityStageTwo, float JumpZVelocityStageTwo, float JumpMaxHoldTimeStageTwo, float GravityStageThree, float JumpZVelocityStageThree, float JumpMaxHoldTimeStageThree);
    void IDoRequestFlyLoop();
    void IDoRequestFlyTwistLoop();
    void IDoNotifyFlyOutOfBounds();
    void IRequestChargeBonk();
    void IDoFireAttackButtonReleased();
    void INotifyClimbingReattach();
    void BndEvt__SparxLootRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SparxLoot_FetchNext(class AActor* LootActor, bool IsTreasureChest);
    void SparxLoot_CheckShouldFetch();
    void SparxLoot_OnFetchTimerEnd();
    void IRequestSparxGemFinder(bool IsFindingGem);
    void CheckShouldUpdateGemFinder();
    void ISnapDefaultCameraBehindPlayer();
    void INotifyPlayerSettingsUpdated();
    void UpdateGlobalSettings();
    void UpdateSettingsSpyro1();
    void UpdateSettingsSpyro2();
    void UpdateSettingsSpyro3();
    void UpdateDebugSettings();
    void IForceAbility:DebugSetGodMode(bool IsGodModeActive);
    void CheckSparxCollectRangePowerup();
    void UpdatePermanentSuperFlame();
    void IRequestForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool Looping, bool IgnoreTimeDilation, FName EffectTag);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void INotifyUnderDesignerControl(bool IsUnderDesignerControl);
    void INotifyPlayerInCutsceneMode(bool InCutsceneMode);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ISetSparxVisibility(bool visible, bool ResetStack);
    void ISetSparxMovementMode(TEnumAsByte<ESparxMovementModes::Type> NewMovementMode);
    void IRequestSparxFetchCollectible(FVector CollectibleLocation);
    void IPopCameraFromStack(class AActor* ExistingViewTarget, float TimeToBlendOut, bool DeleteActorAfterBlend);
    void IPushManagedCameraToStack(class AActor* NewManagedCameraActor, FBP_CameraSettings CameraSettings, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void IPushCameraToStack(class AActor* NewViewTarget, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void IShowCameraDebugInfo(bool ShowDebugInfo);
    void BindToAbilityActionDispatcher(class UGA_Spyro_Base_C* Ability);
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void IRequestSparxChaseButterfly(class ABP_ButterflyHealth_C* Butterfly);
    void ICheckForWorldDamage(class AActor* WorldDamageActor);
    void INotifyFootstep(FName FootSocketName, bool IsRightFoot);
    void IForceAbility:DebugSetSparxInvisibility(bool IsInvisible);
    void ConformCharacterGroundSlope();
    void IForceAbility:FallToDeath();
    void IPopCameraFromStackBlendOverride(class AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool DeleteActorAfterBlend);
    void IUpdateActiveCamera(bool IsActive);
    void PCM_PopViewTarget(class AActor* ViewTarget, float BlendTime);
    void PCM_PushViewTarget(class AActor* ViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing);
    void INotifySparxIsUnderwater(bool IsUnderwater);
    void CheckNightmareDifficulty();
    void HandleGameStateChange(EFalconGameState previous state, EFalconGameState current state);
    void SetAudioGroundType();
    void INotifyRunStop();
    void IForceAbility:SetSpyroVisibility(bool NewVisibility);
    void SetSparxForwardOffset();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Base_Playable(int32 EntryPoint);
    void OnDamageDispatcher__DelegateSignature();
}; // Size: 0xD2C

#endif
