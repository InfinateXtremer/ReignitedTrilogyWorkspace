#ifndef UE4SS_SDK_BP_CES1011_ThiefBlue_HPP
#define UE4SS_SDK_BP_CES1011_ThiefBlue_HPP

class ABP_CES1011_ThiefBlue_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* TauntDestinationState;                          // 0x09F8 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FleeOriginState;                                // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* AlertState;                                     // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* TauntState;                                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FleeDestinationState;                           // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* IdleDestinationState;                           // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* EggProp;                                              // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FleeState;                                      // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A48 (size: 0x8)
    class UParticleSystemComponent* OrbVFX;                                           // 0x0A50 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FleeDestinationState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeDestinationState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FleeOriginState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeOriginState_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1011_ThiefBlue(int32 EntryPoint);
}; // Size: 0xA58

#endif
