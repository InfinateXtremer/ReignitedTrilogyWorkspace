#ifndef UE4SS_SDK_CES1048_LaserGnorc_HPP
#define UE4SS_SDK_CES1048_LaserGnorc_HPP

class ACES1048_LaserGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* HopOutState;                                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FaceTargetIdleState;                            // 0x0A08 (size: 0x8)
    class UAkComponent* AkAudio_Baton;                                                // 0x0A10 (size: 0x8)
    class UParticleSystemComponent* PS_LaserGnorc_ElectiricRings;                     // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedOutState;                                // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedLoopState;                               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* MoveState;                                      // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* HopState;                                       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* SuccessState;                                   // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* AlertedState;                                   // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A60 (size: 0x8)
    float Electrical_Arcs_Alpha_8EE42E0B4E4220E9710C6E9ECF7D4D08;                     // 0x0A68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Electrical_Arcs__Direction_8EE42E0B4E4220E9710C6E9ECF7D4D08; // 0x0A6C (size: 0x1)
    class UTimelineComponent* Electrical Arcs;                                        // 0x0A70 (size: 0x8)
    float HopAnim_ZRotationRate_3F789A08442CADD8E973EDA71746B3ED;                     // 0x0A78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> HopAnim__Direction_3F789A08442CADD8E973EDA71746B3ED; // 0x0A7C (size: 0x1)
    class UTimelineComponent* HopAnim;                                                // 0x0A80 (size: 0x8)

    bool OnDealDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void HopAnim__FinishedFunc();
    void HopAnim__UpdateFunc();
    void Electrical Arcs__FinishedFunc();
    void Electrical Arcs__UpdateFunc();
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__HopOutState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__HopOutState_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void StartOnDamageVFX();
    void BndEvt__AttackState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CES1048_LaserGnorc(int32 EntryPoint);
}; // Size: 0xA88

#endif
