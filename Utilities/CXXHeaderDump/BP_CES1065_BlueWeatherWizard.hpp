#ifndef UE4SS_SDK_BP_CES1065_BlueWeatherWizard_HPP
#define UE4SS_SDK_BP_CES1065_BlueWeatherWizard_HPP

class ABP_CES1065_BlueWeatherWizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Reanimation;                   // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* PS_Cast;                                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeR;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeC;                         // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeL;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FleeSelector;                  // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A48 (size: 0x8)
    class APhasmidTaggedTargetPoint* TargetPointL;                                    // 0x0A50 (size: 0x8)
    class APhasmidTaggedTargetPoint* TargetPointC;                                    // 0x0A58 (size: 0x8)
    class APhasmidTaggedTargetPoint* TargetPointR;                                    // 0x0A60 (size: 0x8)
    int32 NumWaypoints;                                                               // 0x0A68 (size: 0x4)
    TArray<FBlueWeatherWizardReanimationData> SoldiersToReanimate;                    // 0x0A70 (size: 0x10)
    int32 SpecialCase;                                                                // 0x0A80 (size: 0x4)
    class ATriggerBox* W4Trigger1;                                                    // 0x0A88 (size: 0x8)
    class ATriggerBox* W4Trigger2;                                                    // 0x0A90 (size: 0x8)
    class ATriggerBox* W4Trigger3;                                                    // 0x0A98 (size: 0x8)
    int32 W4Counter;                                                                  // 0x0AA0 (size: 0x4)
    int32 W4AnimPlays;                                                                // 0x0AA4 (size: 0x4)
    TArray<class APhasmidProjectileActor*> SpawnedSplineProj;                         // 0x0AA8 (size: 0x10)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void OnNotifyEnd_B14219F64B5E5131777F87A5CA141B06(FName NotifyName);
    void OnNotifyBegin_B14219F64B5E5131777F87A5CA141B06(FName NotifyName);
    void OnInterrupted_B14219F64B5E5131777F87A5CA141B06(FName NotifyName);
    void OnBlendOut_B14219F64B5E5131777F87A5CA141B06(FName NotifyName);
    void OnCompleted_B14219F64B5E5131777F87A5CA141B06(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__FalconEnemyState_FleeSelector_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_W1Reanimation_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_W1Reanimation_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void FireProj(int32 Index);
    void BndEvt__W4Trigger1_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__W4Trigger2_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__W4Trigger3_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void ResetSecretSetup();
    void TriggerSpellOnSpawn();
    void PlayerReady();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CES1065_BlueWeatherWizard(int32 EntryPoint);
}; // Size: 0xAB8

#endif
