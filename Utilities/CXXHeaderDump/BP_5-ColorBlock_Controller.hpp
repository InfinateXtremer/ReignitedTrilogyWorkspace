#ifndef UE4SS_SDK_BP_5-ColorBlock_Controller_HPP
#define UE4SS_SDK_BP_5-ColorBlock_Controller_HPP

class ABP_5-ColorBlock_Controller_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0458 (size: 0x8)
    class USceneComponent* CameraFacing;                                              // 0x0460 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0468 (size: 0x8)
    class USphereComponent* Sphere_Exit;                                              // 0x0470 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0478 (size: 0x8)
    class UBP_DeathState_C* State_Failed;                                             // 0x0480 (size: 0x8)
    class UBP_DeathState_C* State_Success;                                            // 0x0488 (size: 0x8)
    class USphereComponent* Sphere_Enter;                                             // 0x0490 (size: 0x8)
    float Timeline_1_NewTrack_0_63E9AEF443549314F6137BA8A856579F;                     // 0x0498 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_63E9AEF443549314F6137BA8A856579F; // 0x049C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04A0 (size: 0x8)
    TArray<class AActor*> Blocks;                                                     // 0x04A8 (size: 0x10)
    class AActor* ActiveBlock;                                                        // 0x04B8 (size: 0x8)
    bool PuzzleActive;                                                                // 0x04C0 (size: 0x1)
    int32 Index;                                                                      // 0x04C4 (size: 0x4)
    class AActor* MissionMaster;                                                      // 0x04C8 (size: 0x8)
    class AActor* IGCSelector_8Block;                                                 // 0x04D0 (size: 0x8)
    class AActor* FailPoint;                                                          // 0x04D8 (size: 0x8)
    class AActor* Foreman Bud ColorBlock;                                             // 0x04E0 (size: 0x8)
    class AActor* Fishing_Bud;                                                        // 0x04E8 (size: 0x8)
    class AActor* IGCSelector_Fishing;                                                // 0x04F0 (size: 0x8)
    bool Cam Triggered;                                                               // 0x04F8 (size: 0x1)
    class ABP_Base_Playable_C* Player;                                                // 0x0500 (size: 0x8)
    int32 CamSettingsIndex;                                                           // 0x0508 (size: 0x4)
    class AActor* Target;                                                             // 0x0510 (size: 0x8)
    bool PlayerInVolume;                                                              // 0x0518 (size: 0x1)
    float DeltaSeconds;                                                               // 0x051C (size: 0x4)
    class AManagedCameraActor_C* NewManagedCamera;                                    // 0x0520 (size: 0x8)
    bool Finished;                                                                    // 0x0528 (size: 0x1)
    class AActor* IGCSelector_ColorBlock;                                             // 0x0530 (size: 0x8)
    class AActor* SaveManager;                                                        // 0x0538 (size: 0x8)
    class AActor* 8BlockController;                                                   // 0x0540 (size: 0x8)
    FRotator CamRotationStart;                                                        // 0x0548 (size: 0xC)
    FRotator CamRotationEnd;                                                          // 0x0554 (size: 0xC)
    FRotator CamRotationCurrent;                                                      // 0x0560 (size: 0xC)
    class AActor* FishingController;                                                  // 0x0570 (size: 0x8)
    class AActor* ActiveBlockB;                                                       // 0x0578 (size: 0x8)
    bool Alt Pattern;                                                                 // 0x0580 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void StartCam();
    void PlayerReady();
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Reset();
    void UseOffsetCam(bool Enabled);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void BndEvt__Sphere_Enter_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void MissionRestore();
    void BndEvt__Sphere_Exit_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Sphere_Enter_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_5-ColorBlock_Controller(int32 EntryPoint);
}; // Size: 0x581

#endif
