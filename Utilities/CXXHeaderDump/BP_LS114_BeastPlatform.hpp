#ifndef UE4SS_SDK_BP_LS114_BeastPlatform_HPP
#define UE4SS_SDK_BP_LS114_BeastPlatform_HPP

class ABP_LS114_BeastPlatform_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0330 (size: 0x8)
    class ABP_CES1033_Beast_C* BeastReference;                                        // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LS114_BeastPlatform(int32 EntryPoint);
}; // Size: 0x340

#endif
