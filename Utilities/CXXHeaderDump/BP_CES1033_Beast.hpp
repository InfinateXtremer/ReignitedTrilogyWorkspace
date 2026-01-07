#ifndef UE4SS_SDK_BP_CES1033_Beast_HPP
#define UE4SS_SDK_BP_CES1033_Beast_HPP

class ABP_CES1033_Beast_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* EatClassic;                                     // 0x09F8 (size: 0x8)
    class UCapsuleComponent* Capsule_Vehicle;                                         // 0x0A00 (size: 0x8)
    class UCapsuleComponent* Tail_Capsule;                                            // 0x0A08 (size: 0x8)
    class UCapsuleComponent* BR_Capsule;                                              // 0x0A10 (size: 0x8)
    class UCapsuleComponent* BL_Capsule;                                              // 0x0A18 (size: 0x8)
    class UCapsuleComponent* FL_Capsule;                                              // 0x0A20 (size: 0x8)
    class UCapsuleComponent* FR_Capsule;                                              // 0x0A28 (size: 0x8)
    class UCapsuleComponent* Capsule_Chest;                                           // 0x0A30 (size: 0x8)
    class UFlopCollisionManager_C* FlopCollisionManager;                              // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* WaitToEat;                                      // 0x0A40 (size: 0x8)
    class USceneComponent* SceneMountPoint;                                           // 0x0A48 (size: 0x8)
    class UCapsuleComponent* Capsule_Neck;                                            // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* PostMovement;                                   // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* Idle_Roar;                                      // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* Look;                                           // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* Eat;                                            // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* BellyFlopHit;                                   // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* Attack_BellyFlop;                               // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* Movement;                                       // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* SeekPlayer;                                     // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* WakeUp;                                         // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* Sleep;                                          // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* PostAttack;                                     // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* Attack_Swipe;                                   // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* PreAttack;                                      // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0AC8 (size: 0x8)
    class ABP_CES1032_ArmoredDruid_C* ArmoredDruidReference;                          // 0x0AD0 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__WaitToEat_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__PostMovement_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Idle_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Attack_BellyFlop_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Attack_BellyFlop_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1033_Beast(int32 EntryPoint);
}; // Size: 0xAD8

#endif
