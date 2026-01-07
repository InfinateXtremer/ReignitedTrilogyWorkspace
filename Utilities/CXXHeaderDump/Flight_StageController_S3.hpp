#ifndef UE4SS_SDK_Flight_StageController_S3_HPP
#define UE4SS_SDK_Flight_StageController_S3_HPP

class AFlight_StageController_S3_C : public AFlight_StageController_S2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    float Timeline_0_WaterLength_D8B3881440FF39CFD5AF9987F1C42F93;                    // 0x0528 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D8B3881440FF39CFD5AF9987F1C42F93; // 0x052C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0530 (size: 0x8)
    float SuccessTimeline_FloatValue_667B7E12462EE406C8F456BF84CEB13A;                // 0x0538 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SuccessTimeline__Direction_667B7E12462EE406C8F456BF84CEB13A; // 0x053C (size: 0x1)
    class UTimelineComponent* SuccessTimeline;                                        // 0x0540 (size: 0x8)
    class AQuestLevelActor_C* Qla;                                                    // 0x0548 (size: 0x8)
    bool TSucceed;                                                                    // 0x0550 (size: 0x1)
    bool superFlying;                                                                 // 0x0551 (size: 0x1)
    bool ChallengeStart;                                                              // 0x0552 (size: 0x1)
    bool changingState;                                                               // 0x0553 (size: 0x1)
    float WaitDuration;                                                               // 0x0554 (size: 0x4)
    bool MenuUnavailable;                                                             // 0x0558 (size: 0x1)
    bool RSucceed;                                                                    // 0x0559 (size: 0x1)
    bool Alive;                                                                       // 0x055A (size: 0x1)
    bool isHoney;                                                                     // 0x055B (size: 0x1)
    bool ActiveAtStart;                                                               // 0x055C (size: 0x1)
    class UAkAudioEvent* MusicMainEvent;                                              // 0x0560 (size: 0x8)
    class UAkAudioEvent* MusicPlayEvent;                                              // 0x0568 (size: 0x8)
    class UAkAudioEvent* MusicIntroEvent;                                             // 0x0570 (size: 0x8)
    float CurrTimerVal;                                                               // 0x0578 (size: 0x4)

    void ResetPosition();
    void DisableControl();
    void UserConstructionScript();
    void SuccessTimeline__FinishedFunc();
    void SuccessTimeline__UpdateFunc();
    void SuccessTimeline__NewTrack_0__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Event__EventFunc();
    void OnNotifyEnd_5EDA9CB846385B7CAABA44973C16579E(FName NotifyName);
    void OnNotifyBegin_5EDA9CB846385B7CAABA44973C16579E(FName NotifyName);
    void OnInterrupted_5EDA9CB846385B7CAABA44973C16579E(FName NotifyName);
    void OnBlendOut_5EDA9CB846385B7CAABA44973C16579E(FName NotifyName);
    void OnCompleted_5EDA9CB846385B7CAABA44973C16579E(FName NotifyName);
    void OnNotifyEnd_A2DA07F0465D647B24EE02BD3F630604(FName NotifyName);
    void OnNotifyBegin_A2DA07F0465D647B24EE02BD3F630604(FName NotifyName);
    void OnInterrupted_A2DA07F0465D647B24EE02BD3F630604(FName NotifyName);
    void OnBlendOut_A2DA07F0465D647B24EE02BD3F630604(FName NotifyName);
    void OnCompleted_A2DA07F0465D647B24EE02BD3F630604(FName NotifyName);
    void OnNotifyEnd_FB26520B410120B78A35878A5909EF5F(FName NotifyName);
    void OnNotifyBegin_FB26520B410120B78A35878A5909EF5F(FName NotifyName);
    void OnInterrupted_FB26520B410120B78A35878A5909EF5F(FName NotifyName);
    void OnBlendOut_FB26520B410120B78A35878A5909EF5F(FName NotifyName);
    void OnCompleted_FB26520B410120B78A35878A5909EF5F(FName NotifyName);
    void PlayerReady();
    void StartCrashSequence(float FailZ_Offset);
    void ResetCrashTrigger();
    void HUD TryAgain();
    void FlightSummaryReply(int32 selected);
    void StartSuccess();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ResetGates();
    void MissionEnd(bool Success, bool LevelEnd);
    void StartMission();
    void quit from pause menu();
    void FakeFly();
    void Celebrate();
    void ExecuteUbergraph_Flight_StageController_S3(int32 EntryPoint);
}; // Size: 0x57C

#endif
