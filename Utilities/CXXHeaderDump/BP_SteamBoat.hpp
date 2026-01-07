#ifndef UE4SS_SDK_BP_SteamBoat_HPP
#define UE4SS_SDK_BP_SteamBoat_HPP

class ABP_SteamBoat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio2;                                                     // 0x0328 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0330 (size: 0x8)
    class USplineComponent* SplineLoopBoat2;                                          // 0x0338 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0340 (size: 0x8)
    class USplineComponent* SplineLoopBoat1;                                          // 0x0348 (size: 0x8)
    class USplineComponent* SplineIntro;                                              // 0x0350 (size: 0x8)
    class UStaticMeshComponent* BoatBase2;                                            // 0x0358 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0360 (size: 0x8)
    class UStaticMeshComponent* BoatBase;                                             // 0x0368 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0370 (size: 0x8)
    float Restart2B_NewTrack_2_8D9307BF49DBD4F214AFC88F2384BC84;                      // 0x0378 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Restart2B__Direction_8D9307BF49DBD4F214AFC88F2384BC84; // 0x037C (size: 0x1)
    class UTimelineComponent* Restart2B;                                              // 0x0380 (size: 0x8)
    float Restart2A_NewTrack_1_172D1A644946576E40505A8A720B0627;                      // 0x0388 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Restart2A__Direction_172D1A644946576E40505A8A720B0627; // 0x038C (size: 0x1)
    class UTimelineComponent* Restart2A;                                              // 0x0390 (size: 0x8)
    float Restart1B_NewTrack_1_9DCCBAF14B8F4FF5FCF71A8D85970337;                      // 0x0398 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Restart1B__Direction_9DCCBAF14B8F4FF5FCF71A8D85970337; // 0x039C (size: 0x1)
    class UTimelineComponent* Restart1B;                                              // 0x03A0 (size: 0x8)
    float Restart1A_NewTrack_0_498D4C0644CB4800F3CA109221710A52;                      // 0x03A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Restart1A__Direction_498D4C0644CB4800F3CA109221710A52; // 0x03AC (size: 0x1)
    class UTimelineComponent* Restart1A;                                              // 0x03B0 (size: 0x8)
    float SlowTimeline2A_NewTrack_1_1121DB434B5999F84D617CBB38B0FB20;                 // 0x03B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SlowTimeline2A__Direction_1121DB434B5999F84D617CBB38B0FB20; // 0x03BC (size: 0x1)
    class UTimelineComponent* SlowTimeline2A;                                         // 0x03C0 (size: 0x8)
    float SlowTimeline1A_NewTrack_1_A630AAC9477BD1A4DE71DBB7B9F796BC;                 // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SlowTimeline1A__Direction_A630AAC9477BD1A4DE71DBB7B9F796BC; // 0x03CC (size: 0x1)
    class UTimelineComponent* SlowTimeline1A;                                         // 0x03D0 (size: 0x8)
    float SlowTimeline2B_NewTrack_1_336DB75040958F25E14806B794E09681;                 // 0x03D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SlowTimeline2B__Direction_336DB75040958F25E14806B794E09681; // 0x03DC (size: 0x1)
    class UTimelineComponent* SlowTimeline2B;                                         // 0x03E0 (size: 0x8)
    float SlowTimeline1B_NewTrack_1_5FF811DA471C2500FD83CAA85137EED8;                 // 0x03E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SlowTimeline1B__Direction_5FF811DA471C2500FD83CAA85137EED8; // 0x03EC (size: 0x1)
    class UTimelineComponent* SlowTimeline1B;                                         // 0x03F0 (size: 0x8)
    float LoopTimelineBoat1_NewTrack_0_47D8782245CB2B860AF5E7998B8057CC;              // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LoopTimelineBoat1__Direction_47D8782245CB2B860AF5E7998B8057CC; // 0x03FC (size: 0x1)
    class UTimelineComponent* LoopTimelineBoat1;                                      // 0x0400 (size: 0x8)
    float LoopTimelineBoat2_NewTrack_0_CA1462144EF9FA265BB54784CD5D73CE;              // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LoopTimelineBoat2__Direction_CA1462144EF9FA265BB54784CD5D73CE; // 0x040C (size: 0x1)
    class UTimelineComponent* LoopTimelineBoat2;                                      // 0x0410 (size: 0x8)
    float Timeline_0_NewTrack_0_4805319045CCC3AE04F8F8B0A190CCB9;                     // 0x0418 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4805319045CCC3AE04F8F8B0A190CCB9; // 0x041C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0420 (size: 0x8)
    float IntroTimeline_NewTrack_0_F8138B924D06244889269E927307AAF4;                  // 0x0428 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> IntroTimeline__Direction_F8138B924D06244889269E927307AAF4; // 0x042C (size: 0x1)
    class UTimelineComponent* IntroTimeline;                                          // 0x0430 (size: 0x8)
    bool PlayedOnce;                                                                  // 0x0438 (size: 0x1)
    float StartTime;                                                                  // 0x043C (size: 0x4)
    float TotalTime;                                                                  // 0x0440 (size: 0x4)
    float StartDistance;                                                              // 0x0444 (size: 0x4)
    TArray<class AActor*> Campfire;                                                   // 0x0448 (size: 0x10)
    bool Boat2Ready;                                                                  // 0x0458 (size: 0x1)
    bool Boat1Ready;                                                                  // 0x0459 (size: 0x1)
    FRotator SavedRot_1;                                                              // 0x045C (size: 0xC)
    FRotator SavedRot_2;                                                              // 0x0468 (size: 0xC)
    bool CampfireLit;                                                                 // 0x0474 (size: 0x1)
    TArray<FPhasmidSoftReference> SoftReferences;                                     // 0x0478 (size: 0x10)
    TArray<class AActor*> enemies;                                                    // 0x0488 (size: 0x10)
    bool SaveRestore;                                                                 // 0x0498 (size: 0x1)
    int32 IncrementValue;                                                             // 0x049C (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void LoopTimelineBoat1__FinishedFunc();
    void LoopTimelineBoat1__UpdateFunc();
    void SlowTimeline1A__FinishedFunc();
    void SlowTimeline1A__UpdateFunc();
    void SlowTimeline2A__FinishedFunc();
    void SlowTimeline2A__UpdateFunc();
    void IntroTimeline__FinishedFunc();
    void IntroTimeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void LoopTimelineBoat2__FinishedFunc();
    void LoopTimelineBoat2__UpdateFunc();
    void SlowTimeline1B__FinishedFunc();
    void SlowTimeline1B__UpdateFunc();
    void SlowTimeline2B__FinishedFunc();
    void SlowTimeline2B__UpdateFunc();
    void Restart1A__FinishedFunc();
    void Restart1A__UpdateFunc();
    void Restart1B__FinishedFunc();
    void Restart1B__UpdateFunc();
    void Restart2A__FinishedFunc();
    void Restart2A__UpdateFunc();
    void Restart2B__FinishedFunc();
    void Restart2B__UpdateFunc();
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
    void Boat1SlowToStopPosA();
    void Boat1SlowToStopPosB();
    void Reset();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Go();
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Boat2Go();
    void Boat2SlowtoStopPosA();
    void Boat2SlowtoStopPosB();
    void ResetBoat2();
    void Boat1RestartPosA();
    void Boat1RestartPosB();
    void Boat2RestartPosA();
    void Boat2RestartPosB();
    void StartBoats();
    void EnemyCheck();
    void PlayerReady();
    void EnemyStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_SteamBoat(int32 EntryPoint);
}; // Size: 0x4A0

#endif
