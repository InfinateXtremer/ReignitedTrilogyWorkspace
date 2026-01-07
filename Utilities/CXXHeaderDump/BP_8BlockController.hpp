#ifndef UE4SS_SDK_BP_8BlockController_HPP
#define UE4SS_SDK_BP_8BlockController_HPP

class ABP_8BlockController_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class USphereComponent* Sphere_EndCam;                                            // 0x0450 (size: 0x8)
    class USphereComponent* Sphere_StartCam;                                          // 0x0458 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_Done;                                           // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0470 (size: 0x8)
    float Timeline_1_NewTrack_0_0EC0C0004C4C8A331EDE42838E2CD7CC;                     // 0x0478 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_0EC0C0004C4C8A331EDE42838E2CD7CC; // 0x047C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0480 (size: 0x8)
    TArray<class ABP_New8Block_C*> MyBlocks;                                          // 0x0488 (size: 0x10)
    int32 YellowBlocks;                                                               // 0x0498 (size: 0x4)
    bool Finished;                                                                    // 0x049C (size: 0x1)
    class AActor* ForemanBud_8BLock;                                                  // 0x04A0 (size: 0x8)
    class AActor* IGC_Selector_8Block;                                                // 0x04A8 (size: 0x8)
    class AActor* SaveManager;                                                        // 0x04B0 (size: 0x8)
    class AActor* Mission Master;                                                     // 0x04B8 (size: 0x8)
    class AActor* FishingController;                                                  // 0x04C0 (size: 0x8)
    class UParticleSystemComponent* ElectricityParticle;                              // 0x04C8 (size: 0x8)
    int32 CamSettingsIndex;                                                           // 0x04D0 (size: 0x4)
    FRotator CamRotationStart;                                                        // 0x04D4 (size: 0xC)
    FRotator CamRotationEnd;                                                          // 0x04E0 (size: 0xC)
    bool CamActive;                                                                   // 0x04EC (size: 0x1)
    class AEmitter* VFX_Success_Electricity;                                          // 0x04F0 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent_0(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void TurnGreen();
    void Player Ready();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__Sphere_StartCam_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_EndCam_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PuzzleCam(bool Active);
    void ExecuteUbergraph_BP_8BlockController(int32 EntryPoint);
}; // Size: 0x4F8

#endif
