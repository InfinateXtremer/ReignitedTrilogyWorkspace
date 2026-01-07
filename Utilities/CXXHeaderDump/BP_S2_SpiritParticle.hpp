#ifndef UE4SS_SDK_BP_S2_SpiritParticle_HPP
#define UE4SS_SDK_BP_S2_SpiritParticle_HPP

class ABP_S2_SpiritParticle_C : public APhasmidCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0828 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0830 (size: 0x8)
    class UParticleSystemComponent* SpiritParticle;                                   // 0x0838 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x0840 (size: 0x8)
    class UFalconDeathStateComponent* State: Death;                                   // 0x0848 (size: 0x8)
    class UFalconEnemyStateComponent* State: Move;                                    // 0x0850 (size: 0x8)
    class UFalconEnemyStateComponent* State: Default;                                 // 0x0858 (size: 0x8)
    float Timeline_0_NewTrack_0_1DA22B6A4AD885FE81A869A7E26CD40A;                     // 0x0860 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1DA22B6A4AD885FE81A869A7E26CD40A; // 0x0864 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0868 (size: 0x8)
    float MoveToGatePercent_PErcent_9B086C6F4A25B09D53B5A38E260AAE54;                 // 0x0870 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveToGatePercent__Direction_9B086C6F4A25B09D53B5A38E260AAE54; // 0x0874 (size: 0x1)
    class UTimelineComponent* MoveToGatePercent;                                      // 0x0878 (size: 0x8)
    float MoveToSplinePercent_Percent_5D4441F1419C4A5A33A649AFEF83D6DA;               // 0x0880 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveToSplinePercent__Direction_5D4441F1419C4A5A33A649AFEF83D6DA; // 0x0884 (size: 0x1)
    class UTimelineComponent* MoveToSplinePercent;                                    // 0x0888 (size: 0x8)
    float SpiritSpawn_Control_Spin_EAA1D3894F972C9260FE61B5CBAF15D3;                  // 0x0890 (size: 0x4)
    float SpiritSpawn_Control_Vertical_EAA1D3894F972C9260FE61B5CBAF15D3;              // 0x0894 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpiritSpawn_Control__Direction_EAA1D3894F972C9260FE61B5CBAF15D3; // 0x0898 (size: 0x1)
    class UTimelineComponent* SpiritSpawn_Control;                                    // 0x08A0 (size: 0x8)
    bool introComplete;                                                               // 0x08A8 (size: 0x1)
    int32 collectSequence;                                                            // 0x08AC (size: 0x4)
    EInventoryType NewVar_0;                                                          // 0x08B0 (size: 0x1)
    TArray<class AActor*> ActorSet;                                                   // 0x08B8 (size: 0x10)
    class AActor* ActorDestination;                                                   // 0x08C8 (size: 0x8)
    FVector SpawnLocation;                                                            // 0x08D0 (size: 0xC)
    FVector DestinationLocation;                                                      // 0x08DC (size: 0xC)
    class ABP_S2_SpiritParticlePath_C* NearestPathActor;                              // 0x08E8 (size: 0x8)
    float scratch_ClosestDistance;                                                    // 0x08F0 (size: 0x4)
    class USplineComponent* NearestPathSpline;                                        // 0x08F8 (size: 0x8)
    float PathSplinePercent;                                                          // 0x0900 (size: 0x4)
    float NearestSplinePercent;                                                       // 0x0904 (size: 0x4)

    void UserConstructionScript();
    void SpiritSpawn_Control__FinishedFunc();
    void SpiritSpawn_Control__UpdateFunc();
    void MoveToSplinePercent__FinishedFunc();
    void MoveToSplinePercent__UpdateFunc();
    void MoveToGatePercent__FinishedFunc();
    void MoveToGatePercent__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_S2_SpiritParticle(int32 EntryPoint);
}; // Size: 0x908

#endif
