#ifndef UE4SS_SDK_BP_ClimbTriggerVolume_HPP
#define UE4SS_SDK_BP_ClimbTriggerVolume_HPP

class ABP_ClimbTriggerVolume_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* Rung_Base;                                            // 0x03D0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03D8 (size: 0x8)
    class UBoxComponent* TriggerVolume;                                               // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    class AActor* playerCharacter;                                                    // 0x03F0 (size: 0x8)
    bool IsInRange;                                                                   // 0x03F8 (size: 0x1)
    int32 Rungs;                                                                      // 0x03FC (size: 0x4)
    FVector RungPosOffset;                                                            // 0x0400 (size: 0xC)
    float RungZAdjustment;                                                            // 0x040C (size: 0x4)
    bool RungsBuilt;                                                                  // 0x0410 (size: 0x1)
    bool DisableRungs;                                                                // 0x0411 (size: 0x1)
    float BoxZVal;                                                                    // 0x0414 (size: 0x4)
    TArray<class UStaticMeshComponent*> RungArray;                                    // 0x0418 (size: 0x10)
    float RungSpacing;                                                                // 0x0428 (size: 0x4)
    float Rung_NumberCalc;                                                            // 0x042C (size: 0x4)

    void BuildRungs();
    void UserConstructionScript();
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ClimbTriggerVolume(int32 EntryPoint);
}; // Size: 0x430

#endif
