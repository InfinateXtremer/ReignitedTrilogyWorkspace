#ifndef UE4SS_SDK_BP_CES1049_BananaBoy_HPP
#define UE4SS_SDK_BP_CES1049_BananaBoy_HPP

class ABP_CES1049_BananaBoy_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* AwakenState;                                    // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* SleepState;                                     // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* SuccessState;                                   // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* SM_CES1049_BananaBoy_Banana;                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A38 (size: 0x8)
    float AttackVOffsetLimit;                                                         // 0x0A40 (size: 0x4)
    bool BananaVisible;                                                               // 0x0A44 (size: 0x1)

    void UserConstructionScript();
    void BananaHide();
    void BananaShow();
    void BndEvt__AttackState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1049_BananaBoy(int32 EntryPoint);
}; // Size: 0xA45

#endif
