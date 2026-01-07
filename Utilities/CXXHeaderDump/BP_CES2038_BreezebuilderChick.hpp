#ifndef UE4SS_SDK_BP_CES2038_BreezebuilderChick_HPP
#define UE4SS_SDK_BP_CES2038_BreezebuilderChick_HPP

class ABP_CES2038_BreezebuilderChick_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FES_IdleCooldown;                               // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FES_ShootInPit;                                 // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FES_FaceBird;                                   // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FES_PlayerHurt;                                 // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Laugh;                                      // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FES_MoveIntoPosition;                           // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FES_WaitForTrigger;                             // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Patrol;                                     // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Idle_Bomb;                                  // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Death;                                      // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Cooldown;                                   // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Ranged;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Attack;                                     // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FES_SwallowBomb;                                // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FES_Idle;                                       // 0x0A68 (size: 0x8)
    class AActor* Caterpillar;                                                        // 0x0A70 (size: 0x8)
    bool isBeingFed?;                                                                 // 0x0A78 (size: 0x1)
    bool Caterpillar_Dead_?;                                                          // 0x0A79 (size: 0x1)
    bool isChickByPit?;                                                               // 0x0A7A (size: 0x1)
    class ATriggerBox* ChickByPitTriggerBox;                                          // 0x0A80 (size: 0x8)
    bool isSpyroInTriggerBox;                                                         // 0x0A88 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void SwallowBomb();
    void ReceiveBeginPlay();
    void BndEvt__FES_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionRestore();
    void BndEvt__FES_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FES_SwallowBomb_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FES_SwallowBomb_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FES_Idle_Bomb_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FES_Idle_Bomb_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void BndEvt__FES_PlayerHurt_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FES_Patrol_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__FES_Ranged_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__ChickByPitTriggerBox_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void BndEvt__ChickByPitTriggerBox_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_CES2038_BreezebuilderChick(int32 EntryPoint);
}; // Size: 0xA89

#endif
