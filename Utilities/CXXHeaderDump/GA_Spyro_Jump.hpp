#ifndef UE4SS_SDK_GA_Spyro_Jump_HPP
#define UE4SS_SDK_GA_Spyro_Jump_HPP

class UGA_Spyro_Jump_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    float DebugGravityIN;                                                             // 0x0648 (size: 0x4)
    float DebugGravityOUT;                                                            // 0x064C (size: 0x4)
    bool GlideRequested;                                                              // 0x0650 (size: 0x1)
    bool WaitForGlideElapsed;                                                         // 0x0651 (size: 0x1)
    FActiveGameplayEffectHandle GlideHoverEffect;                                     // 0x0654 (size: 0x8)
    bool CanHeadBash;                                                                 // 0x065C (size: 0x1)
    bool DidHeadBash;                                                                 // 0x065D (size: 0x1)
    float EventMagnitude;                                                             // 0x0660 (size: 0x4)
    FGameplayTag EventTag;                                                            // 0x0668 (size: 0x8)
    class APhasmidCollisionRegion* HeadBashDamageRegion;                              // 0x0670 (size: 0x8)
    class UParticleSystemComponent* SupeJumpTrailEffect;                              // 0x0678 (size: 0x8)
    FTimerHandle HeadBashFallTimer;                                                   // 0x0680 (size: 0x8)
    float DEBUG_StartJump;                                                            // 0x0688 (size: 0x4)
    float DEBUG_StartJumpPosition;                                                    // 0x068C (size: 0x4)

    void DEBUG_Apex();
    void ShouldHeadBashIntoWater(bool& HeadBashIntoWater);
    void DoHoverGroundEffects();
    void SetupJumpEffects();
    void OnFinish_CC1CF05442025E13A36EE08665306747();
    void OnCancelled_C52D669346410AA8A00FBAB5D2DA020F();
    void OnInterrupted_C52D669346410AA8A00FBAB5D2DA020F();
    void OnBlendOut_C52D669346410AA8A00FBAB5D2DA020F();
    void OnCompleted_C52D669346410AA8A00FBAB5D2DA020F();
    void OnFinish_C674C04742C7558F705B3197463FE309();
    void Fail_0494B7934D55AD488D57099995E00693();
    void Success_0494B7934D55AD488D57099995E00693();
    void Fail_D127ED954AFAD400318CCBB212EE649F();
    void Success_D127ED954AFAD400318CCBB212EE649F();
    void OnCancelled_E85E47B34FCEDD14C2E4E9820B2154DB();
    void OnInterrupted_E85E47B34FCEDD14C2E4E9820B2154DB();
    void OnBlendOut_E85E47B34FCEDD14C2E4E9820B2154DB();
    void OnCompleted_E85E47B34FCEDD14C2E4E9820B2154DB();
    void OnFinish_D30D964D4D4B6C8C32A817818661C0DC();
    void OnCancelled_34ED7576470AFECBAF19EE85EF661FF4();
    void OnInterrupted_34ED7576470AFECBAF19EE85EF661FF4();
    void OnBlendOut_34ED7576470AFECBAF19EE85EF661FF4();
    void OnCompleted_34ED7576470AFECBAF19EE85EF661FF4();
    void OnCancelled_16644DDC4C804FFD6E94D8B317F101FF();
    void OnInterrupted_16644DDC4C804FFD6E94D8B317F101FF();
    void OnBlendOut_16644DDC4C804FFD6E94D8B317F101FF();
    void OnCompleted_16644DDC4C804FFD6E94D8B317F101FF();
    void OnFinish_C19DCA874458BCB9A3F9E5A7FA3A8D3E();
    void OnCancelled_9E7BD7624439113C57D430A95EB9C2E2();
    void OnInterrupted_9E7BD7624439113C57D430A95EB9C2E2();
    void OnBlendOut_9E7BD7624439113C57D430A95EB9C2E2();
    void OnCompleted_9E7BD7624439113C57D430A95EB9C2E2();
    void OnCancelled_8CDDB5CE4A0F15CF6C4CEBA6A6724A34();
    void OnInterrupted_8CDDB5CE4A0F15CF6C4CEBA6A6724A34();
    void OnBlendOut_8CDDB5CE4A0F15CF6C4CEBA6A6724A34();
    void OnCompleted_8CDDB5CE4A0F15CF6C4CEBA6A6724A34();
    void OnGlideRequested();
    void StartWaitForGlide(float WaitDuration);
    void OnHoverFromGlide(float GlideDuration);
    void OnJumpFromCharge();
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void OnChargeStartFromJump();
    void OnChargeEndFromJump();
    void OnSuperJump();
    void OnHeadBashStart();
    void StartHeadBashTimer();
    void OnHeadBashLanded();
    void PostEndAbility(bool bWasCancelled);
    void OnClimbJump();
    void OnJumpStop();
    void OnHeadBashFallStart();
    void OnLanded();
    void OnReachedApex();
    void OnWalkOffLedge();
    void OnHeadBashTimeOut();
    void OnHeadBashBonk();
    void OnDamageWhileHeadBashing(class AActor* Actor, const FGameplayEventData Payload);
    void OnJump();
    void CleanUpSuperJumpEffects();
    void ExecuteUbergraph_GA_Spyro_Jump(int32 EntryPoint);
}; // Size: 0x690

#endif
