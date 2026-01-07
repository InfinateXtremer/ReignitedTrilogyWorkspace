#ifndef UE4SS_SDK_229_Token_HPP
#define UE4SS_SDK_229_Token_HPP

class A229_Token_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UStaticMeshComponent* SM_LS214_GoldenGear;                                  // 0x0330 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)
    float Timeline_0_VertOffset_E9A0827D4F3BDD57B09B868511E0C487;                     // 0x0348 (size: 0x4)
    float Timeline_0_NewTrack_0_E9A0827D4F3BDD57B09B868511E0C487;                     // 0x034C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E9A0827D4F3BDD57B09B868511E0C487; // 0x0350 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0358 (size: 0x8)
    bool collected;                                                                   // 0x0360 (size: 0x1)
    class AMission_Master_OnUpdate_C* MissionMaster;                                  // 0x0368 (size: 0x8)
    FVector Location_End;                                                             // 0x0370 (size: 0xC)
    class AActor* MyShowman;                                                          // 0x0380 (size: 0x8)
    FVector Location_Start;                                                           // 0x0388 (size: 0xC)
    int32 SendValue;                                                                  // 0x0394 (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
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
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayerReady();
    void ExecuteUbergraph_229_Token(int32 EntryPoint);
}; // Size: 0x398

#endif
