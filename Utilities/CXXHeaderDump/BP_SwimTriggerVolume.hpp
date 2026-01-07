#ifndef UE4SS_SDK_BP_SwimTriggerVolume_HPP
#define UE4SS_SDK_BP_SwimTriggerVolume_HPP

class ABP_SwimTriggerVolume_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* DebugPlaneUnderwater;                                 // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* DebugPlaneSurface;                                    // 0x03D8 (size: 0x8)
    class UBoxComponent* SwimTriggerVolume;                                           // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    class AActor* playerCharacter;                                                    // 0x03F0 (size: 0x8)
    bool PlayerTouchedWater;                                                          // 0x03F8 (size: 0x1)
    bool DisableDiving;                                                               // 0x03F9 (size: 0x1)
    FLinearColor LiquidColorInfo;                                                     // 0x03FC (size: 0x10)

    void IGetHarmfulTerrainDamageMagnitude(float& DamageMagnitude);
    void IGetHarmfulTerrainLiquidColorInfo(FLinearColor& LiquidColorInfo);
    void Player Touched Water(class UObject* MaybePlayer, bool PlayerTouchedWater);
    void UserConstructionScript();
    void BndEvt__SwimTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SwimTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SwimTriggerVolume(int32 EntryPoint);
}; // Size: 0x40C

#endif
