#ifndef UE4SS_SDK_BP_LS213_SeedResetController_HPP
#define UE4SS_SDK_BP_LS213_SeedResetController_HPP

class ABP_LS213_SeedResetController_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    TArray<class ABP_LS213_GrowingStalk_C*> AllStalks;                                // 0x0450 (size: 0x10)
    TArray<class ATargetPoint*> AllSeedSpawns;                                        // 0x0460 (size: 0x10)
    class AIGC_Selector_C* ProfStart_IGCSelector;                                     // 0x0470 (size: 0x8)
    class AIGC_Selector_C* ProfEnd_IGCSelector;                                       // 0x0478 (size: 0x8)

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
    void ExecuteUbergraph_BP_LS213_SeedResetController(int32 EntryPoint);
}; // Size: 0x480

#endif
