#ifndef UE4SS_SDK_BP_SuperChargeJumpAssist_HPP
#define UE4SS_SDK_BP_SuperChargeJumpAssist_HPP

class ABP_SuperChargeJumpAssist_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03D0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03D8 (size: 0x8)
    class UBoxComponent* TriggerVolume;                                               // 0x03E0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03E8 (size: 0x8)
    FVector VolumeExtents;                                                            // 0x03F0 (size: 0xC)
    FActiveGameplayEffectHandle SuperChargeEffect;                                    // 0x03FC (size: 0x8)
    class AActor* PlayerActor;                                                        // 0x0408 (size: 0x8)
    bool PlayerInVolume;                                                              // 0x0410 (size: 0x1)
    float GravityScale;                                                               // 0x0414 (size: 0x4)
    float JumpZVelocity;                                                              // 0x0418 (size: 0x4)
    float JumpMaxHoldTime;                                                            // 0x041C (size: 0x4)
    float GravityScale_StageTwo;                                                      // 0x0420 (size: 0x4)
    float JumpZVelocity_StageTwo;                                                     // 0x0424 (size: 0x4)
    float JumpMaxHoldTime_StageTwo;                                                   // 0x0428 (size: 0x4)
    float GravityScale_StageThree;                                                    // 0x042C (size: 0x4)
    float JumpZVelocity_StageThree;                                                   // 0x0430 (size: 0x4)
    float JumpMaxHoldTime_StageThree;                                                 // 0x0434 (size: 0x4)

    void IsActorFacingWithinThreshold(class AActor* Actor, bool& WithinThreshold);
    void UserConstructionScript();
    void BndEvt__CollisionVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CollisionVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SuperChargeJumpAssist(int32 EntryPoint);
}; // Size: 0x438

#endif
