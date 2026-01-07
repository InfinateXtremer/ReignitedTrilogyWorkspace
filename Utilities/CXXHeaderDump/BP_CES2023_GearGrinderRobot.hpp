#ifndef UE4SS_SDK_BP_CES2023_GearGrinderRobot_HPP
#define UE4SS_SDK_BP_CES2023_GearGrinderRobot_HPP

class ABP_CES2023_GearGrinderRobot_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BackUp;                        // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FixerDown;                     // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnToPath;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Logic;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreGettingFixed;               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Partol_03;                     // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Partol_02;                     // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Partol_End;                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveToOrigin;                  // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_GettingFixed;                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Patrol_01;                     // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A68 (size: 0x8)
    class AActor* MyFixer;                                                            // 0x0A70 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x0A78 (size: 0x10)
    float AttackVOffsetLimit;                                                         // 0x0A88 (size: 0x4)
    class UMaterialInstanceDynamic* Tread MID;                                        // 0x0A90 (size: 0x8)
    float TreadPosition;                                                              // 0x0A98 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Logic_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_GettingFixed_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PreAttack_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_GettingFixed_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_MoveToOrigin_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Patrol_01_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Patrol_01_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Partol_02_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Partol_02_K2Node_ComponentBoundEvent_4_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Partol_03_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Partol_03_K2Node_ComponentBoundEvent_6_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_MoveToOrigin_K2Node_ComponentBoundEvent_7_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ReturnToPath_K2Node_ComponentBoundEvent_8_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ReturnToPath_K2Node_ComponentBoundEvent_9_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Partol_End_K2Node_ComponentBoundEvent_10_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Partol_End_K2Node_ComponentBoundEvent_11_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Attack_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CES2023_GearGrinderRobot(int32 EntryPoint);
}; // Size: 0xA9C

#endif
