#ifndef UE4SS_SDK_BP_LS124_DoorA_HPP
#define UE4SS_SDK_BP_LS124_DoorA_HPP

class ABP_LS124_DoorA_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UAkComponent* Ak;                                                           // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS124_Door_Open_Dust;                      // 0x0338 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0340 (size: 0x8)
    float Timeline_0_NewTrack_0_3CFE174F420324A10A771F921FD4F595;                     // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3CFE174F420324A10A771F921FD4F595; // 0x034C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0350 (size: 0x8)
    FVector InitialLocation;                                                          // 0x0358 (size: 0xC)
    FName ObjectiveState;                                                             // 0x0368 (size: 0x8)
    bool StayClosed;                                                                  // 0x0370 (size: 0x1)
    class ABP_LS124_DoorA_C* DoorA;                                                   // 0x0378 (size: 0x8)
    bool MetalHead Is Dead;                                                           // 0x0380 (size: 0x1)
    class AActor* My Save Object;                                                     // 0x0388 (size: 0x8)
    class ABP_CBS1003_Metalhead_C* MetalHead;                                         // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Open();
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS124_DoorA(int32 EntryPoint);
}; // Size: 0x398

#endif
