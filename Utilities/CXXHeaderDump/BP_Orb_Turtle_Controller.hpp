#ifndef UE4SS_SDK_BP_Orb_Turtle_Controller_HPP
#define UE4SS_SDK_BP_Orb_Turtle_Controller_HPP

class ABP_Orb_Turtle_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Timeline_1_NewTrack_0_05BDFCA049895DC403FBBBADD3C7C8D1;                     // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_05BDFCA049895DC403FBBBADD3C7C8D1; // 0x0334 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0338 (size: 0x8)
    float Timeline_0_NewTrack_0_839784824DCB05BACA88F785B0CE49F7;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_839784824DCB05BACA88F785B0CE49F7; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0348 (size: 0x8)
    class AActor* SpawnPoint_1;                                                       // 0x0350 (size: 0x8)
    class AActor* SpawnPoint_2;                                                       // 0x0358 (size: 0x8)
    class AActor* SpawnPoint_3;                                                       // 0x0360 (size: 0x8)
    class AActor* CurentSpawnPoint;                                                   // 0x0368 (size: 0x8)
    int32 GameNumber;                                                                 // 0x0370 (size: 0x4)
    class AActor* MissionStart_Plain;                                                 // 0x0378 (size: 0x8)
    class AActor* Cauldron;                                                           // 0x0380 (size: 0x8)
    TArray<class AActor*> MyTurtles;                                                  // 0x0388 (size: 0x10)
    class AActor* CurrentSpawn;                                                       // 0x0398 (size: 0x8)
    bool GameAvailable;                                                               // 0x03A0 (size: 0x1)
    int32 score;                                                                      // 0x03A4 (size: 0x4)
    class AActor* MissionStart_01;                                                    // 0x03A8 (size: 0x8)
    class AActor* IGC Selector;                                                       // 0x03B0 (size: 0x8)
    bool GameInProgress;                                                              // 0x03B8 (size: 0x1)
    class AActor* Dummy1;                                                             // 0x03C0 (size: 0x8)
    class AActor* Dummy2;                                                             // 0x03C8 (size: 0x8)
    class AActor* Dummy3;                                                             // 0x03D0 (size: 0x8)
    class AActor* Player;                                                             // 0x03D8 (size: 0x8)
    class AActor* AchWatcher;                                                         // 0x03E0 (size: 0x8)
    bool Success;                                                                     // 0x03E8 (size: 0x1)
    int32 SpawnCount;                                                                 // 0x03EC (size: 0x4)
    TArray<class AActor*> CurrentTurtles;                                             // 0x03F0 (size: 0x10)
    class AActor* CurrentTurtle;                                                      // 0x0400 (size: 0x8)

    void IGetDefaultCamera(class AActor*& Actor);
    void IGetFollowCameraComponent(class UFollowCameraComponent*& FollowCameraComponent);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void IPushManagedCameraToStack(class AActor* NewManagedCameraActor, FBP_CameraSettings CameraSettings, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void IPopCameraFromStack(class AActor* ExistingViewTarget, float TimeToBlendOut, bool DeleteActorAfterBlend);
    void IPushCameraToStack(class AActor* NewViewTarget, float TimeToBlendIn, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool LockOutgoing);
    void INotifyPlayerInCutsceneMode(bool InCutsceneMode);
    void IShowCameraDebugInfo(bool ShowDebugInfo);
    void ISnapDefaultCameraBehindPlayer();
    void IPopCameraFromStackBlendOverride(class AActor* ExistingViewTarget, float TimeToBlendOut, TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExponent, bool DeleteActorAfterBlend);
    void IUpdateActiveCamera(bool IsActive);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionEnd(bool Success, bool LevelEnd);
    void SpawnTurtle(class AActor* DUMMY);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void StartGame1();
    void PlayerOutOfBounds();
    void Start Game 2();
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void StopGame2();
    void Game2Timer();
    void StopGame1();
    void Game1Timer();
    void PlayerStart();
    void ExecuteUbergraph_BP_Orb_Turtle_Controller(int32 EntryPoint);
}; // Size: 0x408

#endif
