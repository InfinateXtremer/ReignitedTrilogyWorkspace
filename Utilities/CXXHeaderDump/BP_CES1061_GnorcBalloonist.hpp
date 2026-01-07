#ifndef UE4SS_SDK_BP_CES1061_GnorcBalloonist_HPP
#define UE4SS_SDK_BP_CES1061_GnorcBalloonist_HPP

class ABP_CES1061_GnorcBalloonist_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* Balloon;                                              // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* Shield;                                               // 0x0A00 (size: 0x8)
    class UBoxComponent* AttackRangeTrigger;                                          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A20 (size: 0x8)
    class ABP_CES1061_GnorcBalloonist_Mover_C* Mover;                                 // 0x0A28 (size: 0x8)
    bool CanAttack;                                                                   // 0x0A30 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void MoverStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackRangeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnDestroy(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1061_GnorcBalloonist(int32 EntryPoint);
}; // Size: 0xA31

#endif
