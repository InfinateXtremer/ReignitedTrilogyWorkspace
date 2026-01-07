#ifndef UE4SS_SDK_BP_S2_TreasureChest_BalloonVase_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_BalloonVase_HPP

class ABP_S2_TreasureChest_BalloonVase_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UBP_LootOptions_Component_C* BP_LootOptions_Component;                      // 0x0628 (size: 0x8)
    class USP3_HomingTargetComponent* SP3_HomingTarget;                               // 0x0630 (size: 0x8)
    class UStaticMeshComponent* VaseOnly;                                             // 0x0638 (size: 0x8)
    class USphereComponent* FallimgCollision;                                         // 0x0640 (size: 0x8)
    float BobbingTimeline_BobAmount_C037E7F54403132BD518B6BA8C05F556;                 // 0x0648 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BobbingTimeline__Direction_C037E7F54403132BD518B6BA8C05F556; // 0x064C (size: 0x1)
    class UTimelineComponent* BobbingTimeline;                                        // 0x0650 (size: 0x8)
    bool isBalloonPopped?;                                                            // 0x0658 (size: 0x1)
    FVector StartLocation;                                                            // 0x065C (size: 0xC)

    void UserConstructionScript();
    void BobbingTimeline__FinishedFunc();
    void BobbingTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void BndEvt__tempmesh_base_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__FallimgCollision_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_5_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_S2_TreasureChest_BalloonVase(int32 EntryPoint);
}; // Size: 0x668

#endif
