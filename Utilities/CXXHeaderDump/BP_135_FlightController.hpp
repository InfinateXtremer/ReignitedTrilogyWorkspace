#ifndef UE4SS_SDK_BP_135_FlightController_HPP
#define UE4SS_SDK_BP_135_FlightController_HPP

class ABP_135_FlightController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0328 (size: 0x1)
    class AActor* FlightCap;                                                          // 0x0330 (size: 0x8)
    FVector FlightCapLocation;                                                        // 0x0338 (size: 0xC)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionRestore();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void PlayerReady();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_135_FlightController(int32 EntryPoint);
}; // Size: 0x344

#endif
