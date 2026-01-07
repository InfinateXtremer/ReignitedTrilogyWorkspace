#ifndef UE4SS_SDK_BP_CES1015_Ram_HPP
#define UE4SS_SDK_BP_CES1015_Ram_HPP

class ABP_CES1015_Ram_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCapsuleComponent* HeadCollider;                                            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Recover;                       // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackStop;                    // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Charge;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A30 (size: 0x8)
    float SpeedForFunzies_Speed_3DC769AF45A36E6F7B7B6083D1529596;                     // 0x0A38 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpeedForFunzies__Direction_3DC769AF45A36E6F7B7B6083D1529596; // 0x0A3C (size: 0x1)
    class UTimelineComponent* SpeedForFunzies;                                        // 0x0A40 (size: 0x8)
    float KnockbackRotation_PitchRotation_13F00C444E8FD2D28E498995004DCF9B;           // 0x0A48 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> KnockbackRotation__Direction_13F00C444E8FD2D28E498995004DCF9B; // 0x0A4C (size: 0x1)
    class UTimelineComponent* KnockbackRotation;                                      // 0x0A50 (size: 0x8)
    FRotator LaunchStartRotator;                                                      // 0x0A58 (size: 0xC)
    int32 StateEnum;                                                                  // 0x0A64 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void KnockbackRotation__FinishedFunc();
    void KnockbackRotation__UpdateFunc();
    void SpeedForFunzies__FinishedFunc();
    void SpeedForFunzies__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Recover_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnLaunchToDeath(class UFalconEnemyStateComponent* State Component);
    void BndEvt__FalconEnemyState_Charge_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackStop_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1015_Ram(int32 EntryPoint);
}; // Size: 0xA68

#endif
