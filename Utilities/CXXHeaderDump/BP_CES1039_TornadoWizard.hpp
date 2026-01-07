#ifndef UE4SS_SDK_BP_CES1039_TornadoWizard_HPP
#define UE4SS_SDK_BP_CES1039_TornadoWizard_HPP

class ABP_CES1039_TornadoWizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_TornadoWizard_Twister;                         // 0x09F8 (size: 0x8)
    class USplineComponent* ProjectileSpline;                                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FriendlyFire;                                   // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* PostAttack;                                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* Ranged;                                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack;                                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A30 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1039_TornadoWizard(int32 EntryPoint);
}; // Size: 0xA38

#endif
