#ifndef UE4SS_SDK_BP_CFS1163_SpottedChickens_HPP
#define UE4SS_SDK_BP_CFS1163_SpottedChickens_HPP

class ABP_CFS1163_SpottedChickens_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_SquawkNear;                               // 0x0B00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Electrocute;                              // 0x0B08 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chicken_Be_Free;                          // 0x0B10 (size: 0x8)
    class UFalconEnemyStateComponent* State_Squawk;                                   // 0x0B18 (size: 0x8)
    bool CageChicken;                                                                 // 0x0B20 (size: 0x1)
    class AActor* MyGnorc;                                                            // 0x0B28 (size: 0x8)
    class ACES1047_GnorcDude_C* Trapper;                                              // 0x0B30 (size: 0x8)

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
    void BndEvt__FalconEnemyState_FodderFlamed_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Squawk_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderRespawn_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FodderWander_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Chicken_Be_Free_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Chicken_Be_Free_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CFS1163_SpottedChickens(int32 EntryPoint);
}; // Size: 0xB38

#endif
