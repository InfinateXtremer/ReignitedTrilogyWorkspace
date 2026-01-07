#ifndef UE4SS_SDK_BP_CES2038_FireDetector_HPP
#define UE4SS_SDK_BP_CES2038_FireDetector_HPP

class ABP_CES2038_FireDetector_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* Burned;                                               // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0458 (size: 0x8)
    class USphereComponent* Detector;                                                 // 0x0460 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Detector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Burned_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2038_FireDetector(int32 EntryPoint);
}; // Size: 0x468

#endif
