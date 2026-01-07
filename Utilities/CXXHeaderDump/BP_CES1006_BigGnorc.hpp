#ifndef UE4SS_SDK_BP_CES1006_BigGnorc_HPP
#define UE4SS_SDK_BP_CES1006_BigGnorc_HPP

class ABP_CES1006_BigGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_In;                                   // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_Out;                                  // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Shield;                                               // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* Club;                                                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* Recharge;                                       // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* CausedDamage;                                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* Attack;                                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_Loop;                                 // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A40 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1006_BigGnorc(int32 EntryPoint);
}; // Size: 0xA48

#endif
