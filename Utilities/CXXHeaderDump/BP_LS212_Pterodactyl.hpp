#ifndef UE4SS_SDK_BP_LS212_Pterodactyl_HPP
#define UE4SS_SDK_BP_LS212_Pterodactyl_HPP

class ABP_LS212_Pterodactyl_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Fly;                           // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Leave;                         // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DropEgg;                       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Invisible;                     // 0x0A18 (size: 0x8)
    TArray<class ATargetPoint*> ExternalPoints;                                       // 0x0A20 (size: 0x10)
    TArray<class APhasmidPatrolPath*> CirclePaths;                                    // 0x0A30 (size: 0x10)
    class ABP_LS212_LizardEgg_C* CarriedEgg;                                          // 0x0A40 (size: 0x8)
    class ABP_CBS2002_EggManager_C* EggManager;                                       // 0x0A48 (size: 0x8)
    class ABP_CBS2002_Gulp_C* Gulp;                                                   // 0x0A50 (size: 0x8)
    float EggDropDelay;                                                               // 0x0A58 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
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
    void BndEvt__FalconEnemyState_Invisible_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Invisible_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BeginFly();
    void BndEvt__FalconEnemyState_DropEgg_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__FalconEnemyState_FlyA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Done_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS212_Pterodactyl(int32 EntryPoint);
}; // Size: 0xA5C

#endif
