#ifndef UE4SS_SDK_CES2181_MonkeysScorch_HPP
#define UE4SS_SDK_CES2181_MonkeysScorch_HPP

class ACES2181_MonkeysScorch_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Monkey_Collected_Dust;                     // 0x0860 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Palm_Tree_Coconut_Bounce_Dust;             // 0x0868 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Palm_Tree_Coconut_Expire;                  // 0x0870 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Palm_Tree_Coconut_Hit_Impact;              // 0x0878 (size: 0x8)
    class UStaticMeshComponent* Coconut;                                              // 0x0880 (size: 0x8)
    class UBP_StateComponent_C* State_Death;                                          // 0x0888 (size: 0x8)
    class UBP_StateComponent_C* State_TargetPlayer;                                   // 0x0890 (size: 0x8)
    class UBP_StateComponent_C* State_Inactive;                                       // 0x0898 (size: 0x8)
    class UBP_StateComponent_C* State_HitHunter;                                      // 0x08A0 (size: 0x8)
    class UBP_StateComponent_C* State_TargetHunter;                                   // 0x08A8 (size: 0x8)
    class UBP_StateComponent_C* State_LaunchCoconut;                                  // 0x08B0 (size: 0x8)
    class UFalconDeathStateComponent* FalconDeathState;                               // 0x08B8 (size: 0x8)
    class UBP_StateComponent_C* State_StandUp;                                        // 0x08C0 (size: 0x8)
    class UArrowComponent* GroundLoc;                                                 // 0x08C8 (size: 0x8)
    class UBoxComponent* HunterCheck;                                                 // 0x08D0 (size: 0x8)
    class UBP_StateComponent_C* State_Jump;                                           // 0x08D8 (size: 0x8)
    class UBP_StateComponent_C* State_Down;                                           // 0x08E0 (size: 0x8)
    class UBP_StateComponent_C* State_Falling;                                        // 0x08E8 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x08F0 (size: 0x8)
    class UBP_StateComponent_C* State_TurnToPlayer;                                   // 0x08F8 (size: 0x8)
    float FallTimeline_NewTrack_0_0B5157E246F49845181F00A58F1618BA;                   // 0x0900 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FallTimeline__Direction_0B5157E246F49845181F00A58F1618BA; // 0x0904 (size: 0x1)
    class UTimelineComponent* FallTimeline;                                           // 0x0908 (size: 0x8)
    class AActor* MyTree;                                                             // 0x0910 (size: 0x8)
    FVector StartPos;                                                                 // 0x0918 (size: 0xC)
    FVector EndPos;                                                                   // 0x0924 (size: 0xC)
    class AActor* Hunter;                                                             // 0x0930 (size: 0x8)
    bool Active;                                                                      // 0x0938 (size: 0x1)
    class AActor* Target;                                                             // 0x0940 (size: 0x8)
    bool Hit;                                                                         // 0x0948 (size: 0x1)
    FVector CurrentPos;                                                               // 0x094C (size: 0xC)

    void UserConstructionScript();
    void FallTimeline__FinishedFunc();
    void FallTimeline__UpdateFunc();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void TreeChangesStates(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Falling_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Jump_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__HunterCheck_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__State_LaunchCoconut_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void CoconutHit(class AActor* OverlappedActor, class AActor* OtherActor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_TurnToPlayer_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_TargetHunter_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_TargetPlayer_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_CES2181_MonkeysScorch(int32 EntryPoint);
}; // Size: 0x958

#endif
