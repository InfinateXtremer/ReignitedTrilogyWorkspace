#ifndef UE4SS_SDK_BP_115_ChasmRespawnController_HPP
#define UE4SS_SDK_BP_115_ChasmRespawnController_HPP

class ABP_115_ChasmRespawnController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* CollisionS;                                                  // 0x0320 (size: 0x8)
    class UBoxComponent* CollisionE;                                                  // 0x0328 (size: 0x8)
    class UBoxComponent* CollisionW;                                                  // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    float LerpMovement_VerticalFairyAdjust_C4E2275743499CD5773A2CA41FB74B86;          // 0x0340 (size: 0x4)
    float LerpMovement_Percent_C4E2275743499CD5773A2CA41FB74B86;                      // 0x0344 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LerpMovement__Direction_C4E2275743499CD5773A2CA41FB74B86; // 0x0348 (size: 0x1)
    class UTimelineComponent* LerpMovement;                                           // 0x0350 (size: 0x8)
    float SplineMovement_Percent_1129E03B42D63820FBCD639063B25D19;                    // 0x0358 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineMovement__Direction_1129E03B42D63820FBCD639063B25D19; // 0x035C (size: 0x1)
    class UTimelineComponent* SplineMovement;                                         // 0x0360 (size: 0x8)
    class ASplineActor_C* Spline_WtoMid;                                              // 0x0368 (size: 0x8)
    class ASplineActor_C* Spline_EtoMid;                                              // 0x0370 (size: 0x8)
    class ASplineActor_C* Spline_MidtoEnd;                                            // 0x0378 (size: 0x8)
    class ASplineActor_C* Ref_SplineXtoMid;                                           // 0x0380 (size: 0x8)
    class AActor* Player;                                                             // 0x0388 (size: 0x8)
    class AController* PlayerController;                                              // 0x0390 (size: 0x8)
    int32 MovementSequence;                                                           // 0x0398 (size: 0x4)
    FVector FallLocation;                                                             // 0x039C (size: 0xC)
    FVector NextLocation;                                                             // 0x03A8 (size: 0xC)
    bool alreadyActive?;                                                              // 0x03B4 (size: 0x1)
    TArray<class ABP_CNS1168_ChasmFairy_C*> AllFairies;                               // 0x03B8 (size: 0x10)
    class ASplineActor_C* Spline_StoMid;                                              // 0x03C8 (size: 0x8)
    class UParticleSystemComponent* LevitateVFX;                                      // 0x03D0 (size: 0x8)

    void UserConstructionScript();
    void SplineMovement__FinishedFunc();
    void SplineMovement__UpdateFunc();
    void LerpMovement__FinishedFunc();
    void LerpMovement__UpdateFunc();
    void BndEvt__CollisionW_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CollisionE_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CollisionS_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_115_ChasmRespawnController(int32 EntryPoint);
}; // Size: 0x3D8

#endif
