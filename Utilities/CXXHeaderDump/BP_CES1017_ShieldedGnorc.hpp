#ifndef UE4SS_SDK_BP_CES1017_ShieldedGnorc_HPP
#define UE4SS_SDK_BP_CES1017_ShieldedGnorc_HPP

class ABP_CES1017_ShieldedGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* QuickBlockC;                                    // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* QuickBlockB;                                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* QuickBlockA;                                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* QuickBlock;                                     // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* IdleLookAround;                                 // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* BlockToIdle;                                    // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* LowerGuardToIdle;                               // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* Prop_Weapon;                                          // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* Prop_Shield;                                          // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* RechargeC;                                      // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* AttackC;                                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* PreparationC;                                   // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* BlockFireC;                                     // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* RechargeB;                                      // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* AttackB;                                        // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* PreparationB;                                   // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* BlockFireB;                                     // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* RechargeA;                                      // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* AttackA;                                        // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* PreparationA;                                   // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* BlockFireA;                                     // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* MoveToC;                                        // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* MoveToB;                                        // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* MoveToA;                                        // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* Recharge;                                       // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* Attack;                                         // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* Preparation;                                    // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* BlockFire;                                      // 0x0AD8 (size: 0x8)
    class UFalconEnemyStateComponent* Alert;                                          // 0x0AE0 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0AE8 (size: 0x8)
    float NormalScale_Alpha_BDF1C5AE45FA9ACA3BAC5EAFDEBE93E0;                         // 0x0AF0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> NormalScale__Direction_BDF1C5AE45FA9ACA3BAC5EAFDEBE93E0; // 0x0AF4 (size: 0x1)
    class UTimelineComponent* NormalScale;                                            // 0x0AF8 (size: 0x8)
    float ShieldScale_Scale_DA9F034D4055F756DE57E4B6DB27FE1C;                         // 0x0B00 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShieldScale__Direction_DA9F034D4055F756DE57E4B6DB27FE1C; // 0x0B04 (size: 0x1)
    class UTimelineComponent* ShieldScale;                                            // 0x0B08 (size: 0x8)

    void UserConstructionScript();
    void ShieldScale__FinishedFunc();
    void ShieldScale__UpdateFunc();
    void NormalScale__FinishedFunc();
    void NormalScale__UpdateFunc();
    void BndEvt__BlockFireB_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BlockFireC_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BlockFire_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BlockFireA_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__BlockFire_K2Node_ComponentBoundEvent_6_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__BlockFireB_K2Node_ComponentBoundEvent_7_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__BlockFireC_K2Node_ComponentBoundEvent_8_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_BlockFireA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__QuickBlock_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__QuickBlock_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__QuickBlockA_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__QuickBlockB_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__QuickBlockC_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__QuickBlockA_K2Node_ComponentBoundEvent_5_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__QuickBlockB_K2Node_ComponentBoundEvent_6_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__QuickBlockC_K2Node_ComponentBoundEvent_7_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1017_ShieldedGnorc(int32 EntryPoint);
}; // Size: 0xB10

#endif
