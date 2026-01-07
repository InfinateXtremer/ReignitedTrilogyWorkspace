#ifndef UE4SS_SDK_BP_CES2039_BreezebuilderFalcon_HPP
#define UE4SS_SDK_BP_CES2039_BreezebuilderFalcon_HPP

class ABP_CES2039_BreezebuilderFalcon_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Theatric_MoveUD;               // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Theatric_MoveToDoor;           // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Theatric_MoveLR;               // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* Bomb;                                                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* GiveBomb;                                       // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FES_DropBomb;                                   // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FES_FlyInCircles;                               // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Death;                                      // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FES_PostAttack;                                 // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Ranged;                                     // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PreAttack;                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Patrol;                                     // 0x0A58 (size: 0x8)
    TArray<class ABP_CES2038_BreezebuilderChick_C*> Array_BreezebuilderChick;         // 0x0A60 (size: 0x10)
    bool areChicksAlive?;                                                             // 0x0A70 (size: 0x1)
    bool lookingForChicks;                                                            // 0x0A71 (size: 0x1)
    class ABP_CES2038_BreezebuilderChick_C* targetChick;                              // 0x0A78 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_PostAttack_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FlyInCircles_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FlyInCircles_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveBeginPlay();
    void CustomNotify01(class AActor* InputActor);
    void BndEvt__FalconEnemyState_Ranged_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void CustomNotify02(class AActor* InputActor);
    void BndEvt__FES_DropBomb_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FES_DropBomb_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2039_BreezebuilderFalcon(int32 EntryPoint);
}; // Size: 0xA80

#endif
