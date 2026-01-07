#ifndef UE4SS_SDK_BP_206_DoorB_R_HPP
#define UE4SS_SDK_BP_206_DoorB_R_HPP

class ABP_206_DoorB_R_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0320 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Door;                                                 // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float Timeline_0_NewTrack_0_0DCD5DF2444BF0FED85C29A14E194B9B;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_0DCD5DF2444BF0FED85C29A14E194B9B; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0348 (size: 0x8)
    int32 Close;                                                                      // 0x0350 (size: 0x4)
    class AActor* MyPlate;                                                            // 0x0358 (size: 0x8)
    bool AlphaDoor;                                                                   // 0x0360 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void ExecuteUbergraph_BP_206_DoorB_R(int32 EntryPoint);
}; // Size: 0x361

#endif
