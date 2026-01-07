#ifndef UE4SS_SDK_214_CraneTrigger_HPP
#define UE4SS_SDK_214_CraneTrigger_HPP

class A214_CraneTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* MyCrane;                                                            // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_214_CraneTrigger(int32 EntryPoint);
}; // Size: 0x338

#endif
