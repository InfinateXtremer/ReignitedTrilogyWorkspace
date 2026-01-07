#ifndef UE4SS_SDK_CNS_2111_Hunter_215_HPP
#define UE4SS_SDK_CNS_2111_Hunter_215_HPP

class ACNS_2111_Hunter_215_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveToMonkey;                             // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_Catch;                                    // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Ready;                                    // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hit;                                      // 0x0920 (size: 0x8)
    class UStaticMeshComponent* barrel;                                               // 0x0928 (size: 0x8)
    int32 CamSettingsIndex;                                                           // 0x0930 (size: 0x4)
    TArray<class ACES2181_MonkeysScorch_C*> Monkeys;                                  // 0x0938 (size: 0x10)
    int32 MonkeyIndex;                                                                // 0x0948 (size: 0x4)
    class ACES2181_MonkeysScorch_C* CurrentMonkey;                                    // 0x0950 (size: 0x8)
    class AActor* SplineActor;                                                        // 0x0958 (size: 0x8)
    int32 MoveState;                                                                  // 0x0960 (size: 0x4)
    bool Active;                                                                      // 0x0964 (size: 0x1)
    bool ready;                                                                       // 0x0965 (size: 0x1)
    TArray<class ATargetPoint*> MonkeySpots;                                          // 0x0968 (size: 0x10)
    class ATargetPoint* MonkeySpot_Current;                                           // 0x0978 (size: 0x8)
    bool Moving;                                                                      // 0x0980 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Move_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MonkeyDistanceCheck(int32 State);
    void BndEvt__State_Ready_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MonkeyStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Ready_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_MoveToMonkey_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CNS_2111_Hunter_215(int32 EntryPoint);
}; // Size: 0x981

#endif
