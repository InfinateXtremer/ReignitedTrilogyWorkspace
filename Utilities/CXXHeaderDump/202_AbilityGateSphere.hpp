#ifndef UE4SS_SDK_202_AbilityGateSphere_HPP
#define UE4SS_SDK_202_AbilityGateSphere_HPP

class A202_AbilityGateSphere_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* AbilityGate;                                                        // 0x0330 (size: 0x8)
    float Value_Enter;                                                                // 0x0338 (size: 0x4)
    float Value_Exit;                                                                 // 0x033C (size: 0x4)

    void UserConstructionScript();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_202_AbilityGateSphere(int32 EntryPoint);
}; // Size: 0x340

#endif
