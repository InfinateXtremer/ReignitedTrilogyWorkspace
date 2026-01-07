#ifndef UE4SS_SDK_BP_CES1158_PlaneThief_HPP
#define UE4SS_SDK_BP_CES1158_PlaneThief_HPP

class ABP_CES1158_PlaneThief_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wait;                          // 0x09F8 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* PS_Exhaust_Plane_R;                               // 0x0A08 (size: 0x8)
    class UParticleSystemComponent* PS_Exhaust_Plane_L;                               // 0x0A10 (size: 0x8)
    class UCapsuleComponent* Capsule_Wings;                                           // 0x0A18 (size: 0x8)
    class UCapsuleComponent* Capsule_Tail;                                            // 0x0A20 (size: 0x8)
    class UCapsuleComponent* Capsule_Body;                                            // 0x0A28 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0A30 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* ReturnToOriginState;                            // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FleeState;                                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A58 (size: 0x8)
    class ABP_CES1158_PlaneThief_Plane_C* SpawnedPlane;                               // 0x0A60 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_2_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FleeState_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void PlayerReady();
    void DestroyPlane(class AActor* Actor, const FGameplayEventData Payload);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_CES1158_PlaneThief(int32 EntryPoint);
}; // Size: 0xA68

#endif
