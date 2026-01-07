#ifndef UE4SS_SDK_BP_S1_DragonEgg_HPP
#define UE4SS_SDK_BP_S1_DragonEgg_HPP

class ABP_S1_DragonEgg_C : public ABP_Loot_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C8 (size: 0x8)
    class AActor* MySpline;                                                           // 0x07D0 (size: 0x8)
    bool forbidAutocollect?;                                                          // 0x07D8 (size: 0x1)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_S1_DragonEgg(int32 EntryPoint);
}; // Size: 0x7D9

#endif
