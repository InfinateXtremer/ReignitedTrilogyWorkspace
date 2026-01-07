#ifndef UE4SS_SDK_BP_CES1035_GreenDruid_MovingBlock_HPP
#define UE4SS_SDK_BP_CES1035_GreenDruid_MovingBlock_HPP

class ABP_CES1035_GreenDruid_MovingBlock_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* PlayerDamager;                                               // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)
    float PositionSliding_Alpha_96C15E914F3ACCCBF7CD85BBE7DB2295;                     // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PositionSliding__Direction_96C15E914F3ACCCBF7CD85BBE7DB2295; // 0x034C (size: 0x1)
    class UTimelineComponent* PositionSliding;                                        // 0x0350 (size: 0x8)
    class AActor* PositionA;                                                          // 0x0358 (size: 0x8)
    class AActor* PositionB;                                                          // 0x0360 (size: 0x8)
    bool isAtPositionA;                                                               // 0x0368 (size: 0x1)
    class UAkAudioEvent* SFX_Movement;                                                // 0x0370 (size: 0x8)
    bool isMoving?;                                                                   // 0x0378 (size: 0x1)

    void UserConstructionScript();
    void PositionSliding__FinishedFunc();
    void PositionSliding__UpdateFunc();
    void Energize();
    void De-energize();
    void BndEvt__PlayerDamager_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CES1035_GreenDruid_MovingBlock(int32 EntryPoint);
}; // Size: 0x379

#endif
