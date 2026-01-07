#ifndef UE4SS_SDK_BP_LS114_ArmoredDruidKiller_HPP
#define UE4SS_SDK_BP_LS114_ArmoredDruidKiller_HPP

class ABP_LS114_ArmoredDruidKiller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0320 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LS114_ArmoredDruidKiller(int32 EntryPoint);
}; // Size: 0x328

#endif
