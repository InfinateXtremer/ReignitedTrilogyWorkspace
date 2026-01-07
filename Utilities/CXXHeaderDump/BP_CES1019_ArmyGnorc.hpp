#ifndef UE4SS_SDK_BP_CES1019_ArmyGnorc_HPP
#define UE4SS_SDK_BP_CES1019_ArmyGnorc_HPP

class ABP_CES1019_ArmyGnorc_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToAlertScared;                 // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToAlert;                       // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PostMoon;                      // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TentHide;                      // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0A18 (size: 0x8)
    class UFalconLevelActorStateComponent* State_PreMoon;                             // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnWait;                    // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleWait;                      // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cower;                         // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Moon;                          // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_EnterTent;                     // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekTent;                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AlertScared;                   // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A88 (size: 0x8)
    bool alerted;                                                                     // 0x0A90 (size: 0x1)
    class ACES1019_ArmyGnorc_Tent_C* Tent;                                            // 0x0A98 (size: 0x8)
    bool InTent;                                                                      // 0x0AA0 (size: 0x1)
    bool Coward;                                                                      // 0x0AA1 (size: 0x1)
    bool MoonState;                                                                   // 0x0AA2 (size: 0x1)
    bool Mooning;                                                                     // 0x0AA3 (size: 0x1)
    FVector TentLocation;                                                             // 0x0AA4 (size: 0xC)
    class AActor* Skill_Achievement_Watcher;                                          // 0x0AB0 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_Alert_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SeekTent_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void OnEnterStateDelegate_Event_0(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_PreMoon_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_EnterTent_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Moon_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PostMoon_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_TentHide_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cower_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cower_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1019_ArmyGnorc(int32 EntryPoint);
}; // Size: 0xAB8

#endif
