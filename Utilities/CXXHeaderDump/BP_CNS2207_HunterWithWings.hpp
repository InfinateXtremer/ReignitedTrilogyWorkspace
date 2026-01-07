#ifndef UE4SS_SDK_BP_CNS2207_HunterWithWings_HPP
#define UE4SS_SDK_BP_CNS2207_HunterWithWings_HPP

class ABP_CNS2207_HunterWithWings_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PlayerTooFar;                  // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_PlayerTooClose;                // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Default;                       // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fly;                           // 0x0A10 (size: 0x8)
    class AActor* SplineActor;                                                        // 0x0A18 (size: 0x8)
    class AActor* PlayerPos;                                                          // 0x0A20 (size: 0x8)
    class AActor* StageController;                                                    // 0x0A28 (size: 0x8)
    class AActor* MasterActor;                                                        // 0x0A30 (size: 0x8)
    bool Active;                                                                      // 0x0A38 (size: 0x1)
    class AActor* MissionMaster;                                                      // 0x0A40 (size: 0x8)
    FRotator RotBuffer;                                                               // 0x0A48 (size: 0xC)
    FVector LocBuffer;                                                                // 0x0A54 (size: 0xC)
    bool ContinueAfterEnd;                                                            // 0x0A60 (size: 0x1)
    FTransform PlayerTransform;                                                       // 0x0A70 (size: 0x30)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_PlayerTooClose_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_PlayerTooFar_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Fly_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionReset(class AActor* RequestActor);
    void ExecuteUbergraph_BP_CNS2207_HunterWithWings(int32 EntryPoint);
}; // Size: 0xAA0

#endif
