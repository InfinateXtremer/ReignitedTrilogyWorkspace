#ifndef UE4SS_SDK_SplineMover_Template_HPP
#define UE4SS_SDK_SplineMover_Template_HPP

class ASplineMover_Template_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class USplineMovementComponent* SplineMovement;                                   // 0x0330 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> SplinePlayback__Direction_4C5B64E34D0B7B5AB85ABD84A5446BBD; // 0x0338 (size: 0x1)
    class UTimelineComponent* SplinePlayback;                                         // 0x0340 (size: 0x8)
    class USplineComponent* Spline_Local;                                             // 0x0348 (size: 0x8)
    float StartTime;                                                                  // 0x0350 (size: 0x4)
    float TotalTime;                                                                  // 0x0354 (size: 0x4)
    class AActor* SplineActor;                                                        // 0x0358 (size: 0x8)
    bool HideAtStart;                                                                 // 0x0360 (size: 0x1)
    float StartDistance;                                                              // 0x0364 (size: 0x4)
    bool Reverse Direction;                                                           // 0x0368 (size: 0x1)
    float Multiplier;                                                                 // 0x036C (size: 0x4)
    float HeadingOffset;                                                              // 0x0370 (size: 0x4)
    float BankMultiplier;                                                             // 0x0374 (size: 0x4)
    float Yaw_Saved;                                                                  // 0x0378 (size: 0x4)
    float Yaw_Current;                                                                // 0x037C (size: 0x4)
    float Pitch_Current;                                                              // 0x0380 (size: 0x4)
    float Roll;                                                                       // 0x0384 (size: 0x4)
    float LastDistance;                                                               // 0x0388 (size: 0x4)
    float CurrentDistance;                                                            // 0x038C (size: 0x4)
    bool ActiveAtStart;                                                               // 0x0390 (size: 0x1)
    bool Active;                                                                      // 0x0391 (size: 0x1)
    FTransform InitTransform;                                                         // 0x03A0 (size: 0x30)
    bool Looping;                                                                     // 0x03D0 (size: 0x1)
    FRotator RotationOld;                                                             // 0x03D4 (size: 0xC)
    FRotator RotationTemp;                                                            // 0x03E0 (size: 0xC)
    bool UpdatePositionOnMissionEvent;                                                // 0x03EC (size: 0x1)
    float Roll_Saved;                                                                 // 0x03F0 (size: 0x4)
    class AActor* ReportActor;                                                        // 0x03F8 (size: 0x8)

    void UserConstructionScript();
    void SplinePlayback__FinishedFunc();
    void SplinePlayback__UpdateFunc();
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartTimeline();
    void MissionReset(class AActor* RequestActor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_SplineMover_Template(int32 EntryPoint);
}; // Size: 0x400

#endif
