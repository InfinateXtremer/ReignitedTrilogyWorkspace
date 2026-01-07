#ifndef UE4SS_SDK_Turret_Player_HPP
#define UE4SS_SDK_Turret_Player_HPP

class ATurret_Player_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0320 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0328 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Feet;                                                 // 0x0338 (size: 0x8)
    class UStaticMeshComponent* BasePlatform;                                         // 0x0340 (size: 0x8)
    class UCombatPoolComponent* CombatPool;                                           // 0x0348 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0350 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0358 (size: 0x8)
    class UChildActorComponent* Spot;                                                 // 0x0360 (size: 0x8)
    class UStaticMeshComponent* BarrelEnd;                                            // 0x0368 (size: 0x8)
    class UChildActorComponent* FirePoint;                                            // 0x0370 (size: 0x8)
    class UStaticMeshComponent* BarrelBase;                                           // 0x0378 (size: 0x8)
    class UStaticMeshComponent* TurretTop;                                            // 0x0380 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0388 (size: 0x8)
    class USphereComponent* SphereCollision;                                          // 0x0390 (size: 0x8)
    class UStaticMeshComponent* BarrelR;                                              // 0x0398 (size: 0x8)
    FVector ScaleBarrel_NewTrack_0_4F00342741BBD3753ADAB292928BF558;                  // 0x03A0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> ScaleBarrel__Direction_4F00342741BBD3753ADAB292928BF558; // 0x03AC (size: 0x1)
    class UTimelineComponent* ScaleBarrel;                                            // 0x03B0 (size: 0x8)
    float Timeline_0_VerticalMove_4162DA04430ADC35D148A29CF654E1B8;                   // 0x03B8 (size: 0x4)
    float Timeline_0_TurnTo_4162DA04430ADC35D148A29CF654E1B8;                         // 0x03BC (size: 0x4)
    float Timeline_0_NewTrack_0_4162DA04430ADC35D148A29CF654E1B8;                     // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4162DA04430ADC35D148A29CF654E1B8; // 0x03C4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03C8 (size: 0x8)
    float DeltaTime;                                                                  // 0x03D0 (size: 0x4)
    float StartingLocationY;                                                          // 0x03D4 (size: 0x4)
    float StartingLocationZ;                                                          // 0x03D8 (size: 0x4)
    class AActor* SafeSpot;                                                           // 0x03E0 (size: 0x8)
    bool InTurret;                                                                    // 0x03E8 (size: 0x1)
    float FireInterval;                                                               // 0x03EC (size: 0x4)
    FVector Walk to Location;                                                         // 0x03F0 (size: 0xC)
    FVector Walk to Location End;                                                     // 0x03FC (size: 0xC)
    FRotator Look at rotation;                                                        // 0x0408 (size: 0xC)
    float ProjectileSpeed;                                                            // 0x0414 (size: 0x4)
    float BarrelAngle;                                                                // 0x0418 (size: 0x4)
    bool PlayerInSphere;                                                              // 0x041C (size: 0x1)
    FRotator Look at rotation_End;                                                    // 0x0420 (size: 0xC)
    bool Button_B;                                                                    // 0x042C (size: 0x1)
    class AMusicManager_C* MusicManager;                                              // 0x0430 (size: 0x8)
    bool is213_NPCfiring?;                                                            // 0x0438 (size: 0x1)
    float NPCControl_RotateRate;                                                      // 0x043C (size: 0x4)
    int32 NPCControl_State;                                                           // 0x0440 (size: 0x4)
    bool NPCControl_WasAborted?;                                                      // 0x0444 (size: 0x1)
    float TurnRateDenom_X;                                                            // 0x0448 (size: 0x4)
    float TurnRateDenom_Y;                                                            // 0x044C (size: 0x4)
    bool Button_Trigger;                                                              // 0x0450 (size: 0x1)
    bool Lob;                                                                         // 0x0451 (size: 0x1)
    float Gravity;                                                                    // 0x0454 (size: 0x4)
    float BarrelAngleModifier;                                                        // 0x0458 (size: 0x4)
    bool CamActive;                                                                   // 0x045C (size: 0x1)
    bool MoveDone;                                                                    // 0x045D (size: 0x1)
    float RawXRotationPerSecond;                                                      // 0x0460 (size: 0x4)
    float RawYRotationPerSecond;                                                      // 0x0464 (size: 0x4)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ScaleBarrel__FinishedFunc();
    void ScaleBarrel__UpdateFunc();
    void InpActEvt_Jump_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_FireAttack_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_FireAttack_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_RightTrigger_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_RightTrigger_K2Node_InputActionEvent_0(FKey Key);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveTick(float DeltaSeconds);
    void Fire Weapons();
    void ReceiveBeginPlay();
    void InpAxisEvt_MovementAxisX_K2Node_InputAxisEvent_8(float AxisValue);
    void InpAxisEvt_MovementAxisY_K2Node_InputAxisEvent_9(float AxisValue);
    void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MOve Player(int32 Sequence);
    void STop Movement();
    void Trigger Cam();
    void Untrigger Cam();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionEnd(bool Success, bool LevelEnd);
    void PlayerControl(bool Start);
    void NPC Control - Force Fire();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_Turret_Player(int32 EntryPoint);
}; // Size: 0x468

#endif
