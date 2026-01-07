#ifndef UE4SS_SDK_BP_RaisingFlag_HPP
#define UE4SS_SDK_BP_RaisingFlag_HPP

class ABP_RaisingFlag_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0320 (size: 0x8)
    class UStaticMeshComponent* FlagDroopy;                                           // 0x0328 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0330 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0340 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0348 (size: 0x8)
    float Raise_NewTrack_0_F46030BB4F55EA122E19C9B02016D728;                          // 0x0350 (size: 0x4)
    float Raise_Movement_F46030BB4F55EA122E19C9B02016D728;                            // 0x0354 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Raise__Direction_F46030BB4F55EA122E19C9B02016D728; // 0x0358 (size: 0x1)
    class UTimelineComponent* Raise;                                                  // 0x0360 (size: 0x8)
    float Height;                                                                     // 0x0368 (size: 0x4)
    TArray<class AActor*> MyThingsToTrigger;                                          // 0x0370 (size: 0x10)
    class UAkAudioEvent* SFX Flag Raise;                                              // 0x0380 (size: 0x8)
    FPhasmidObjectSaveDataList MySaveData;                                            // 0x0388 (size: 0x10)
    bool Activated;                                                                   // 0x0398 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Raise__FinishedFunc();
    void Raise__UpdateFunc();
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
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void TriggerThings(bool RestoreSaveGames);
    void ExecuteUbergraph_BP_RaisingFlag(int32 EntryPoint);
}; // Size: 0x399

#endif
