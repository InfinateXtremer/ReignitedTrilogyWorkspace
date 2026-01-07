#ifndef UE4SS_SDK_BP_CES1031_Vulture_HPP
#define UE4SS_SDK_BP_CES1031_Vulture_HPP

class ABP_CES1031_Vulture_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* Flamed;                                         // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnState;                                    // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* CooldownState;                                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* AttackFlightState;                              // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnFlightState;                              // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* LandState;                                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* TakeOffState;                                   // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* AttackState;                                    // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A40 (size: 0x8)
    class AActor* Achievement 01;                                                     // 0x0A48 (size: 0x8)
    class AActor* Achievement 02;                                                     // 0x0A50 (size: 0x8)
    FVector OriginLocation;                                                           // 0x0A58 (size: 0xC)
    bool SeekPlayerZ;                                                                 // 0x0A64 (size: 0x1)

    void UserConstructionScript();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__LandState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__AttackFlightState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__ReturnFlightState_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__AttackFlightState_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__TakeOffState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__AttackState_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES1031_Vulture(int32 EntryPoint);
}; // Size: 0xA65

#endif
