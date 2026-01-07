#ifndef UE4SS_SDK_FlightLevelTransporter_HPP
#define UE4SS_SDK_FlightLevelTransporter_HPP

class AFlightLevelTransporter_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0EC8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0ED0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0ED8 (size: 0x8)
    float fadeTime;                                                                   // 0x0EE0 (size: 0x4)
    bool Return Home Only;                                                            // 0x0EE4 (size: 0x1)
    bool Hold;                                                                        // 0x0EE5 (size: 0x1)
    FVector HoldPosition;                                                             // 0x0EE8 (size: 0xC)
    int32 gameIndex;                                                                  // 0x0EF4 (size: 0x4)

    void Put in Flying transition();
    void UpdateSaveData();
    bool TriggerTransport(class ACharacter* playerCharacter);
    void GetProgressionInfo(FString& NewCheckpointName, FString& NewLevelPath);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionEnd(bool Success, bool LevelEnd);
    void Flight_StartTransitionSeq();
    void TI_ReturnHomeMenu();
    void TI_TransitionBeginSource();
    void ExecuteUbergraph_FlightLevelTransporter(int32 EntryPoint);
}; // Size: 0xEF8

#endif
