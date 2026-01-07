#ifndef UE4SS_SDK_BP_CES1013_GnorcSentry_HPP
#define UE4SS_SDK_BP_CES1013_GnorcSentry_HPP

class ABP_CES1013_GnorcSentry_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFlopCollisionManager_C* FlopCollisionManager;                              // 0x09F8 (size: 0x8)
    class UCapsuleComponent* ShieldCollision;                                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* TauntB;                                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* TauntA;                                         // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* Prop_Shield;                                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* CausedDamageB;                                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* AttackB;                                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* ChargeB;                                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolB;                                        // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* Recharge;                                       // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* CausedDamageA;                                  // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* AttackA;                                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* ChargeA;                                        // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* PatrolA;                                        // 0x0A68 (size: 0x8)
    class ATriggerBox* TriggerBox_CorridorBoundary;                                   // 0x0A70 (size: 0x8)
    bool isSpyroInTriggerBox?;                                                        // 0x0A78 (size: 0x1)
    class AActor* PatrolA_Direction;                                                  // 0x0A80 (size: 0x8)
    class AActor* PatrolB_Direction;                                                  // 0x0A88 (size: 0x8)
    bool printStateName?;                                                             // 0x0A90 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__TriggerBox_CorridorBoundary_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__TriggerBox_CorridorBoundary_K2Node_ComponentBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__PatrolA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__PatrolB_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackB_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackA_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__AttackB_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChargeB_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChargeA_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChargeB_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CES1013_GnorcSentry(int32 EntryPoint);
}; // Size: 0xA91

#endif
