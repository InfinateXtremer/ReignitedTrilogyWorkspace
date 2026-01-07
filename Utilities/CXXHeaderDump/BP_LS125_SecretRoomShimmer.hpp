#ifndef UE4SS_SDK_BP_LS125_SecretRoomShimmer_HPP
#define UE4SS_SDK_BP_LS125_SecretRoomShimmer_HPP

class ABP_LS125_SecretRoomShimmer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* InvisTriggerBox;                                             // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class UParticleSystemComponent* WaterRippleSpawn;                                 // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__InvisTriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LS125_SecretRoomShimmer(int32 EntryPoint);
}; // Size: 0x338

#endif
