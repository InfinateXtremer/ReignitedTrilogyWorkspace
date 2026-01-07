#ifndef UE4SS_SDK_BP_LS312_Skate_HalfPipeLeapTrick_HPP
#define UE4SS_SDK_BP_LS312_Skate_HalfPipeLeapTrick_HPP

class ABP_LS312_Skate_HalfPipeLeapTrick_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Leap2;                                                       // 0x0320 (size: 0x8)
    class UBoxComponent* Leap1;                                                       // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    bool Leap1 Complete?;                                                             // 0x0338 (size: 0x1)
    bool Leap2 Complete?;                                                             // 0x0339 (size: 0x1)
    FBP_LS312_Skate_HalfPipeLeapTrick_COnTrickLanded OnTrickLanded;                   // 0x0340 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__Leap1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Leap2_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnAbilityAction(FGameplayTag InputAction, const FGameplayEventData Payload);
    void OnActivate();
    void ExecuteUbergraph_BP_LS312_Skate_HalfPipeLeapTrick(int32 EntryPoint);
    void OnTrickLanded__DelegateSignature();
}; // Size: 0x350

#endif
