#ifndef UE4SS_SDK_BP_CFS2173_Caterpillars_HPP
#define UE4SS_SDK_BP_CFS2173_Caterpillars_HPP

class ABP_CFS2173_Caterpillars_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chased;                                   // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Near;                                     // 0x0B08 (size: 0x8)
    class AActor* Tell_Bird_Im_Dead;                                                  // 0x0B10 (size: 0x8)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderDead_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CFS2173_Caterpillars(int32 EntryPoint);
}; // Size: 0xB18

#endif
