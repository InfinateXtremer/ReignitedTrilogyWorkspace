#ifndef UE4SS_SDK_BP_CES1054_BoarKiller_HPP
#define UE4SS_SDK_BP_CES1054_BoarKiller_HPP

class ABP_CES1054_BoarKiller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CES1054_BoarKiller(int32 EntryPoint);
}; // Size: 0x330

#endif
