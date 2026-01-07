#ifndef UE4SS_SDK_BP_Bomb_HPP
#define UE4SS_SDK_BP_Bomb_HPP

class ABP_Bomb_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* State_Inactive;                                       // 0x0450 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0458 (size: 0x8)
    class UParticleSystemComponent* Wick;                                             // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0468 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Light;               // 0x0470 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Boom;                // 0x0478 (size: 0x8)
    class UFalconLevelActorStateComponent* FalconLevelActorState_Launch;              // 0x0480 (size: 0x8)
    bool Rolling;                                                                     // 0x0488 (size: 0x1)
    TArray<class ATargetPoint*> BarrelTargetPoints;                                   // 0x0490 (size: 0x10)
    float LaunchVelocity;                                                             // 0x04A0 (size: 0x4)
    float LaunchRotation_Min;                                                         // 0x04A4 (size: 0x4)
    float LaunchRotation_Max;                                                         // 0x04A8 (size: 0x4)
    bool Launched;                                                                    // 0x04AC (size: 0x1)
    bool CheckCollision;                                                              // 0x04AD (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> LaunchHomingTypes;                          // 0x04B0 (size: 0x10)
    class AActor* LaunchTarget;                                                       // 0x04C0 (size: 0x8)
    TArray<class AActor*> IgnoreOnLaunch;                                             // 0x04C8 (size: 0x10)
    int32 BarrelTargetIndex;                                                          // 0x04D8 (size: 0x4)
    bool Moving;                                                                      // 0x04DC (size: 0x1)
    bool ExplodeOnPathEnd;                                                            // 0x04DD (size: 0x1)
    float CustomLaunchArc;                                                            // 0x04E0 (size: 0x4)
    bool InstantExplode;                                                              // 0x04E4 (size: 0x1)
    bool Lit;                                                                         // 0x04E5 (size: 0x1)

    void CheckWorldDamage(const FHitResult& Hit, bool& Explode?);
    void UserConstructionScript();
    void BndEvt__FalconLevelActorState_Boom_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconLevelActorState_Launch_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconLevelActorState_Light_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SceneRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconLevelActorState_Boom_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_Bomb(int32 EntryPoint);
}; // Size: 0x4E6

#endif
