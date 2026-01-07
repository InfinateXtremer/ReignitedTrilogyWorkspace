#ifndef UE4SS_SDK_BP_DiodeGate_HPP
#define UE4SS_SDK_BP_DiodeGate_HPP

class ABP_DiodeGate_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0458 (size: 0x8)
    class UBoxComponent* ShockBoxA;                                                   // 0x0460 (size: 0x8)
    class UStaticMeshComponent* FakeBulb;                                             // 0x0468 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS205_Electric_Fence_Shutdown;             // 0x0470 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS205_Electric_Fence;                      // 0x0478 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0480 (size: 0x8)
    class UStaticMeshComponent* gate;                                                 // 0x0488 (size: 0x8)
    class UStaticMeshComponent* PlacementMarker;                                      // 0x0490 (size: 0x8)
    float Timeline_0_0_NewTrack_0_8873B6B44D59B7992D041E9105ED41EC;                   // 0x0498 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_8873B6B44D59B7992D041E9105ED41EC; // 0x049C (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04A0 (size: 0x8)
    TArray<class AActor*> Diodes;                                                     // 0x04A8 (size: 0x10)
    class AActor* Current Diode;                                                      // 0x04B8 (size: 0x8)
    class UFalconEnemyComponent* NewVar_0;                                            // 0x04C0 (size: 0x8)
    TArray<class AActor*> Diodes_Collected;                                           // 0x04C8 (size: 0x10)
    FVector Player Location;                                                          // 0x04D8 (size: 0xC)
    float Aspect Ratio;                                                               // 0x04E4 (size: 0x4)
    class UCameraManagerComponent_C* Camera Manager Component;                        // 0x04E8 (size: 0x8)
    class AActor* Player;                                                             // 0x04F0 (size: 0x8)
    class AController* PlayerController;                                              // 0x04F8 (size: 0x8)
    FPhasmidObjectSaveDataList saveData;                                              // 0x0500 (size: 0x10)
    bool doDelay?;                                                                    // 0x0510 (size: 0x1)
    bool doGroundCheck?;                                                              // 0x0511 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveBeginPlay();
    void BndEvt__ShockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DiodeGate(int32 EntryPoint);
}; // Size: 0x512

#endif
