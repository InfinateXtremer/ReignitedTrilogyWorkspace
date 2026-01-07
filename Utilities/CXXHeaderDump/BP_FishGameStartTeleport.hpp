#ifndef UE4SS_SDK_BP_FishGameStartTeleport_HPP
#define UE4SS_SDK_BP_FishGameStartTeleport_HPP

class ABP_FishGameStartTeleport_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    bool Im Active;                                                                   // 0x0328 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_FishGameStartTeleport(int32 EntryPoint);
}; // Size: 0x329

#endif
