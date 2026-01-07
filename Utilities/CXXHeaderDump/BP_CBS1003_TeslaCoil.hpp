#ifndef UE4SS_SDK_BP_CBS1003_TeslaCoil_HPP
#define UE4SS_SDK_BP_CBS1003_TeslaCoil_HPP

class ABP_CBS1003_TeslaCoil_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* Inactive;                                       // 0x09F8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* DeathMesh;                                            // 0x0A08 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0A10 (size: 0x8)
    class UParticleSystemComponent* Metalhead_Bolt_Launch;                            // 0x0A18 (size: 0x8)
    class UParticleSystemComponent* PS_Pylon_Green;                                   // 0x0A20 (size: 0x8)
    class UParticleSystemComponent* PS_Pylon_Red;                                     // 0x0A28 (size: 0x8)
    class UCapsuleComponent* DamageRegionChargeDetector;                              // 0x0A30 (size: 0x8)
    class UCapsuleComponent* DamageRegion;                                            // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FlickerToShoot;                                 // 0x0A40 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* SpawnDelayState;                                // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* ShootState;                                     // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A68 (size: 0x8)
    bool isRed?;                                                                      // 0x0A70 (size: 0x1)
    TArray<class AActor*> ActorsFoundOnTurningRed;                                    // 0x0A78 (size: 0x10)
    bool canDealDamage?;                                                              // 0x0A88 (size: 0x1)
    class AActor* ProjectileTarget;                                                   // 0x0A90 (size: 0x8)
    class ABP_CBS1003_TeslaCoil_Base_C* SpawnedActorReference;                        // 0x0A98 (size: 0x8)
    bool isPhase1Pylon?;                                                              // 0x0AA0 (size: 0x1)
    class ABP_LS124_SkillPointWatcher_C* SkillPointWatcher;                           // 0x0AA8 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__ShootState_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__CooldownState_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FlickerToShoot_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FlickerToShoot_K2Node_ComponentBoundEvent_7_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__DamageRegion_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DamageRegionChargeDetector_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__ShootState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SpawnDelayState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Inactive_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void ExecuteUbergraph_BP_CBS1003_TeslaCoil(int32 EntryPoint);
}; // Size: 0xAB0

#endif
