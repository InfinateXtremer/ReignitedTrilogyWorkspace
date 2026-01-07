#ifndef UE4SS_SDK_BP_CBS1004_Jacques_HPP
#define UE4SS_SDK_BP_CBS1004_Jacques_HPP

class ABP_CBS1004_Jacques_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS130_Jacques_in_the_box_attach;           // 0x09F8 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpawnGemDeath;                 // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_VulnerableAttack;              // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_VulnerableIdle;                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HitReact;                      // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* GiftBox;                                              // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move7;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move6;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move5;                         // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move4;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move3;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move2;                         // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move1;                         // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A78 (size: 0x8)
    float SecondHit_Alpha_AEC3DC1548B7ADD48CDFE4BC902318FB;                           // 0x0A80 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SecondHit__Direction_AEC3DC1548B7ADD48CDFE4BC902318FB; // 0x0A84 (size: 0x1)
    class UTimelineComponent* SecondHit;                                              // 0x0A88 (size: 0x8)
    float FirstHit_Alpha_35F9AE3C4D8E4F70DB6E40B6AAD65AAD;                            // 0x0A90 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FirstHit__Direction_35F9AE3C4D8E4F70DB6E40B6AAD65AAD; // 0x0A94 (size: 0x1)
    class UTimelineComponent* FirstHit;                                               // 0x0A98 (size: 0x8)
    float IslandTimer_AlphaFloat_F936B0AC4FB2E4DDEA660B92FA91B045;                    // 0x0AA0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> IslandTimer__Direction_F936B0AC4FB2E4DDEA660B92FA91B045; // 0x0AA4 (size: 0x1)
    class UTimelineComponent* IslandTimer;                                            // 0x0AA8 (size: 0x8)
    float PlatformTimer_AlphaFloat_730B2A9C4730193E181E8E8BF650E088;                  // 0x0AB0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PlatformTimer__Direction_730B2A9C4730193E181E8E8BF650E088; // 0x0AB4 (size: 0x1)
    class UTimelineComponent* PlatformTimer;                                          // 0x0AB8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> DeathSpring__Direction_15F014E1462804BDE6996185C5EA4D43; // 0x0AC0 (size: 0x1)
    class UTimelineComponent* DeathSpring;                                            // 0x0AC8 (size: 0x8)
    float GrowThrowHide___Gift_Scale_A603E80B49D433DB90C312B851AFB4F4;                // 0x0AD0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowThrowHide___Gift__Direction_A603E80B49D433DB90C312B851AFB4F4; // 0x0AD4 (size: 0x1)
    class UTimelineComponent* GrowThrowHide - Gift;                                   // 0x0AD8 (size: 0x8)
    bool GroundDustOn;                                                                // 0x0AE0 (size: 0x1)
    class A130_ClockPlatform_C* Platform;                                             // 0x0AE8 (size: 0x8)
    FVector PlatformStartPosition;                                                    // 0x0AF0 (size: 0xC)
    class AStaticMeshActor* Island;                                                   // 0x0B00 (size: 0x8)
    class AEmitter* IslandVFX;                                                        // 0x0B08 (size: 0x8)
    FVector IslandStartPosition;                                                      // 0x0B10 (size: 0xC)
    FVector IslandVFXStartLocation;                                                   // 0x0B1C (size: 0xC)
    class ATargetPoint* LookPoint1;                                                   // 0x0B28 (size: 0x8)
    class ATargetPoint* LookPoint2;                                                   // 0x0B30 (size: 0x8)
    FRotator StartingRot;                                                             // 0x0B38 (size: 0xC)
    FGameplayTagContainer ChargingSpyroTag;                                           // 0x0B48 (size: 0x20)
    bool DidSpyroTakeDamage?;                                                         // 0x0B68 (size: 0x1)
    class ABP_CBS1004_Jacaques_BossWatcher_C* BossWatcher;                            // 0x0B70 (size: 0x8)

    void ToggleGroundDust(bool TurnOn);
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void GrowThrowHide - Gift__FinishedFunc();
    void GrowThrowHide - Gift__UpdateFunc();
    void GrowThrowHide - Gift__Hide Gift__EventFunc();
    void GrowThrowHide - Gift__UnHide Gift__EventFunc();
    void DeathSpring__FinishedFunc();
    void DeathSpring__UpdateFunc();
    void DeathSpring__Hide Mesh Spring__EventFunc();
    void FirstHit__FinishedFunc();
    void FirstHit__UpdateFunc();
    void FirstHit__EndRotation__EventFunc();
    void FirstHit__StartRotation__EventFunc();
    void PlatformTimer__FinishedFunc();
    void PlatformTimer__UpdateFunc();
    void IslandTimer__FinishedFunc();
    void IslandTimer__UpdateFunc();
    void SecondHit__FinishedFunc();
    void SecondHit__UpdateFunc();
    void SecondHit__EndRotation__EventFunc();
    void SecondHit__StartRotation__EventFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Move3_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move4_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move5_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move6_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move7_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move1_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move2_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move3_K2Node_ComponentBoundEvent_9_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move5_K2Node_ComponentBoundEvent_10_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move7_K2Node_ComponentBoundEvent_11_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Move1_K2Node_ComponentBoundEvent_12_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move2_K2Node_ComponentBoundEvent_13_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move4_K2Node_ComponentBoundEvent_14_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Move6_K2Node_ComponentBoundEvent_15_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_VulnerableAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_VulnerableAttack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_HitReact_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_VulnerableIdle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnDealDamageDelegate_Event_0(class AActor* Actor, const FGameplayEventData Payload);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_CBS1004_Jacques(int32 EntryPoint);
}; // Size: 0xB78

#endif
