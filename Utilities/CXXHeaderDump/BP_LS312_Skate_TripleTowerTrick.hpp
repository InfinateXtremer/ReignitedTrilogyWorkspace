#ifndef UE4SS_SDK_BP_LS312_Skate_TripleTowerTrick_HPP
#define UE4SS_SDK_BP_LS312_Skate_TripleTowerTrick_HPP

class ABP_LS312_Skate_TripleTowerTrick_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Tower3;                                                      // 0x0320 (size: 0x8)
    class UBoxComponent* Tower2;                                                      // 0x0328 (size: 0x8)
    class UBoxComponent* Tower1;                                                      // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    bool Tower1 Complete?;                                                            // 0x0340 (size: 0x1)
    bool Tower2 Complete?;                                                            // 0x0341 (size: 0x1)
    bool Tower3 Complete?;                                                            // 0x0342 (size: 0x1)
    FBP_LS312_Skate_TripleTowerTrick_COnTrickLanded OnTrickLanded;                    // 0x0348 (size: 0x10)

    void UserConstructionScript();
    void BndEvt__Tower1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Tower2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Tower3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnAbilityAction(FGameplayTag InputAction, const FGameplayEventData Payload);
    void OnActivate();
    void ExecuteUbergraph_BP_LS312_Skate_TripleTowerTrick(int32 EntryPoint);
    void OnTrickLanded__DelegateSignature();
}; // Size: 0x358

#endif
