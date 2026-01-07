#ifndef UE4SS_SDK_BP_SwimPushOffVolume_HPP
#define UE4SS_SDK_BP_SwimPushOffVolume_HPP

class ABP_SwimPushOffVolume_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USceneComponent* PointOfNoReturn;                                           // 0x03D0 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x03D8 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x03E0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03E8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03F0 (size: 0x8)
    class UBoxComponent* ApplyMovementVolume;                                         // 0x03F8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0400 (size: 0x8)
    class APawn* PlayerPawn;                                                          // 0x0408 (size: 0x8)
    float RegainControlAfterFallDelay;                                                // 0x0410 (size: 0x4)

    bool IsPastPointOfNoReturn();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_SwimPushOffVolume(int32 EntryPoint);
}; // Size: 0x414

#endif
