#ifndef UE4SS_SDK_204_HeadDropStatue_HPP
#define UE4SS_SDK_204_HeadDropStatue_HPP

class A204_HeadDropStatue_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Statue;                                               // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0340 (size: 0x8)
    float CameaTimeline_NewTrack_1_AC0146BA40132E4492BA1BA4BB7C6388;                  // 0x0348 (size: 0x4)
    float CameaTimeline_NewTrack_0_AC0146BA40132E4492BA1BA4BB7C6388;                  // 0x034C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameaTimeline__Direction_AC0146BA40132E4492BA1BA4BB7C6388; // 0x0350 (size: 0x1)
    class UTimelineComponent* CameaTimeline;                                          // 0x0358 (size: 0x8)
    float Timeline_0_StatuePos_04A472E744D049A473CEB6B97A34AE16;                      // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_04A472E744D049A473CEB6B97A34AE16; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0368 (size: 0x8)
    class AActor* DestinationActor_Self;                                              // 0x0370 (size: 0x8)
    FVector StartPos;                                                                 // 0x0378 (size: 0xC)
    FVector EndPos;                                                                   // 0x0384 (size: 0xC)
    class AActor* Selector1;                                                          // 0x0390 (size: 0x8)
    class AActor* Selector2;                                                          // 0x0398 (size: 0x8)
    class AActor* DestinationActor_Ned;                                               // 0x03A0 (size: 0x8)
    class AActor* Ned;                                                                // 0x03A8 (size: 0x8)
    class AActor* Camera;                                                             // 0x03B0 (size: 0x8)
    bool Rumble;                                                                      // 0x03B8 (size: 0x1)
    bool Down;                                                                        // 0x03B9 (size: 0x1)
    TArray<class AActor*> WINDOWS;                                                    // 0x03C0 (size: 0x10)
    int32 Rumble_Count;                                                               // 0x03D0 (size: 0x4)
    float DeltaTime;                                                                  // 0x03D4 (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Rumble__EventFunc();
    void CameaTimeline__FinishedFunc();
    void CameaTimeline__UpdateFunc();
    void CameaTimeline__NewTrack_2__EventFunc();
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
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_204_HeadDropStatue(int32 EntryPoint);
}; // Size: 0x3D8

#endif
