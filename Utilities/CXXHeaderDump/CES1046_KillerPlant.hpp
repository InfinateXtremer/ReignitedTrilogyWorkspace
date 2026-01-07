#ifndef UE4SS_SDK_CES1046_KillerPlant_HPP
#define UE4SS_SDK_CES1046_KillerPlant_HPP

class ACES1046_KillerPlant_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_KillerPlant_Burrow;                            // 0x09F8 (size: 0x8)
    class UFlopCollisionManager_C* FlopCollisionManager;                              // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack_Check;                                // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* ShakeOutState;                                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* AttackSpyroDefeatedState;                       // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* AttackEnterState;                               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* CrouchState;                                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* OriginState;                                    // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* AttackStandardState;                            // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* SeekState;                                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* ShakeState;                                     // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A60 (size: 0x8)
    float Timeline_1_Alpha_3B5763B346AA18C506173599177FCAAD;                          // 0x0A68 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3B5763B346AA18C506173599177FCAAD; // 0x0A6C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A70 (size: 0x8)
    float MoveForward_Alpha_0B91BAF34ECF4CF118402792E9C0CD7D;                         // 0x0A78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveForward__Direction_0B91BAF34ECF4CF118402792E9C0CD7D; // 0x0A7C (size: 0x1)
    class UTimelineComponent* MoveForward;                                            // 0x0A80 (size: 0x8)
    bool isCurrentlyAttacking?;                                                       // 0x0A88 (size: 0x1)
    TArray<class ACES1046_KillerPlant_C*> OtherKillerPlants;                          // 0x0A90 (size: 0x10)
    FVector Destination;                                                              // 0x0AA0 (size: 0xC)
    FVector startingLocation;                                                         // 0x0AAC (size: 0xC)

    void UserConstructionScript();
    void MoveForward__FinishedFunc();
    void MoveForward__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__AttackEnterState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ShakeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SeekState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__OriginState_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackStandardState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__PreAttack_Check_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackSpyroDefeatedState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__CooldownState_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__CooldownState_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__CrouchState_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ShakeOutState_K2Node_ComponentBoundEvent_6_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackEnterState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void SpawnBurrows();
    void StopBurrows();
    void BndEvt__OriginState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__SeekState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CES1046_KillerPlant(int32 EntryPoint);
}; // Size: 0xAB8

#endif
