#ifndef UE4SS_SDK_BP_CES1024_KamikazeTribesman_HPP
#define UE4SS_SDK_BP_CES1024_KamikazeTribesman_HPP

class ABP_CES1024_KamikazeTribesman_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeOnward;                  // 0x0A00 (size: 0x8)
    class UChildActorComponent* ChargingTargetPoint;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpecialIdle;                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpecialAlert;                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SpecialAttack;                 // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DropGem;                       // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle2;                         // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* staff;                                                // 0x0A38 (size: 0x8)
    class UStaticMeshComponent* Knife;                                                // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fall;                          // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeOffCliff;                // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeToPlayer;                // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A68 (size: 0x8)
    bool OffLedge;                                                                    // 0x0A70 (size: 0x1)
    class ABP_CES1022_RedDressLady_C* RedDressLady;                                   // 0x0A78 (size: 0x8)
    int32 SlappingOrder;                                                              // 0x0A80 (size: 0x4)
    bool IsRunning;                                                                   // 0x0A84 (size: 0x1)
    int32 RayCounter;                                                                 // 0x0A88 (size: 0x4)
    float CurrentRunSpeed;                                                            // 0x0A8C (size: 0x4)
    float MinFailsafeRunSpeed;                                                        // 0x0A90 (size: 0x4)
    bool ReachedMinRunSpeed;                                                          // 0x0A94 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_DropGem_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Fall_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeToPlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Slap1();
    void Slap2();
    void Slap3();
    void BndEvt__FalconEnemyState_ChargeOffCliff_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void RedDressLady State Change(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeOnward_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeToPlayer_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1024_KamikazeTribesman(int32 EntryPoint);
}; // Size: 0xA95

#endif
