#ifndef UE4SS_SDK_FlightController_HPP
#define UE4SS_SDK_FlightController_HPP

class AFlightController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AActor* TransportActor;                                                     // 0x0328 (size: 0x8)
    int32 DebugBadness;                                                               // 0x0330 (size: 0x4)
    bool Cancel On Start;                                                             // 0x0334 (size: 0x1)

    void UserConstructionScript();
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveBeginPlay();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_FlightController(int32 EntryPoint);
}; // Size: 0x335

#endif
