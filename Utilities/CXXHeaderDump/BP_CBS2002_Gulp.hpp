#ifndef UE4SS_SDK_BP_CBS2002_Gulp_HPP
#define UE4SS_SDK_BP_CBS2002_Gulp_HPP

class ABP_CBS2002_Gulp_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Unstuck;                                  // 0x09F8 (size: 0x8)
    class UCapsuleComponent* HeadCapsule;                                             // 0x0A00 (size: 0x8)
    class UCapsuleComponent* FootCapsule_FR;                                          // 0x0A08 (size: 0x8)
    class UCapsuleComponent* FootCapsule_FL;                                          // 0x0A10 (size: 0x8)
    class UCapsuleComponent* FootCapsule_BL;                                          // 0x0A18 (size: 0x8)
    class UCapsuleComponent* FootCapsule_BR;                                          // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* State_StartWait;                                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* State_RunToGulpable;                            // 0x0A30 (size: 0x8)
    class UFlopCollisionManager_C* FlopCollisionManager;                              // 0x0A38 (size: 0x8)
    class UParticleSystemComponent* SpireRight;                                       // 0x0A40 (size: 0x8)
    class UParticleSystemComponent* SpireLeft;                                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* State_SpitMissileAttack;                        // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnForSlam;                              // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnForMissileAttack;                     // 0x0A60 (size: 0x8)
    class UFalconLevelActorStateComponent* State_DecideAttack;                        // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* State_ReadyToAttack;                            // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* State_BombAttack;                               // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* State_BarrelAttack;                             // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* State_Gulp;                                     // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* State_FindGulpable;                             // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* State_Look;                                     // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* State_Death;                                    // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Return;                                   // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Slam;                                     // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* State_CloseDistance;                            // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* State_TakeHit;                                  // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* State_PostAttack;                               // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* State_MissileAttack;                            // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Idle;                                     // 0x0AD8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> RotateMissile__Direction_67733FED47BF5F8BA95BFE838A0DEE14; // 0x0AE0 (size: 0x1)
    class UTimelineComponent* RotateMissile;                                          // 0x0AE8 (size: 0x8)
    float Timeline_1_SpeedIncrease_87BC3D8343EB2E64DBFF61B37E6DFB5E;                  // 0x0AF0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_87BC3D8343EB2E64DBFF61B37E6DFB5E; // 0x0AF4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0AF8 (size: 0x8)
    float ReturnRate_TurnIncrease_1BD9C446416E9220CB329EA1D80F68D3;                   // 0x0B00 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ReturnRate__Direction_1BD9C446416E9220CB329EA1D80F68D3; // 0x0B04 (size: 0x1)
    class UTimelineComponent* ReturnRate;                                             // 0x0B08 (size: 0x8)
    int32 CurrentStageMissileMax;                                                     // 0x0B10 (size: 0x4)
    int32 MissilesFired;                                                              // 0x0B14 (size: 0x4)
    int32 stage;                                                                      // 0x0B18 (size: 0x4)
    bool UpdateTargetLoc;                                                             // 0x0B1C (size: 0x1)
    class ACBS2002_TargetDummy_C* TargetDummy;                                        // 0x0B20 (size: 0x8)
    float TargetLeading;                                                              // 0x0B28 (size: 0x4)
    class AActor* TargetGulpable;                                                     // 0x0B30 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> GulpableType;                               // 0x0B38 (size: 0x10)
    TArray<class AActor*> Gulpables;                                                  // 0x0B48 (size: 0x10)
    bool Gulping;                                                                     // 0x0B58 (size: 0x1)
    int32 GulpedType;                                                                 // 0x0B5C (size: 0x4)
    int32 BarrelFireProjectileCount;                                                  // 0x0B60 (size: 0x4)
    float BarrelFireProjectileSpread;                                                 // 0x0B64 (size: 0x4)
    FRotator CurrentProjectileRotation;                                               // 0x0B68 (size: 0xC)
    int32 BombFireProjectileCount;                                                    // 0x0B74 (size: 0x4)
    float BombFireProjectileSpread;                                                   // 0x0B78 (size: 0x4)
    class ABP_CBS2002_EggManager_C* EggManager;                                       // 0x0B80 (size: 0x8)
    int32 StageAttackCount;                                                           // 0x0B88 (size: 0x4)
    class ATargetPoint* ArenaCenter;                                                  // 0x0B90 (size: 0x8)
    FPhasmidSoftReference Ripto;                                                      // 0x0B98 (size: 0x28)
    bool DidSpyroTakeDamage;                                                          // 0x0BC0 (size: 0x1)
    class ABP_219_Achievement_C* AchievementWatcher;                                  // 0x0BC8 (size: 0x8)
    class UPhasmidCharacterMovementComponent* PhasmidCharacterMovement;               // 0x0BD0 (size: 0x8)
    float InitialCarTurnRate;                                                         // 0x0BD8 (size: 0x4)
    float CarTurnRotationRatio;                                                       // 0x0BDC (size: 0x4)
    FRotator InitialRotationRate;                                                     // 0x0BE0 (size: 0xC)
    class ABP_LS219_SkillPointWatcher_C* SkillPointWatcher;                           // 0x0BF0 (size: 0x8)
    TArray<class AActor*> KnockedUpGulpables;                                         // 0x0BF8 (size: 0x10)
    float InitialWalkSpeed;                                                           // 0x0C08 (size: 0x4)
    class APhasmidProjectileActor* SpitMissileProj;                                   // 0x0C10 (size: 0x8)
    class APlayerCameraManager* CameraManager;                                        // 0x0C18 (size: 0x8)
    float MaxDistanceFromCenter;                                                      // 0x0C20 (size: 0x4)

    void HasStartedFight(bool& FightStarted);
    void MaintainPerimeter();
    bool PlayerCanBeReached();
    void SlamRumble();
    void InvisibleIfCameraClipping();
    void CheckGulpableValidity(class UObject* Gulpable, int32 Type, float MaxDistance, bool& Valid);
    void FireSpitMissile();
    void FindGulpables(bool IncludeEggs, bool IncludeChickens, TArray<class AActor*>& Gulpables);
    void FireSpreadShots(int32 ProjectileCount, float ProjectileSpread, bool VisibleFire);
    void UserConstructionScript();
    void ReturnRate__FinishedFunc();
    void ReturnRate__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void RotateMissile__FinishedFunc();
    void RotateMissile__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ProjectileFired();
    void BndEvt__State_MissileAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_MissileAttack_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void Stomp();
    void BndEvt__State_FindGulpable_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Gulp();
    void BndEvt__State_ReadyToAttack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_TakeHit_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DecideAttack_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State_Slam_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Slam_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Gulp_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void BndEvt__State_Return_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Return_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_CloseDistance_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_CloseDistance_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void Start TurnRate Increase();
    void Stop TurnRate Increase();
    void BndEvt__State_TurnForMissileAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Gulp_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_RunToGulpable_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_RunToGulpable_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void OpenGulpableCheck();
    void CloseGulpableCheck();
    void GulpThwarted();
    void BndEvt__HeadCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__HeadCapsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__State_StartWait_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CBS2002_Gulp(int32 EntryPoint);
}; // Size: 0xC24

#endif
