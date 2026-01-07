#ifndef UE4SS_SDK_BP_PuddleTriggerVolume_HPP
#define UE4SS_SDK_BP_PuddleTriggerVolume_HPP

class ABP_PuddleTriggerVolume_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* DebugPlaneSurface;                                    // 0x03D0 (size: 0x8)
    class UBoxComponent* PuddleTriggerVolume;                                         // 0x03D8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E0 (size: 0x8)
    class AActor* playerCharacter;                                                    // 0x03E8 (size: 0x8)
    bool PlayerTouchedWater;                                                          // 0x03F0 (size: 0x1)
    bool DisableDiving;                                                               // 0x03F1 (size: 0x1)
    FLinearColor LiquidColorInfo;                                                     // 0x03F4 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__SwimTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SwimTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PuddleTriggerVolume(int32 EntryPoint);
}; // Size: 0x404

#endif
