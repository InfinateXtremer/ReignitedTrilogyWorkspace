#ifndef UE4SS_SDK_BP_CES1030_SnowGnorc_HPP
#define UE4SS_SDK_BP_CES1030_SnowGnorc_HPP

class ABP_CES1030_SnowGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleB;                         // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertOUT;                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertLoop;                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertIn;                       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Taunt;                         // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A30 (size: 0x8)
    float ZRotation_ZRot_CE87D0894C20D1F2579822A022BAD0B4;                            // 0x0A38 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ZRotation__Direction_CE87D0894C20D1F2579822A022BAD0B4; // 0x0A3C (size: 0x1)
    class UTimelineComponent* ZRotation;                                              // 0x0A40 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ZRotation__FinishedFunc();
    void ZRotation__UpdateFunc();
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1030_SnowGnorc(int32 EntryPoint);
}; // Size: 0xA48

#endif
