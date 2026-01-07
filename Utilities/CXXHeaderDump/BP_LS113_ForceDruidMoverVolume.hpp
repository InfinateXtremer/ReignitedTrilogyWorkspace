#ifndef UE4SS_SDK_BP_LS113_ForceDruidMoverVolume_HPP
#define UE4SS_SDK_BP_LS113_ForceDruidMoverVolume_HPP

class ABP_LS113_ForceDruidMoverVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    TArray<class ABP_CES1032_ArmoredDruid_C*> DruidsToTrigger;                        // 0x0330 (size: 0x10)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LS113_ForceDruidMoverVolume(int32 EntryPoint);
}; // Size: 0x340

#endif
