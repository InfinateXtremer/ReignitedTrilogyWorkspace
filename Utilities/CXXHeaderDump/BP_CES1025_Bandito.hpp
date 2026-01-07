#ifndef UE4SS_SDK_BP_CES1025_Bandito_HPP
#define UE4SS_SDK_BP_CES1025_Bandito_HPP

class ABP_CES1025_Bandito_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertRecovery;                 // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* Sword;                                                // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveRight;                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveLeft;                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move;                          // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WakeUp;                        // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Asleep;                        // 0x0A58 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Attack_Rotation__Direction_8B351804451CD5DF9AA4629DEAA14196; // 0x0A60 (size: 0x1)
    class UTimelineComponent* Attack Rotation;                                        // 0x0A68 (size: 0x8)
    class ATriggerBox* LeftTrigger;                                                   // 0x0A70 (size: 0x8)
    class ATriggerBox* RightTrigger;                                                  // 0x0A78 (size: 0x8)
    bool HasMoved;                                                                    // 0x0A80 (size: 0x1)
    class ABP_CES1022_RedDressLady_C* RedDressLady;                                   // 0x0A88 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Attack Rotation__FinishedFunc();
    void Attack Rotation__UpdateFunc();
    void Attack Rotation__Rotation On__EventFunc();
    void Attack Rotation__Rotation Off__EventFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__LeftTrigger_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__RightTrigger_K2Node_ComponentBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void TheSlappening();
    void ExecuteUbergraph_BP_CES1025_Bandito(int32 EntryPoint);
}; // Size: 0xA90

#endif
