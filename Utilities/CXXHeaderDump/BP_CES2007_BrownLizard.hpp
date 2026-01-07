#ifndef UE4SS_SDK_BP_CES2007_BrownLizard_HPP
#define UE4SS_SDK_BP_CES2007_BrownLizard_HPP

class ABP_CES2007_BrownLizard_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UCapsuleComponent* ExtendedHitbox;                                          // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryAlert;                 // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* hammer;                                               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A38 (size: 0x8)
    float AtkZRot_ZRot_E687101348A458675C2F2F93EB81E630;                              // 0x0A40 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AtkZRot__Direction_E687101348A458675C2F2F93EB81E630; // 0x0A44 (size: 0x1)
    class UTimelineComponent* AtkZRot;                                                // 0x0A48 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void AtkZRot__FinishedFunc();
    void AtkZRot__UpdateFunc();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2007_BrownLizard(int32 EntryPoint);
}; // Size: 0xA50

#endif
