#ifndef UE4SS_SDK_BP_CES2024_GearGrinderThief_HPP
#define UE4SS_SDK_BP_CES2024_GearGrinderThief_HPP

class ABP_CES2024_GearGrinderThief_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cin_Leave;                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cin_Juggle;                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cin_Throw;                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cin_Catch;                     // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cin_Idle;                      // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* OrbProp;                                              // 0x0A20 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleWest;                      // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleEast;                      // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Disabled;                      // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostAttack;                    // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Ranged;                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A70 (size: 0x8)
    bool hasOrb?;                                                                     // 0x0A78 (size: 0x1)
    bool justDied?;                                                                   // 0x0A79 (size: 0x1)
    class ABP_205_LightningStone_Controller_C* LightningStoneController;              // 0x0A80 (size: 0x8)
    FVector spawnedOrbLocation;                                                       // 0x0A88 (size: 0xC)
    bool hideAttachedOnBeginning?;                                                    // 0x0A94 (size: 0x1)

    void OnRep_hasOrb?();
    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void 205 Gear Grinder Thief - Mission Spawn Event(bool isEast?);
    void BndEvt__FalconEnemyState_Disabled_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Gear Grinder Thief - Pick Up Orb();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cin_Throw_K2Node_ComponentBoundEvent_7_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Cin_Catch_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cin_Leave_K2Node_ComponentBoundEvent_10_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Cin_Leave_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2024_GearGrinderThief(int32 EntryPoint);
}; // Size: 0xA95

#endif
