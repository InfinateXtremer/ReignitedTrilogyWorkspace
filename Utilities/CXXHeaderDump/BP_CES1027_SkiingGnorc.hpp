#ifndef UE4SS_SDK_BP_CES1027_SkiingGnorc_HPP
#define UE4SS_SDK_BP_CES1027_SkiingGnorc_HPP

class ABP_CES1027_SkiingGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UDeathCollisionManager_C* DeathCollisionManager;                            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdle;                  // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* SnowBallIdleParticle;                             // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* SnowballProp;                                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Flee;                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A38 (size: 0x8)
    float SnowballShowHideProj_Scale_FB9DBF3A44A495EF42A52E8CEE3B20B6;                // 0x0A40 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SnowballShowHideProj__Direction_FB9DBF3A44A495EF42A52E8CEE3B20B6; // 0x0A44 (size: 0x1)
    class UTimelineComponent* SnowballShowHideProj;                                   // 0x0A48 (size: 0x8)
    bool ThrewSnowball;                                                               // 0x0A50 (size: 0x1)
    class AActor* achievement;                                                        // 0x0A58 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void SnowballShowHideProj__FinishedFunc();
    void SnowballShowHideProj__UpdateFunc();
    void SnowballShowHideProj__Show Snowball__EventFunc();
    void SnowballShowHideProj__Hide Snowball__EventFunc();
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
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1027_SkiingGnorc(int32 EntryPoint);
}; // Size: 0xA60

#endif
