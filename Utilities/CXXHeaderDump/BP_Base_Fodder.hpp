#ifndef UE4SS_SDK_BP_Base_Fodder_HPP
#define UE4SS_SDK_BP_Base_Fodder_HPP

class ABP_Base_Fodder_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_DeathFlop;                                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* State_FodderDead;                               // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* State_FodderRespawn;                            // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* State_FodderFlamed;                             // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* State_FodderWander;                             // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* State_FodderIdle;                               // 0x0A20 (size: 0x8)
    FVector Blacken_Fodder_NewTrack_0_5E572452466FD96536DFD792FACA8D6E;               // 0x0A28 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Blacken_Fodder__Direction_5E572452466FD96536DFD792FACA8D6E; // 0x0A34 (size: 0x1)
    class UTimelineComponent* Blacken Fodder;                                         // 0x0A38 (size: 0x8)
    float Timeline_3_Dissolve_Amount_9AEA09984DABFF5D02D8228910EBECCE;                // 0x0A40 (size: 0x4)
    float Timeline_3_Diffuse_Brightness_9AEA09984DABFF5D02D8228910EBECCE;             // 0x0A44 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_9AEA09984DABFF5D02D8228910EBECCE; // 0x0A48 (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0A50 (size: 0x8)
    FVector Timeline_2_Brighten_D188DDC84921C92F4C71D3A1FE0E5E6B;                     // 0x0A58 (size: 0xC)
    FVector Timeline_2_FadeToBlack_D188DDC84921C92F4C71D3A1FE0E5E6B;                  // 0x0A64 (size: 0xC)
    float Timeline_2_FadeShadow_D188DDC84921C92F4C71D3A1FE0E5E6B;                     // 0x0A70 (size: 0x4)
    float Timeline_2_Fringe_Intensity_D188DDC84921C92F4C71D3A1FE0E5E6B;               // 0x0A74 (size: 0x4)
    float Timeline_2_Fringe_Size_D188DDC84921C92F4C71D3A1FE0E5E6B;                    // 0x0A78 (size: 0x4)
    float Timeline_2_Dissolve_Amount_D188DDC84921C92F4C71D3A1FE0E5E6B;                // 0x0A7C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_D188DDC84921C92F4C71D3A1FE0E5E6B; // 0x0A80 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0A88 (size: 0x8)
    float Timeline_1_NewTrack_1_73F8972E46B84E5C1E733AA2A73C7C31;                     // 0x0A90 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_73F8972E46B84E5C1E733AA2A73C7C31; // 0x0A94 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A98 (size: 0x8)
    class ABP_ButterflyHealth_C* Butterfly;                                           // 0x0AA0 (size: 0x8)
    FVector Spawn_Point;                                                              // 0x0AA8 (size: 0xC)
    FVector Starting_Location;                                                        // 0x0AB4 (size: 0xC)
    FVector ImpactNormal;                                                             // 0x0AC0 (size: 0xC)
    FTimerHandle PushTimer;                                                           // 0x0AD0 (size: 0x8)
    float StartingGravity;                                                            // 0x0AD8 (size: 0x4)
    class UAkAudioEvent* SFX_Bodyfall;                                                // 0x0AE0 (size: 0x8)
    FVector TintColorLastSet;                                                         // 0x0AE8 (size: 0xC)
    float CapsuleShadowDarkness;                                                      // 0x0AF4 (size: 0x4)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Blacken Fodder__FinishedFunc();
    void Blacken Fodder__UpdateFunc();
    void BndEvt__FalconEnemyState_FodderDead_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FodderDead_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__FalconEnemyState_FodderRespawn_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__FalconEnemy_K2Node_ComponentBoundEvent_0_OnStateChangeSignature__DelegateSignature();
    void CustomEvent_1();
    void CustomEvent_2();
    void CustomEvent_3();
    void Death Dissolve Fodder();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PushFodder();
    void BlackenFodder();
    void OnLaunchToDeath(class UFalconEnemyStateComponent* State Component);
    void BndEvt__State_FodderFlamed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void PushedOffNavMesh();
    void ExecuteUbergraph_BP_Base_Fodder(int32 EntryPoint);
}; // Size: 0xAF8

#endif
