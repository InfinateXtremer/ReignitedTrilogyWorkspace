#ifndef UE4SS_SDK_BP_CES1035_GreenDruid_MovingBlock_Special_HPP
#define UE4SS_SDK_BP_CES1035_GreenDruid_MovingBlock_Special_HPP

class ABP_CES1035_GreenDruid_MovingBlock_Special_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USphereComponent* WizardTrigger;                                            // 0x0320 (size: 0x8)
    class USphereComponent* PlayerTrigger;                                            // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float PositionSliding_Alpha_B7363AAF48D908B24BF01CB6DB0DD7CB;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PositionSliding__Direction_B7363AAF48D908B24BF01CB6DB0DD7CB; // 0x0344 (size: 0x1)
    class UTimelineComponent* PositionSliding;                                        // 0x0348 (size: 0x8)
    class AActor* PositionA;                                                          // 0x0350 (size: 0x8)
    class AActor* PositionB;                                                          // 0x0358 (size: 0x8)
    class ABP_CES1034_BlueWizard_C* BlueWizard_Reference;                             // 0x0360 (size: 0x8)
    bool hasPlayerTriggeredMe?;                                                       // 0x0368 (size: 0x1)
    bool canEnergizeNow?;                                                             // 0x0369 (size: 0x1)
    class AActor* DruidPlatform;                                                      // 0x0370 (size: 0x8)
    class ABP_CES1035_GreenDruid_C* GreenDruid_Reference;                             // 0x0378 (size: 0x8)

    void UserConstructionScript();
    void PositionSliding__FinishedFunc();
    void PositionSliding__UpdateFunc();
    void Energize();
    void De-energize();
    void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void BndEvt__WizardTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CES1035_GreenDruid_MovingBlock_Special(int32 EntryPoint);
}; // Size: 0x380

#endif
