#ifndef UE4SS_SDK_HockeyDoor_Blueprint_HPP
#define UE4SS_SDK_HockeyDoor_Blueprint_HPP

class AHockeyDoor_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* HockeyDoor;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)
    float Timeline_0_NewTrack_0_C9F311D4476C01D0A43822B9EEEC42FC;                     // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_C9F311D4476C01D0A43822B9EEEC42FC; // 0x0334 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0338 (size: 0x8)
    class AActor* TestActor;                                                          // 0x0340 (size: 0x8)

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
    void ReceiveBeginPlay();
    void Move();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_HockeyDoor_Blueprint(int32 EntryPoint);
}; // Size: 0x348

#endif
