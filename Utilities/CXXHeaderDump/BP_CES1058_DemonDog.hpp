#ifndef UE4SS_SDK_BP_CES1058_DemonDog_HPP
#define UE4SS_SDK_BP_CES1058_DemonDog_HPP

class ABP_CES1058_DemonDog_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdleUnlit_Special;     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FacePlayerUnlit_Special;       // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnUnlit_Special;           // 0x0A08 (size: 0x8)
    class UParticleSystemComponent* MouthFireVFX;                                     // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FacePlayerLit;                 // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FacePlayerUnlit;               // 0x0A20 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_DemonDog_SmallToLarge_Transition_MouthFlames; // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleUnlit2;                    // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdleUnlit;             // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_RecoveryIdleLit;               // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToLit;                // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleLit2;                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToUnlit;              // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DropGem;                       // 0x0A60 (size: 0x8)
    class UCapsuleComponent* BigBodyCapsule;                                          // 0x0A68 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A70 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToUnlit;                       // 0x0A78 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ToLit;                         // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathLit;                      // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnLit;                     // 0x0A90 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FaceOriginLit;                 // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackLit;                     // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeLit;                     // 0x0AA8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleLit;                       // 0x0AB0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_DeathUnlit;                    // 0x0AB8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ReturnUnlit;                   // 0x0AC0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FaceOriginUnlit;               // 0x0AC8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_AttackUnlit;                   // 0x0AD0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ChargeUnlit;                   // 0x0AD8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleUnlit;                     // 0x0AE0 (size: 0x8)
    float AttackEmissives_Emissive_Value_2D4548614325124BD16AE3979849D975;            // 0x0AE8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> AttackEmissives__Direction_2D4548614325124BD16AE3979849D975; // 0x0AEC (size: 0x1)
    class UTimelineComponent* AttackEmissives;                                        // 0x0AF0 (size: 0x8)
    float HopTurnRotation_ZRot_995DBB184B20871B3E182FBE6D28BEAC;                      // 0x0AF8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> HopTurnRotation__Direction_995DBB184B20871B3E182FBE6D28BEAC; // 0x0AFC (size: 0x1)
    class UTimelineComponent* HopTurnRotation;                                        // 0x0B00 (size: 0x8)
    float ShrinkBigBodyCapsules_Scale_111978A346FDE60A38576EBBA3D3E1A8;               // 0x0B08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShrinkBigBodyCapsules__Direction_111978A346FDE60A38576EBBA3D3E1A8; // 0x0B0C (size: 0x1)
    class UTimelineComponent* ShrinkBigBodyCapsules;                                  // 0x0B10 (size: 0x8)
    float GrowBigBodyCapsules_Scale_B206D3CA48D8E81BF8CA7C9AABE3D103;                 // 0x0B18 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GrowBigBodyCapsules__Direction_B206D3CA48D8E81BF8CA7C9AABE3D103; // 0x0B1C (size: 0x1)
    class UTimelineComponent* GrowBigBodyCapsules;                                    // 0x0B20 (size: 0x8)
    class ABP_CES1155_LampFool_C* MineLampFool;                                       // 0x0B28 (size: 0x8)
    bool IsSmall;                                                                     // 0x0B30 (size: 0x1)
    bool isGrowing;                                                                   // 0x0B31 (size: 0x1)
    class AActor* achievement;                                                        // 0x0B38 (size: 0x8)
    FVector startingLocation;                                                         // 0x0B40 (size: 0xC)
    bool isDying;                                                                     // 0x0B4C (size: 0x1)

    bool OnDealDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void GrowBigBodyCapsules__FinishedFunc();
    void GrowBigBodyCapsules__UpdateFunc();
    void ShrinkBigBodyCapsules__FinishedFunc();
    void ShrinkBigBodyCapsules__UpdateFunc();
    void HopTurnRotation__FinishedFunc();
    void HopTurnRotation__UpdateFunc();
    void AttackEmissives__FinishedFunc();
    void AttackEmissives__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__FalconEnemyState_AttackUnlit_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__FalconEnemyState_DropGem_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyStatea_ModelSwapToUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_ReturnLit_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToLit_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeLit_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ToLit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ToUnlit_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ReturnUnlit_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_DeathUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ChargeUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FaceOriginUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FaceOriginUnlit_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_FaceOriginLit_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FaceOriginLit_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_FacePlayerUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FacePlayerUnlit_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_FacePlayerLit_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FacePlayerLit_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void MissionRestore();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__FalconEnemyState_IdleUnlit2_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_IdleUnlit_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionSuspend(bool Suspend);
    void BndEvt__FalconEnemyState_RecoveryIdleUnlit_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void Chew Rumble();
    void MissionSetup(bool Active);
    void LightsOn();
    void LightsOff();
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__FalconEnemyState_AttackUnlit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void TurnOnMouthFire();
    void TurnOffMouthFire();
    void ExecuteUbergraph_BP_CES1058_DemonDog(int32 EntryPoint);
}; // Size: 0xB4D

#endif
