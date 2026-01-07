#ifndef UE4SS_SDK_BP_StopGlide_HPP
#define UE4SS_SDK_BP_StopGlide_HPP

class ABP_StopGlide_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* StopGlideVolume;                                             // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)
    bool onlyOnce?;                                                                   // 0x0330 (size: 0x1)
    bool StopGlide;                                                                   // 0x0331 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__FallToDeathVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void PlayerDead(class AActor* Actor, const FGameplayEventData Payload);
    void ExecuteUbergraph_BP_StopGlide(int32 EntryPoint);
}; // Size: 0x332

#endif
