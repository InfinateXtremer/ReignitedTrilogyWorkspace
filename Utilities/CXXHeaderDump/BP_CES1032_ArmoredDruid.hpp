#ifndef UE4SS_SDK_BP_CES1032_ArmoredDruid_HPP
#define UE4SS_SDK_BP_CES1032_ArmoredDruid_HPP

class ABP_CES1032_ArmoredDruid_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* IdleLookAround;                                 // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* IdleTimeOut;                                    // 0x0A00 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_ArmoredDruid_StaffSparkle;                 // 0x0A08 (size: 0x8)
    class UCapsuleComponent* Capsule_Mounted;                                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* Death_Smashed;                                  // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* Feed;                                           // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* RideBeast;                                      // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* OntoBeast;                                      // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* SicEm;                                          // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* WaitForTrigger;                                 // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* Movement;                                       // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* SeekPlayer;                                     // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* Death;                                          // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* Recharge;                                       // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* Attack;                                         // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* Idle;                                           // 0x0A70 (size: 0x8)
    float MoveToMountBeast_Alpha_8798BD3941912F22B31928B6697528E8;                    // 0x0A78 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveToMountBeast__Direction_8798BD3941912F22B31928B6697528E8; // 0x0A7C (size: 0x1)
    class UTimelineComponent* MoveToMountBeast;                                       // 0x0A80 (size: 0x8)
    class ABP_CES1033_Beast_C* BeastReference;                                        // 0x0A88 (size: 0x8)
    bool isBeastAlive?;                                                               // 0x0A90 (size: 0x1)
    float OntoBeastInitialHorizontalDistance;                                         // 0x0A94 (size: 0x4)
    FVector OntoBeastInitialPosition;                                                 // 0x0A98 (size: 0xC)
    class ABP_LS113_AchievementTracker_C* AchievementTrackerRef;                      // 0x0AA8 (size: 0x8)
    bool MountedBeast;                                                                // 0x0AB0 (size: 0x1)

    void UserConstructionScript();
    void MoveToMountBeast__FinishedFunc();
    void MoveToMountBeast__UpdateFunc();
    void Beast Killed(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__OntoBeast_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SeekPlayer_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void UpdateRotation();
    void BndEvt__Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__SicEm_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__OntoBeast_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ThrowFood();
    void CustomNotify01(class AActor* InputActor);
    void ExecuteUbergraph_BP_CES1032_ArmoredDruid(int32 EntryPoint);
}; // Size: 0xAB1

#endif
