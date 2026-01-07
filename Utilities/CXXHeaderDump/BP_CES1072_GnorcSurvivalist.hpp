#ifndef UE4SS_SDK_BP_CES1072_GnorcSurvivalist_HPP
#define UE4SS_SDK_BP_CES1072_GnorcSurvivalist_HPP

class ABP_CES1072_GnorcSurvivalist_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Melee;                         // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RunStop;                       // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* Bomb;                                                 // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Move;                          // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreIdle;                       // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleRanged2;                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleRanged1;                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0A50 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void HideThrowable();
    void ShowThrowable();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1072_GnorcSurvivalist(int32 EntryPoint);
}; // Size: 0xA58

#endif
