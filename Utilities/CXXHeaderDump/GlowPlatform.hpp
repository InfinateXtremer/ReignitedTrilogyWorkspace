#ifndef UE4SS_SDK_GlowPlatform_HPP
#define UE4SS_SDK_GlowPlatform_HPP

class AGlowPlatform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x0320 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0328 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x0330 (size: 0x8)
    class UBoxComponent* Box2;                                                        // 0x0338 (size: 0x8)
    class UBoxComponent* Box3;                                                        // 0x0340 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0348 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0350 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0358 (size: 0x8)
    float Timeline_2_Glow_6252F9234DCD79C3FE4E5D9BEA243971;                           // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_6252F9234DCD79C3FE4E5D9BEA243971; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0368 (size: 0x8)
    float Timeline_1_NewTrack_0_CCBCE0C34709BC78609E869C54933664;                     // 0x0370 (size: 0x4)
    float Timeline_1_Alpha_CCBCE0C34709BC78609E869C54933664;                          // 0x0374 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_CCBCE0C34709BC78609E869C54933664; // 0x0378 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0380 (size: 0x8)
    float Timeline_0_Glow_44ABB73A486672BB5629F4BCBD4DFFF8;                           // 0x0388 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_44ABB73A486672BB5629F4BCBD4DFFF8; // 0x038C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0390 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0398 (size: 0x8)
    bool IsHit;                                                                       // 0x03A0 (size: 0x1)
    class AActor* MyMaster;                                                           // 0x03A8 (size: 0x8)
    float TotalHit;                                                                   // 0x03B0 (size: 0x4)
    bool IsMaster;                                                                    // 0x03B4 (size: 0x1)
    bool CanBeReset;                                                                  // 0x03B5 (size: 0x1)
    int32 Counter;                                                                    // 0x03B8 (size: 0x4)
    FVector InitialLocation;                                                          // 0x03BC (size: 0xC)
    class AActor* Wall;                                                               // 0x03C8 (size: 0x8)
    class APortalTransporter_C* MyPortal;                                             // 0x03D0 (size: 0x8)
    bool done;                                                                        // 0x03D8 (size: 0x1)
    class AActor* PondCollide;                                                        // 0x03E0 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box3_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void GlowPlatformInc();
    void GlowPlatformReset();
    void GlowPlatformFlash();
    void Lower Wall();
    void Exit Portal();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Reset Me();
    void ExecuteUbergraph_GlowPlatform(int32 EntryPoint);
}; // Size: 0x3E8

#endif
