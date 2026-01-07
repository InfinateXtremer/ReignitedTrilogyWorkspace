#ifndef UE4SS_SDK_BP_CES2014_Goat_HPP
#define UE4SS_SDK_BP_CES2014_Goat_HPP

class ABP_CES2014_Goat_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HeadButt_Friend;               // 0x09F8 (size: 0x8)
    class UCapsuleComponent* HeadButtDetector;                                        // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HeadShake;                     // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_GetUp;                         // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Miss;                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeFriendly;                // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Return;                        // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_HeadButt;                      // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargePlayer;                  // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekPlayer;                    // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Alert;                         // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_StationaryIdle;                // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_SeekFriendly;                  // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wander;                        // 0x0A68 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_MoveSelector;                  // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A78 (size: 0x8)
    class ABP_CES2014_Goat_C* Friend;                                                 // 0x0A80 (size: 0x8)
    class UPhasmidCharacterMovementComponent* PhasmidMoveComp;                        // 0x0A88 (size: 0x8)
    float InitialCarTurningRate;                                                      // 0x0A90 (size: 0x4)
    float FriendlyChargeStuckThresholdSquared;                                        // 0x0A94 (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_MoveSelector_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_SeekFriendly_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__HeadButtDetector_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Return_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChargeFriendly_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargePlayer_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wander_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Wander_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_ChargePlayer_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void StartStuckCheck(float Threshold);
    void EndStuckCheck();
    void BndEvt__FalconEnemyState_ChargeFriendly_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_BP_CES2014_Goat(int32 EntryPoint);
}; // Size: 0xA98

#endif
