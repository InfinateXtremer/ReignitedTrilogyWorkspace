#ifndef UE4SS_SDK_BP_201_Door_HPP
#define UE4SS_SDK_BP_201_Door_HPP

class ABP_201_Door_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UBoxComponent* WithinDoor;                                                  // 0x03D0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS201_Door_Close_Dust;                     // 0x03E0 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS201_Door_Open_Dust;                      // 0x03E8 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x03F0 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0400 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0408 (size: 0x8)
    float Timeline_0_percent_E8D060B34EA414F7D00794BA9E4AE93D;                        // 0x0410 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E8D060B34EA414F7D00794BA9E4AE93D; // 0x0414 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0418 (size: 0x8)
    float SplineTimeline_percent_FC6BFCC149C5ABD162CF55ACD98A9286;                    // 0x0420 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeline__Direction_FC6BFCC149C5ABD162CF55ACD98A9286; // 0x0424 (size: 0x1)
    class UTimelineComponent* SplineTimeLine;                                         // 0x0428 (size: 0x8)
    bool startDown?;                                                                  // 0x0430 (size: 0x1)
    bool isDown?;                                                                     // 0x0431 (size: 0x1)
    bool isMoneybagsWall?;                                                            // 0x0432 (size: 0x1)
    bool wallBoughtAlready?;                                                          // 0x0433 (size: 0x1)
    class AActor* Moneybags_Ref;                                                      // 0x0438 (size: 0x8)
    class AIGC_Selector_C* IGC_ref;                                                   // 0x0440 (size: 0x8)
    class UAkAudioEvent* SFX_Door_Open;                                               // 0x0448 (size: 0x8)
    class UAkAudioEvent* SFX_Door_Close;                                              // 0x0450 (size: 0x8)
    bool playerInDoorFrame?;                                                          // 0x0458 (size: 0x1)
    class ABP_LS201_EloraTeleportToLevel_C* EloraTeleporterRef;                       // 0x0460 (size: 0x8)
    bool Moving;                                                                      // 0x0468 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void SplineTimeLine__FinishedFunc();
    void SplineTimeLine__UpdateFunc();
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
    void Door_201_Trigger();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Dor_201_PlayerReady();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__WithinDoor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__WithinDoor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_201_Door(int32 EntryPoint);
}; // Size: 0x469

#endif
