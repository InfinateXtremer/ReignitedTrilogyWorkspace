#ifndef UE4SS_SDK_BP_CES1055_MaleFool_HPP
#define UE4SS_SDK_BP_CES1055_MaleFool_HPP

class ABP_CES1055_MaleFool_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DropGem;                       // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToSmall;              // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToBig;                // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdleSmall;             // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOutSmall;                 // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertSmall;                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertInSmall;                  // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdleBig;               // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOutBig;                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertBig;                      // 0x0A40 (size: 0x8)
    class UCapsuleComponent* BigCapsule;                                              // 0x0A48 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CannonIdle;                    // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToBig;                         // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToSmall;                       // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathSmall;                    // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackSmall;                   // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleSmall;                     // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveSmall;                     // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathBig;                      // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackBig;                     // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleBig;                       // 0x0AA0 (size: 0x8)
    float BigAttackTracking_TurnRate_D6F2ED2D4453646A1C3D24999ABB5C22;                // 0x0AA8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BigAttackTracking__Direction_D6F2ED2D4453646A1C3D24999ABB5C22; // 0x0AAC (size: 0x1)
    class UTimelineComponent* BigAttackTracking;                                      // 0x0AB0 (size: 0x8)
    float GrowCapsule_Scale_24AB7B124148AA42CD619FB272BED98D;                         // 0x0AB8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowCapsule__Direction_24AB7B124148AA42CD619FB272BED98D; // 0x0ABC (size: 0x1)
    class UTimelineComponent* GrowCapsule;                                            // 0x0AC0 (size: 0x8)
    bool IsSmall;                                                                     // 0x0AC8 (size: 0x1)
    class AActor* DreamWeaverCannon;                                                  // 0x0AD0 (size: 0x8)
    int32 StateEnum;                                                                  // 0x0AD8 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void GrowCapsule__FinishedFunc();
    void GrowCapsule__UpdateFunc();
    void BigAttackTracking__FinishedFunc();
    void BigAttackTracking__UpdateFunc();
    void BndEvt__FalconEnemyState_DeathSmall_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToBig_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToSmall_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleBig_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertBig_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackBig_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_DeathBig_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_IdleSmall_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MoveSmall_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertInSmall_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertOutSmall_K2Node_ComponentBoundEvent_7_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackSmall_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_9_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AlertOutBig_K2Node_ComponentBoundEvent_11_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_DropGem_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_AttackBig_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1055_MaleFool(int32 EntryPoint);
}; // Size: 0xADC

#endif
