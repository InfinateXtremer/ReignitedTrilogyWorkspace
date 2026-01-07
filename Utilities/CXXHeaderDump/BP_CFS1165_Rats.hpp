#ifndef UE4SS_SDK_BP_CFS1165_Rats_HPP
#define UE4SS_SDK_BP_CFS1165_Rats_HPP

class ABP_CFS1165_Rats_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Sniff;                                    // 0x0B00 (size: 0x8)
    FPhasmidSoftReference AchievementWatcher;                                         // 0x0B08 (size: 0x28)
    class AActor* LocalWatcher;                                                       // 0x0B30 (size: 0x8)

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
    void BndEvt__State_FodderDead_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void Begin();
    void BndEvt__State_Sniff_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Sniff_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CFS1165_Rats(int32 EntryPoint);
}; // Size: 0xB38

#endif
