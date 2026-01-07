#ifndef UE4SS_SDK_BP_CES1157_ThiefPurple_HPP
#define UE4SS_SDK_BP_CES1157_ThiefPurple_HPP

class ABP_CES1157_ThiefPurple_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* KeyProp;                                              // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* Alert;                                          // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* Taunt;                                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnToOriginState;                            // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FleeState;                                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A30 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1157_ThiefPurple(int32 EntryPoint);
}; // Size: 0xA38

#endif
