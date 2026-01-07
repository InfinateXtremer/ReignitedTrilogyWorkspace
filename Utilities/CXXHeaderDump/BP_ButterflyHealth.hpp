#ifndef UE4SS_SDK_BP_ButterflyHealth_HPP
#define UE4SS_SDK_BP_ButterflyHealth_HPP

class ABP_ButterflyHealth_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x03D0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03D8 (size: 0x8)
    class USphereComponent* CaptureArea;                                              // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    float Timeline_0_percent_8707A2554780CB569E40409C8C6F78DD;                        // 0x03F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8707A2554780CB569E40409C8C6F78DD; // 0x03F4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03F8 (size: 0x8)
    float PeriodElasped;                                                              // 0x0400 (size: 0x4)
    float DeltaSeconds;                                                               // 0x0404 (size: 0x4)
    bool IsBeingEaten;                                                                // 0x0408 (size: 0x1)
    bool IsInRange;                                                                   // 0x0409 (size: 0x1)
    class AActor* playerCharacter;                                                    // 0x0410 (size: 0x8)
    FVector Start_Position;                                                           // 0x0418 (size: 0xC)
    FVector End_Position;                                                             // 0x0424 (size: 0xC)
    FVector Offset;                                                                   // 0x0430 (size: 0xC)
    bool IsBlueButterfly;                                                             // 0x043C (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__CaptureArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CaptureArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CheckShouldTurnBlue();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StopSpawnTimeline();
    void ExecuteUbergraph_BP_ButterflyHealth(int32 EntryPoint);
}; // Size: 0x43D

#endif
