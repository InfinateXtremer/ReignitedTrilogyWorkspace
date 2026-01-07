#ifndef UE4SS_SDK_LS210_Border_HPP
#define UE4SS_SDK_LS210_Border_HPP

class ALS210_Border_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0450 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0458 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0460 (size: 0x8)
    class UAkAudioEvent* SFX_HitBorder;                                               // 0x0468 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_LS210_Border(int32 EntryPoint);
}; // Size: 0x470

#endif
