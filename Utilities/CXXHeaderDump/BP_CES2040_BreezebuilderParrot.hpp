#ifndef UE4SS_SDK_BP_CES2040_BreezebuilderParrot_HPP
#define UE4SS_SDK_BP_CES2040_BreezebuilderParrot_HPP

class ABP_CES2040_BreezebuilderParrot_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait;                          // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* barrel;                                               // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HoldBarrel;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ThrowBarrel;                   // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RollBarrel;                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A30 (size: 0x8)
    TArray<class ATargetPoint*> TargetPoints;                                         // 0x0A38 (size: 0x10)
    int32 MidRollDropIndex;                                                           // 0x0A48 (size: 0x4)
    float ThrownBarrelSpeed;                                                          // 0x0A4C (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void CustomNotify02(class AActor* InputActor);
    void BndEvt__FalconEnemyState_HoldBarrel_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void CustomNotify01(class AActor* InputActor);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RollBarrel_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_RollBarrel_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES2040_BreezebuilderParrot(int32 EntryPoint);
}; // Size: 0xA50

#endif
