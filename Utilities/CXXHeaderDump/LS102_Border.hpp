#ifndef UE4SS_SDK_LS102_Border_HPP
#define UE4SS_SDK_LS102_Border_HPP

class ALS102_Border_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0458 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0460 (size: 0x8)
    float Timeline_1_NewTrack_0_095F737A4ED3E765BEABACB6D47BFC65;                     // 0x0468 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_095F737A4ED3E765BEABACB6D47BFC65; // 0x046C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0470 (size: 0x8)
    class UAkAudioEvent* SFX_BorderSound;                                             // 0x0478 (size: 0x8)
    TArray<class AActor*> EmissiveActors;                                             // 0x0480 (size: 0x10)
    TArray<FPhasmidSoftReference> EmissiveActorsSoftRef;                              // 0x0490 (size: 0x10)
    FName paramName;                                                                  // 0x04A0 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_LS102_Border(int32 EntryPoint);
}; // Size: 0x4A8

#endif
