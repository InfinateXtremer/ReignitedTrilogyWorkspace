#ifndef UE4SS_SDK_BP_Barrel_Base_HPP
#define UE4SS_SDK_BP_Barrel_Base_HPP

class ABP_Barrel_Base_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_ChainReact;          // 0x0450 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0458 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0460 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0468 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0470 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Boom;                // 0x0478 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Launch;              // 0x0480 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0488 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Rolling;             // 0x0490 (size: 0x8)
    bool Rolling;                                                                     // 0x0498 (size: 0x1)
    TArray<class ATargetPoint*> BarrelTargetPoints;                                   // 0x04A0 (size: 0x10)
    float LaunchVelocity;                                                             // 0x04B0 (size: 0x4)
    float LaunchRotation_Min;                                                         // 0x04B4 (size: 0x4)
    float LaunchRotation_Max;                                                         // 0x04B8 (size: 0x4)
    bool Launched;                                                                    // 0x04BC (size: 0x1)
    bool CheckCollision;                                                              // 0x04BD (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> LaunchHomingTypes;                          // 0x04C0 (size: 0x10)
    class AActor* LaunchTarget;                                                       // 0x04D0 (size: 0x8)
    TArray<class AActor*> IgnoreOnLaunch;                                             // 0x04D8 (size: 0x10)
    int32 BarrelTargetIndex;                                                          // 0x04E8 (size: 0x4)
    bool Moving;                                                                      // 0x04EC (size: 0x1)
    bool ExplodeOnPathEnd;                                                            // 0x04ED (size: 0x1)
    float CustomLaunchArc;                                                            // 0x04F0 (size: 0x4)
    bool InstantExplode;                                                              // 0x04F4 (size: 0x1)
    class UPrimitiveComponent* LastCollidingComponent;                                // 0x04F8 (size: 0x8)
    FVector CollisionNormalImpulse;                                                   // 0x0500 (size: 0xC)
    class UDestructibleMesh* DestructibleMesh;                                        // 0x0510 (size: 0x8)
    bool FoundWater;                                                                  // 0x0518 (size: 0x1)
    bool Debug;                                                                       // 0x0519 (size: 0x1)
    bool HitExplodable;                                                               // 0x051A (size: 0x1)
    int32 MidRollDropIndex;                                                           // 0x051C (size: 0x4)
    bool NoSpecialBarrelLaunch;                                                       // 0x0520 (size: 0x1)
    float TargetingRadius;                                                            // 0x0524 (size: 0x4)
    float TargetingDistance;                                                          // 0x0528 (size: 0x4)
    class APhasmidCollisionRegion* RollingDamageRegion;                               // 0x0530 (size: 0x8)
    bool SmallBoom;                                                                   // 0x0538 (size: 0x1)
    class UParticleSystem* VFX_SmallBoom;                                             // 0x0540 (size: 0x8)
    class UParticleSystem* VFX_BigBoom;                                               // 0x0548 (size: 0x8)
    FTimerHandle ReleaseTimer;                                                        // 0x0550 (size: 0x8)
    FTimerHandle CheckCollisionTimer;                                                 // 0x0558 (size: 0x8)
    bool isSpawned;                                                                   // 0x0560 (size: 0x1)
    class AActor* PoolOwner;                                                          // 0x0568 (size: 0x8)
    bool NeedsReconstruction;                                                         // 0x0570 (size: 0x1)
    float CollisionCheckDelay;                                                        // 0x0574 (size: 0x4)
    float RollSpeed;                                                                  // 0x0578 (size: 0x4)
    FRotator RollRotation;                                                            // 0x057C (size: 0xC)
    bool RollFlatten;                                                                 // 0x0588 (size: 0x1)
    bool BonkOnCharge;                                                                // 0x0589 (size: 0x1)
    float TargetPointAcceptanceRadius;                                                // 0x058C (size: 0x4)
    class UAkAudioEvent* SFX_Boom;                                                    // 0x0590 (size: 0x8)

    bool DestroyWithOwner();
    class AActor* GetPoolOwner();
    bool OnDealDamage(const FGameplayEventData Payload);
    void ResetPhysics();
    void CheckHit(FVector CollisionNormalImpulse);
    void CheckCollisionAfterDelay(float Time);
    void OnRelease();
    void ReleaseAfterDelay(float Time);
    void OnSpawnFromPool();
    void CheckWorldDamage(const FHitResult& Hit, bool& Explode?, bool& Water);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void Roll();
    void BndEvt__FalconLevelActorState_Launch_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__FalconLevelActorState_Boom_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Collisionless Drop();
    void EndRolling();
    void ReceiveStartSpawnFromPool();
    void ReceiveOnReleaseToPool();
    void Release();
    void ReadyToRelease();
    void NotReadyToRelease();
    void CheckCollisionEvent();
    void Cull(bool bNewEnabled);
    void SetPoolOwner(class AActor* Owner);
    void ReceiveFinishSpawnAndEnable();
    void ReceiveBeginPlay();
    void TempCollisionEnable();
    void ExecuteUbergraph_BP_Barrel_Base(int32 EntryPoint);
}; // Size: 0x598

#endif
