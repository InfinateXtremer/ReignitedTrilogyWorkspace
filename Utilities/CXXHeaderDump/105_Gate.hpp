#ifndef UE4SS_SDK_105_Gate_HPP
#define UE4SS_SDK_105_Gate_HPP

class A105_Gate_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UPointLightComponent* Claw_PointLight;                                      // 0x0488 (size: 0x8)
    class USceneComponent* DamageLoc2;                                                // 0x0490 (size: 0x8)
    class USceneComponent* DamageLoc1;                                                // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_PlayerNear;                                     // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* TimePlus;                                             // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* TimeBonus;                                            // 0x04B0 (size: 0x8)
    class UDestructibleComponent* SM_SH_Flight_Arch_DM;                               // 0x04B8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04C0 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x04C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04D0 (size: 0x8)
    class UParticleSystemComponent* ActiveParticle;                                   // 0x04D8 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04E0 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_43B199E64BB8B7E51310E2A500004F9F; // 0x04E8 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04F0 (size: 0x8)
    class UAkAudioEvent* SFX_Explode;                                                 // 0x04F8 (size: 0x8)
    bool PlayerInCapsule;                                                             // 0x0500 (size: 0x1)
    int32 TimeValue;                                                                  // 0x0504 (size: 0x4)
    FVector Vector;                                                                   // 0x0508 (size: 0xC)
    bool isNightTimeGate;                                                             // 0x0514 (size: 0x1)
    float Light Intensity;                                                            // 0x0518 (size: 0x4)
    float Light Attenuation;                                                          // 0x051C (size: 0x4)
    class UParticleSystemComponent* ElectricArc;                                      // 0x0520 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__FalconLevelActorStateMachine_K2Node_ComponentBoundEvent_1_OnStateChangeSignature__DelegateSignature(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Box_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void BndEvt__State_PlayerNear_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_PlayerNear_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_105_Gate(int32 EntryPoint);
}; // Size: 0x528

#endif
