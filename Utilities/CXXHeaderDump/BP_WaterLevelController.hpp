#ifndef UE4SS_SDK_BP_WaterLevelController_HPP
#define UE4SS_SDK_BP_WaterLevelController_HPP

class ABP_WaterLevelController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    float Timeline_3_UP_086B4CD6436A8A93ADC14A9B1104AD61;                             // 0x0328 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_086B4CD6436A8A93ADC14A9B1104AD61; // 0x032C (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0330 (size: 0x8)
    class AActor* FluidSurface1;                                                      // 0x0338 (size: 0x8)
    float PositionUp;                                                                 // 0x0340 (size: 0x4)
    float PositionDown;                                                               // 0x0344 (size: 0x4)
    class AActor* SwimTrigger1;                                                       // 0x0348 (size: 0x8)
    float PositionUp2;                                                                // 0x0350 (size: 0x4)
    float PositionDown2;                                                              // 0x0354 (size: 0x4)
    class AActor* TeleportPoint;                                                      // 0x0358 (size: 0x8)
    class AActor* Underwater1;                                                        // 0x0360 (size: 0x8)
    float PositionUp3;                                                                // 0x0368 (size: 0x4)
    float PositionDown3;                                                              // 0x036C (size: 0x4)
    class AActor* MyThingToDestroy;                                                   // 0x0370 (size: 0x8)
    float dist;                                                                       // 0x0378 (size: 0x4)
    class AActor* SwimTrigger2;                                                       // 0x0380 (size: 0x8)
    float PositionUp4;                                                                // 0x0388 (size: 0x4)
    float PositionDown4;                                                              // 0x038C (size: 0x4)
    class AActor* Underwater2;                                                        // 0x0390 (size: 0x8)
    float PositionUp5;                                                                // 0x0398 (size: 0x4)
    float PositionDown5;                                                              // 0x039C (size: 0x4)
    bool FinalButton;                                                                 // 0x03A0 (size: 0x1)
    class AActor* TeleportPoint2;                                                     // 0x03A8 (size: 0x8)
    bool SaveRestore;                                                                 // 0x03B0 (size: 0x1)
    FName MySeaweedLevel;                                                             // 0x03B8 (size: 0x8)
    TArray<FPhasmidSoftReference> AquaSheep;                                          // 0x03C0 (size: 0x10)
    class AActor* Seahorse;                                                           // 0x03D0 (size: 0x8)
    TArray<class AEmitter*> MyMotes;                                                  // 0x03D8 (size: 0x10)
    FPhasmidSoftReference SharkManager;                                               // 0x03E8 (size: 0x28)
    FPhasmidSoftReference WaterWorker;                                                // 0x0410 (size: 0x28)
    TArray<FPhasmidSoftReference> Vases;                                              // 0x0438 (size: 0x10)

    void UserConstructionScript();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void Player Ready();
    void ExecuteUbergraph_BP_WaterLevelController(int32 EntryPoint);
}; // Size: 0x448

#endif
