#ifndef UE4SS_SDK_129_Copter_HPP
#define UE4SS_SDK_129_Copter_HPP

class A129_Copter_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* PS_Exhaust_Copter_L;                              // 0x0488 (size: 0x8)
    class UParticleSystemComponent* PS_Exhaust_Copter_R;                              // 0x0490 (size: 0x8)
    class UFalconAIMovementCoordinator* FalconAIMovementCoordinator;                  // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Ready;                                          // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State_Alert;                                          // 0x04A8 (size: 0x8)
    class UBP_StateComponent_C* State_Fall;                                           // 0x04B0 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x04B8 (size: 0x8)
    class USkeletalMeshComponent* driver;                                             // 0x04C0 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04D0 (size: 0x8)
    float Timeline_1_NewTrack_0_1ED251BC4D66A6ABDD594693ADE47BCB;                     // 0x04D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_1ED251BC4D66A6ABDD594693ADE47BCB; // 0x04DC (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04E0 (size: 0x8)
    float Timeline_0_0_Float_453F565C42C2DF82D7568ABDFB3BF211;                        // 0x04E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_453F565C42C2DF82D7568ABDFB3BF211; // 0x04EC (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04F0 (size: 0x8)
    class AActor* SplineMoverActor;                                                   // 0x04F8 (size: 0x8)
    FVector StartPos;                                                                 // 0x0500 (size: 0xC)
    FVector Offset;                                                                   // 0x050C (size: 0xC)
    FVector EndPos;                                                                   // 0x0518 (size: 0xC)
    float Value_Current;                                                              // 0x0524 (size: 0x4)
    bool Active;                                                                      // 0x0528 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_129_Copter(int32 EntryPoint);
}; // Size: 0x529

#endif
