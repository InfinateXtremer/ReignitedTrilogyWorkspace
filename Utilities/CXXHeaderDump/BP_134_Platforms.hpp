#ifndef UE4SS_SDK_BP_134_Platforms_HPP
#define UE4SS_SDK_BP_134_Platforms_HPP

class ABP_134_Platforms_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float Timeline_0_NewTrack_0_93158E2F48C0B7BFF95446930D4B6DA8;                     // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_93158E2F48C0B7BFF95446930D4B6DA8; // 0x033C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    FVector Origin;                                                                   // 0x0348 (size: 0xC)
    FVector TargetLocation;                                                           // 0x0354 (size: 0xC)
    float DeltaY;                                                                     // 0x0360 (size: 0x4)
    TArray<class AActor*> OtherPlatforms;                                             // 0x0368 (size: 0x10)
    float DeltaX;                                                                     // 0x0378 (size: 0x4)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_134_Platforms(int32 EntryPoint);
}; // Size: 0x37C

#endif
