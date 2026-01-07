#ifndef UE4SS_SDK_BP_SuperChargeVolume_HPP
#define UE4SS_SDK_BP_SuperChargeVolume_HPP

class ABP_SuperChargeVolume_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03D0 (size: 0x8)
    class UBoxComponent* TriggerVolume;                                               // 0x03D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E0 (size: 0x8)
    FVector VolumeExtents;                                                            // 0x03E8 (size: 0xC)
    FActiveGameplayEffectHandle SuperChargeEffect;                                    // 0x03F4 (size: 0x8)
    class AActor* PlayerActor;                                                        // 0x0400 (size: 0x8)
    bool PlayerInVolume;                                                              // 0x0408 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__CollisionVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CollisionVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SuperChargeVolume(int32 EntryPoint);
}; // Size: 0x409

#endif
