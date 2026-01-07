#ifndef UE4SS_SDK_BP_CFS2169_AquaSheep_HPP
#define UE4SS_SDK_BP_CFS2169_AquaSheep_HPP

class ABP_CFS2169_AquaSheep_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class USphereComponent* Head_Collision;                                           // 0x0B00 (size: 0x8)
    class UChaseSpeedManager_C* ChaseSpeedManager;                                    // 0x0B08 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0B10 (size: 0x8)
    class UFalconEnemyStateComponent* State_DeathInstant;                             // 0x0B18 (size: 0x8)
    class UFalconEnemyStateComponent* State_Respawn_Underwater;                       // 0x0B20 (size: 0x8)
    class UFalconEnemyStateComponent* State_Dead_Underwater;                          // 0x0B28 (size: 0x8)
    class UFalconEnemyStateComponent* State_DeathFlop_Underwater;                     // 0x0B30 (size: 0x8)
    class UFalconEnemyStateComponent* State_DeathCharge_Underwater;                   // 0x0B38 (size: 0x8)
    class UFalconEnemyStateComponent* State_Wander_Underwater;                        // 0x0B40 (size: 0x8)
    class UFalconEnemyStateComponent* State_Idle_Underwater;                          // 0x0B48 (size: 0x8)
    class UFalconEnemyStateComponent* State_Electrocuted_Land;                        // 0x0B50 (size: 0x8)
    class UFalconEnemyStateComponent* State_Stare_Underwater;                         // 0x0B58 (size: 0x8)
    class UFalconEnemyStateComponent* State_Stare_Land;                               // 0x0B60 (size: 0x8)
    class USkeletalMeshComponent* Mesh_Underwater;                                    // 0x0B68 (size: 0x8)
    bool Underwater;                                                                  // 0x0B70 (size: 0x1)
    bool Alive;                                                                       // 0x0B71 (size: 0x1)

    bool OnDeath(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__State_Dead_Underwater_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Respawn_Underwater_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_DeathInstant_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_DeathFlop_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void BndEvt__State_Wander_Underwater_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderFlamed_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__State_Electrocuted_Land_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_CFS2169_AquaSheep(int32 EntryPoint);
}; // Size: 0xB72

#endif
