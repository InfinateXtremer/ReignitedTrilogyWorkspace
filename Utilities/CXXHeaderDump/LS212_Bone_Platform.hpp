#ifndef UE4SS_SDK_LS212_Bone_Platform_HPP
#define UE4SS_SDK_LS212_Bone_Platform_HPP

class ALS212_Bone_Platform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    class UStaticMeshComponent* BonePlatformMesh;                                     // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float Timeline_2_NewTrack_0_E8DB712B477C66ECC599A8BDEF24AD58;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_E8DB712B477C66ECC599A8BDEF24AD58; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0348 (size: 0x8)
    float Timeline_1_NewTrack_0_EA86E9394FCB32F48600148253421365;                     // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_EA86E9394FCB32F48600148253421365; // 0x0354 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0358 (size: 0x8)
    float Timeline_0_NewTrack_0_2A6DAE854CC848D42A166EA07CFF684E;                     // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2A6DAE854CC848D42A166EA07CFF684E; // 0x0364 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0368 (size: 0x8)
    float StartingLoc;                                                                // 0x0370 (size: 0x4)
    float EndingLoc;                                                                  // 0x0374 (size: 0x4)
    float CurrentLoc;                                                                 // 0x0378 (size: 0x4)
    float BottomLoc;                                                                  // 0x037C (size: 0x4)
    float StartingRot;                                                                // 0x0380 (size: 0x4)
    float EndingRot;                                                                  // 0x0384 (size: 0x4)
    int32 Int;                                                                        // 0x0388 (size: 0x4)
    FRotator CurrentRot;                                                              // 0x038C (size: 0xC)
    FRotator StartRot;                                                                // 0x0398 (size: 0xC)
    float StartDelay;                                                                 // 0x03A4 (size: 0x4)
    bool OnPlatform;                                                                  // 0x03A8 (size: 0x1)
    float DesiredLoc;                                                                 // 0x03AC (size: 0x4)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Begin Bob();
    void STopBob();
    void Play SFX();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LS212_Bone_Platform(int32 EntryPoint);
}; // Size: 0x3B0

#endif
