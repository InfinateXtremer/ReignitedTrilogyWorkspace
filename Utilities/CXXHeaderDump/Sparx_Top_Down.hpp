#ifndef UE4SS_SDK_Sparx_Top_Down_HPP
#define UE4SS_SDK_Sparx_Top_Down_HPP

class ASparx_Top_Down_C : public ABP_Base_Character_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0838 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0840 (size: 0x8)
    class USkeletalMeshComponent* CPS1156_Sparx;                                      // 0x0848 (size: 0x8)
    class UStaticMeshComponent* Powerup_Shield;                                       // 0x0850 (size: 0x8)
    class UCapsuleComponent* Trigger Capsule;                                         // 0x0858 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0860 (size: 0x8)
    float Timeline_0_Facing_Offset_9E34D7F74183183CCB25FE991C6FF381;                  // 0x0868 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_9E34D7F74183183CCB25FE991C6FF381; // 0x086C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0870 (size: 0x8)
    float Normal Speed;                                                               // 0x0878 (size: 0x4)
    class USceneComponent* NewVar_0;                                                  // 0x0880 (size: 0x8)
    class UProjectileMovementComponent* NewVar_1;                                     // 0x0888 (size: 0x8)
    class USceneComponent* NewVar_4;                                                  // 0x0890 (size: 0x8)
    float Facing Modifier;                                                            // 0x0898 (size: 0x4)
    bool Boost Active;                                                                // 0x089C (size: 0x1)
    float Axis_Y;                                                                     // 0x08A0 (size: 0x4)
    float Axis_X;                                                                     // 0x08A4 (size: 0x4)
    TEnumAsByte<Powerup_Types::Type> PowerUp Type;                                    // 0x08A8 (size: 0x1)
    FVector Missle Position 1;                                                        // 0x08AC (size: 0xC)
    FVector Missle Position 2;                                                        // 0x08B8 (size: 0xC)
    float Shield Time;                                                                // 0x08C4 (size: 0x4)
    FVector Missle Position 3;                                                        // 0x08C8 (size: 0xC)
    TEnumAsByte<Powerup_Types::Type> PowerUp Type Triggered;                          // 0x08D4 (size: 0x1)
    FVector Trace Vector Close;                                                       // 0x08D8 (size: 0xC)
    TArray<class AActor*> Ignore Set;                                                 // 0x08E8 (size: 0x10)
    float Trace Closest Distance;                                                     // 0x08F8 (size: 0x4)
    float Trace Maximum Distance;                                                     // 0x08FC (size: 0x4)
    class AActor* Missile 1;                                                          // 0x0900 (size: 0x8)
    class AActor* Missile 2;                                                          // 0x0908 (size: 0x8)
    class AActor* Missile 3;                                                          // 0x0910 (size: 0x8)
    class AActor* NULL;                                                               // 0x0918 (size: 0x8)
    float Missle_Speed;                                                               // 0x0920 (size: 0x4)
    TArray<class AActor*> Missle_Target_Set;                                          // 0x0928 (size: 0x10)
    TArray<class AActor*> Sorted_Missile_Targets;                                     // 0x0938 (size: 0x10)
    class AActor* Nearest Missle Target;                                              // 0x0948 (size: 0x8)
    bool Shield Active;                                                               // 0x0950 (size: 0x1)
    TArray<class AActor*> Temp_Set;                                                   // 0x0958 (size: 0x10)
    int32 Ammo;                                                                       // 0x0968 (size: 0x4)
    TArray<FLinearColor> Colors;                                                      // 0x0970 (size: 0x10)
    int32 Cur Sparx Heath;                                                            // 0x0980 (size: 0x4)
    TArray<class UParticleSystem*> Health Particles;                                  // 0x0988 (size: 0x10)
    class UParticleSystemComponent* Cur Health Particles;                             // 0x0998 (size: 0x8)
    class AActor* Current Check Point;                                                // 0x09A0 (size: 0x8)

    bool OnHealthRestored(const FGameplayEventData Payload);
    bool OnDeath(const FGameplayEventData Payload);
    bool OnDamage(const FGameplayEventData Payload);
    bool OnDealDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void InpActEvt_Jump_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_FireAttack_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_FireAttack_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_ChargeAttack_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_ChargeAttack_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_SideRollRight_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_SideRollRight_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void InpAxisEvt_MovementAxisX_K2Node_InputAxisEvent_6(float AxisValue);
    void InpAxisEvt_MovementAxisY_K2Node_InputAxisEvent_20(float AxisValue);
    void Stop Attack 1();
    void Allow Attack 1();
    void Allow Attack Powerups();
    void Stop Attack Powerups();
    void ReceiveTick(float DeltaSeconds);
    void Stop Strafe();
    void Allow Strafe();
    void BndEvt__Trigger Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Create Shield();
    void Fire Missles();
    void Find Targets();
    void Out of Ammo();
    void DamageReceived(float Magnitude, float CurrentHealth, FGameplayTagContainer DamageType, bool IsKillingBlow);
    void Update Apperance();
    void Is Dead();
    void OnHealthReceived(float Magnitude, float CurrentHealth, FGameplayTagContainer HealType);
    void ExecuteUbergraph_Sparx_Top_Down(int32 EntryPoint);
}; // Size: 0x9A8

#endif
