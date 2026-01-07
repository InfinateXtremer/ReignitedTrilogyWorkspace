#ifndef UE4SS_SDK_SharkSub1_HPP
#define UE4SS_SDK_SharkSub1_HPP

class ASharkSub1_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class USceneComponent* PlayerPosition;                                            // 0x09F8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReallyDone;                    // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Close;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Open;                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleOpen;                      // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ResetPos;                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnToPath;                    // 0x0A30 (size: 0x8)
    class UArrowComponent* JumpDestination1asdf;                                      // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Done;                          // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FollowPath;                    // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A58 (size: 0x8)
    float Timeline_4_NewTrack_0_42BD56344574AE39F69960B7AE85652A;                     // 0x0A60 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_4__Direction_42BD56344574AE39F69960B7AE85652A; // 0x0A64 (size: 0x1)
    class UTimelineComponent* Timeline_4;                                             // 0x0A68 (size: 0x8)
    float Timeline_3_NewTrack_0_6DE4FD5944245BD9E206CB808052F67F;                     // 0x0A70 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_6DE4FD5944245BD9E206CB808052F67F; // 0x0A74 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0A78 (size: 0x8)
    bool Active;                                                                      // 0x0A80 (size: 0x1)
    class AActor* TeleportSpot;                                                       // 0x0A88 (size: 0x8)
    class AActor* TeleportSpot2;                                                      // 0x0A90 (size: 0x8)
    FVector StartLoc;                                                                 // 0x0A98 (size: 0xC)
    FRotator StartRot;                                                                // 0x0AA4 (size: 0xC)
    FVector EndLoc;                                                                   // 0x0AB0 (size: 0xC)
    FRotator EndRot;                                                                  // 0x0ABC (size: 0xC)
    float JumpMultiplier;                                                             // 0x0AC8 (size: 0x4)
    class AActor* JumpDestination;                                                    // 0x0AD0 (size: 0x8)
    FTransform OrginalPos;                                                            // 0x0AE0 (size: 0x30)
    bool Reseted;                                                                     // 0x0B10 (size: 0x1)
    class AActor* TeleportSpot3;                                                      // 0x0B18 (size: 0x8)
    class AActor* SplineActor_ForSub;                                                 // 0x0B20 (size: 0x8)
    class USplineComponent* SplineRef_ForSub;                                         // 0x0B28 (size: 0x8)
    FVector CurrentLoc;                                                               // 0x0B30 (size: 0xC)
    FRotator CurrentRot;                                                              // 0x0B3C (size: 0xC)
    class AActor* SplineActor_ForCam;                                                 // 0x0B48 (size: 0x8)
    class USplineComponent* SplineRef_ForCam;                                         // 0x0B50 (size: 0x8)
    class AIGC_SimpleCamera_C* CamRef;                                                // 0x0B58 (size: 0x8)
    float SplineLengthSub;                                                            // 0x0B60 (size: 0x4)
    float DeltaModifierSub;                                                           // 0x0B64 (size: 0x4)
    float CurrentSplinePositionSub;                                                   // 0x0B68 (size: 0x4)
    float CurrentSplinePositionCam;                                                   // 0x0B6C (size: 0x4)
    float SplineLengthCam;                                                            // 0x0B70 (size: 0x4)
    float DeltaModifierCam;                                                           // 0x0B74 (size: 0x4)
    FRotator SubBufferRot;                                                            // 0x0B78 (size: 0xC)
    FVector SubBufferLoc;                                                             // 0x0B84 (size: 0xC)
    class AActor* SubBufferActor;                                                     // 0x0B90 (size: 0x8)
    FRotator CamBufferRot;                                                            // 0x0B98 (size: 0xC)
    FVector CamBufferLoc;                                                             // 0x0BA4 (size: 0xC)
    class AActor* CamBufferActor;                                                     // 0x0BB0 (size: 0x8)
    float CurrentSplinePosition;                                                      // 0x0BB8 (size: 0x4)
    bool SubMoving;                                                                   // 0x0BBC (size: 0x1)
    bool CamMoving;                                                                   // 0x0BBD (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__FalconEnemyState_Done_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_ResetPos_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Reset();
    void BndEvt__FalconEnemyState_FollowPath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void CamUpdate(float Delta);
    void CamUpdate Cam(float Delta);
    void ExecuteUbergraph_SharkSub1(int32 EntryPoint);
}; // Size: 0xBBE

#endif
