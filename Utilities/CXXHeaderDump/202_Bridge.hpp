#ifndef UE4SS_SDK_202_Bridge_HPP
#define UE4SS_SDK_202_Bridge_HPP

class A202_Bridge_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0328 (size: 0x8)
    class UStaticMeshComponent* bridge;                                               // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float Timeline_0_NewTrack_1_6CE329ED4FAE7D4258FAFEBE9FD731BA;                     // 0x0340 (size: 0x4)
    float Timeline_0_NewTrack_0_6CE329ED4FAE7D4258FAFEBE9FD731BA;                     // 0x0344 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6CE329ED4FAE7D4258FAFEBE9FD731BA; // 0x0348 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0350 (size: 0x8)
    float Delta_X_Rot;                                                                // 0x0358 (size: 0x4)
    FVector StartLoc;                                                                 // 0x035C (size: 0xC)
    FVector EndLoc;                                                                   // 0x0368 (size: 0xC)
    FRotator StartRot;                                                                // 0x0374 (size: 0xC)
    FRotator EndRot;                                                                  // 0x0380 (size: 0xC)
    bool Activated;                                                                   // 0x038C (size: 0x1)
    class AActor* Selector;                                                           // 0x0390 (size: 0x8)
    class ASpyro_IGC_GoalNotMet_C* GoalNotMet;                                        // 0x0398 (size: 0x8)
    class AActor* Moneybags;                                                          // 0x03A0 (size: 0x8)
    FPhasmidSoftReference Lizard;                                                     // 0x03A8 (size: 0x28)
    FPhasmidSoftReference Selector_2;                                                 // 0x03D0 (size: 0x28)
    class AActor* LizardLocal;                                                        // 0x03F8 (size: 0x8)
    class AActor* Selector2Local;                                                     // 0x0400 (size: 0x8)
    class UAkAudioEvent* SFX_Activate;                                                // 0x0408 (size: 0x8)
    class AEmitter* VFX_Dust;                                                         // 0x0410 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void Begin();
    void AlertLizard();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_202_Bridge(int32 EntryPoint);
}; // Size: 0x418

#endif
