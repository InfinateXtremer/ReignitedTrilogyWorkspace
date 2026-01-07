#ifndef UE4SS_SDK_BP_CES1040_GreenWizard_HPP
#define UE4SS_SDK_BP_CES1040_GreenWizard_HPP

class ABP_CES1040_GreenWizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_Cast;                                          // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* Wait;                                           // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* RepeatAttacks;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnToOrigin;                                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* Idle2;                                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* Retreat;                                        // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FirstAttack;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A38 (size: 0x8)
    class ABP_CES1040_GreenWizard_C* OtherGreenWizard;                                // 0x0A40 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Retreat_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Retreat_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ReturnToOrigin_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Wait_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FirstAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__RepeatAttacks_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES1040_GreenWizard(int32 EntryPoint);
}; // Size: 0xA48

#endif
