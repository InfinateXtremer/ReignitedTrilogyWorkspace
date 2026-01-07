#ifndef UE4SS_SDK_GA_Spyro_Charge_HPP
#define UE4SS_SDK_GA_Spyro_Charge_HPP

class UGA_Spyro_Charge_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    class APhasmidCollisionRegion* DamageRegion;                                      // 0x0648 (size: 0x8)
    class UParticleSystemComponent* ChargeTrail_Ground;                               // 0x0650 (size: 0x8)
    FActiveGameplayEffectHandle DisableInputEffect;                                   // 0x0658 (size: 0x8)
    bool ChargingIntoGeo;                                                             // 0x0660 (size: 0x1)
    bool CleanUpDidRun;                                                               // 0x0661 (size: 0x1)
    bool MinTimeElasped;                                                              // 0x0662 (size: 0x1)
    bool AbilityEndRequested;                                                         // 0x0663 (size: 0x1)
    int32 CamSettingsId;                                                              // 0x0664 (size: 0x4)
    class UParticleSystemComponent* CameraWindLines;                                  // 0x0668 (size: 0x8)
    class UAbilityTask_WaitDelay* TimerProxySuperChargeStageTimer;                    // 0x0670 (size: 0x8)
    class UParticleSystemComponent* ChargeTrail_SuperCharge;                          // 0x0678 (size: 0x8)
    class UAbilityTask_WaitDelay* TimerProxySuperChargeWaitToEnd;                     // 0x0680 (size: 0x8)
    class UAbilityTask_WaitDelay* TimerProxyChargeMinTimeElapsed;                     // 0x0688 (size: 0x8)
    class UAbilityTask_WaitDelay* TimerProxyLandGracePeriod;                          // 0x0690 (size: 0x8)
    int32 SuperChargeLevel;                                                           // 0x0698 (size: 0x4)
    class APhasmidCollisionRegion* BonkingRegion;                                     // 0x06A0 (size: 0x8)
    class UParticleSystemComponent* ChargeTrail_Underwater;                           // 0x06A8 (size: 0x8)
    class AActor* NearestTarget;                                                      // 0x06B0 (size: 0x8)
    float NearestTargetSquaredDistance;                                               // 0x06B8 (size: 0x4)
    float MAX_TARGET_DIST;                                                            // 0x06BC (size: 0x4)
    FRotator FovCheckRotation;                                                        // 0x06C0 (size: 0xC)
    int32 CamSettingsDefaultUnderwater;                                               // 0x06CC (size: 0x4)
    class UAbilityTask_WaitGameplayTagAdded* AsyncTaskProxy_UWAdded;                  // 0x06D0 (size: 0x8)
    class UAbilityTask_WaitGameplayTagAdded* AsyncTaskProxy_JumpAdded;                // 0x06D8 (size: 0x8)

    void DoChargeAimAssist();
    void Added_457F9A6B4FF2076D5F7CE6A7BFEC5F66();
    void Removed_D851B53C42004B36DFA906941FAE5A01();
    void Added_F74C146C414FFBB49B2AA68DAFA363EF();
    void OnFinish_DD05B337443C977CC190DC8B404757E3();
    void OnFinish_0FA449F04F2BD3C527E96AABBC5A8A19();
    void OnFinish_8BE31C66440BD53F08F31DB67354A93D();
    void OnCancelled_B653FBFB410DADE3C2F062A1E30CC455();
    void OnInterrupted_B653FBFB410DADE3C2F062A1E30CC455();
    void OnBlendOut_B653FBFB410DADE3C2F062A1E30CC455();
    void OnCompleted_B653FBFB410DADE3C2F062A1E30CC455();
    void OnLanded_92F53AE54DDBD0E7D602979D9C1A45CE();
    void OnFinish_92F53AE54DDBD0E7D602979D9C1A45CE();
    void Added_C83EC19E441ECCCAA7FA49B8D360DC91();
    void OnFinish_A2F5BEE7417F7B82C9A5FBB870F7C44C();
    void OnFinish_38770E774DD1ABAFE030B79B230964F2();
    void OnFinish_7B790CE94BBD6A961391D8A064538544();
    void OnFinish_19CD88DD45C4935D87CD85BFA62CD14D();
    void Removed_E9EA971B41A2F12FA378EEB9527C0FC0();
    void Added_F66E13564EF62DE0BB0ACF82A8C8079A();
    void CreateChargeDamageRegion();
    void CreateSuperChargeDamageRegion();
    void OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void MakeCapsuleDamageRegion(bool WillCapsuleDealDamage);
    void SetUpTrails();
    void SetUpTrails_OnSwimming();
    void DoTrails_Swimming();
    void SetUpTrails_OnCharge();
    void DoTrails_Jumping();
    void DoTrails_Charging();
    void CleanUpTrails();
    void DoSuperChargeEffects(int32 stage);
    void StartMusicChange();
    void EndMusicChange();
    void WaitForJumpAdded();
    void OnSuperChargeEnabled();
    void DoSpyro1SuperCharge();
    void DoSpyro2SuperCharge();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void OnChargingIntoGeo();
    void OnCleanup();
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void WaitForMinTimeElapsed();
    void RequestAbilityEnd();
    void EndChargeIntoGeo();
    void PostEndAbility(bool bWasCancelled);
    void HandleFreeLooking();
    void SuperChargeWaitJumpEnd();
    void CleanUpRegions();
    void OnChargeCheckIfBonk(class AActor* OverlappedActor, class AActor* OtherActor);
    void Set Up Camera();
    void ExecuteUbergraph_GA_Spyro_Charge(int32 EntryPoint);
}; // Size: 0x6E0

#endif
