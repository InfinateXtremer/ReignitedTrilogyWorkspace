#ifndef UE4SS_SDK_BP_CES1022_RedDressLady_HPP
#define UE4SS_SDK_BP_CES1022_RedDressLady_HPP

class ABP_CES1022_RedDressLady_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotStir2;            // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotStir1_Part2;      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotStir_Alt;         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotSitr1;            // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotOutAlert;         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotOut;              // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_PotIn;               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CliffTown_Idle;                // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleScratch;                   // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MinionAttack3;                 // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MinionIdle3;                   // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MinionAttack2;                 // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MinionIdle2;                   // 0x0A68 (size: 0x8)
    class UStaticMeshComponent* Spoon;                                                // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryAlert;                 // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MinionAttack1;                 // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MinionIdle1;                   // 0x0AA8 (size: 0x8)
    FBP_CES1022_RedDressLady_CTheSoundOfSlaps TheSoundOfSlaps;                        // 0x0AB0 (size: 0x10)
    FBP_CES1022_RedDressLady_CTheSoundOfSlaps_SecondComing TheSoundOfSlaps_SecondComing; // 0x0AC0 (size: 0x10)
    FBP_CES1022_RedDressLady_CTheSoundOfSlaps_Resurrection TheSoundOfSlaps_Resurrection; // 0x0AD0 (size: 0x10)
    bool Dying;                                                                       // 0x0AE0 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_MinionAttack1_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_CliffTown_PotStir2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_CliffTown_PotStir2_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_CliffTown_PotSitr1_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_CliffTown_PotSitr1_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_MinionAttack2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_MinionAttack3_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1022_RedDressLady(int32 EntryPoint);
    void TheSoundOfSlaps_Resurrection__DelegateSignature();
    void TheSoundOfSlaps_SecondComing__DelegateSignature();
    void TheSoundOfSlaps__DelegateSignature();
}; // Size: 0xAE1

#endif
