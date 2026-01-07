#ifndef UE4SS_SDK_BP_CES2015_Yak_HPP
#define UE4SS_SDK_BP_CES2015_Yak_HPP

class ABP_CES2015_Yak_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeOut;                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleGraze;                     // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Charge;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Reposition;                    // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A30 (size: 0x8)
    float Timeline_1_RotationRate_875CCFD448536F75E88C53940E182881;                   // 0x0A38 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_875CCFD448536F75E88C53940E182881; // 0x0A3C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A40 (size: 0x8)
    bool onGround;                                                                    // 0x0A48 (size: 0x1)
    FVector Origin Location;                                                          // 0x0A4C (size: 0xC)
    float RepositionBounceTurnRate;                                                   // 0x0A58 (size: 0x4)
    float RepositiuonGroundTurnRate;                                                  // 0x0A5C (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Charge_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Charge_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BounceStart();
    void BounceEnd();
    void BndEvt__FalconEnemyState_Reposition_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2015_Yak(int32 EntryPoint);
}; // Size: 0xA60

#endif
