#ifndef UE4SS_SDK_PuckCatcher_HPP
#define UE4SS_SDK_PuckCatcher_HPP

class APuckCatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)
    class AActor* Puck;                                                               // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_PuckCatcher(int32 EntryPoint);
}; // Size: 0x338

#endif
