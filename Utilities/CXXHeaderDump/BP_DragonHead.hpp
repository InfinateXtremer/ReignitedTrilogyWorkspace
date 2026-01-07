#ifndef UE4SS_SDK_BP_DragonHead_HPP
#define UE4SS_SDK_BP_DragonHead_HPP

class ABP_DragonHead_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Tooth_11;                                             // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Tooth_10;                                             // 0x0338 (size: 0x8)
    class UStaticMeshComponent* Tooth_09;                                             // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Tooth_08;                                             // 0x0348 (size: 0x8)
    class UStaticMeshComponent* Tooth_07;                                             // 0x0350 (size: 0x8)
    class UStaticMeshComponent* Tooth_06;                                             // 0x0358 (size: 0x8)
    class UStaticMeshComponent* Tooth_04;                                             // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Tooth_05;                                             // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Tooth_03;                                             // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Tooth_02;                                             // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Tooth_01;                                             // 0x0380 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0388 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0390 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0398 (size: 0x8)
    class UBoxComponent* CloseTrigger;                                                // 0x03A0 (size: 0x8)
    class UBoxComponent* OpenTrigger;                                                 // 0x03A8 (size: 0x8)
    class UChildActorComponent* RightNostril;                                         // 0x03B0 (size: 0x8)
    class UChildActorComponent* LeftNostril;                                          // 0x03B8 (size: 0x8)
    float Timeline_0_NewTrack_0_E3DDD1344D51E3D1C2CB2F9A486C03A3;                     // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E3DDD1344D51E3D1C2CB2F9A486C03A3; // 0x03C4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03C8 (size: 0x8)
    FVector InitialLocation;                                                          // 0x03D0 (size: 0xC)
    bool IsOpen;                                                                      // 0x03DC (size: 0x1)
    class APortalTransporter_C* MyPortal;                                             // 0x03E0 (size: 0x8)
    int32 DragonsCollected;                                                           // 0x03E8 (size: 0x4)
    class ACollectable_Dragon_C* MyCollectableDragon;                                 // 0x03F0 (size: 0x8)
    int32 LevelsCompleted;                                                            // 0x03F8 (size: 0x4)
    FString dragon name;                                                              // 0x0400 (size: 0x10)
    bool CollectableDragon;                                                           // 0x0410 (size: 0x1)
    class UParticleSystemComponent* NostrilParticle;                                  // 0x0418 (size: 0x8)
    class UParticleSystemComponent* OpeningParticle;                                  // 0x0420 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void check inventory();
    void set opened();
    void was opened?(bool& opened);
    void restore from save(FPhasmidObjectSaveDataList saveData);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveBeginPlay();
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CloseTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void Exit Portal();
    void Unlock();
    void maybe set open();
    void Player Ready();
    void ready();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_DragonHead(int32 EntryPoint);
}; // Size: 0x428

#endif
