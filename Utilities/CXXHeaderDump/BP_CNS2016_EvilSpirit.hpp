#ifndef UE4SS_SDK_BP_CNS2016_EvilSpirit_HPP
#define UE4SS_SDK_BP_CNS2016_EvilSpirit_HPP

class ABP_CNS2016_EvilSpirit_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0488 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0490 (size: 0x8)
    class UParticleSystemComponent* PS_EvilSpirit_Trail;                              // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_IGCLeave;                                       // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State_PreIGC;                                         // 0x04A8 (size: 0x8)
    class UBP_StateComponent_C* State_OrbitProfessor;                                 // 0x04B0 (size: 0x8)
    class UBP_StateComponent_C* State_Exorcised;                                      // 0x04B8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04C0 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> RunAlongspline__Direction_A7233CBD4EE25AE880E088971AFB574B; // 0x04C8 (size: 0x1)
    class UTimelineComponent* RunAlongspline;                                         // 0x04D0 (size: 0x8)
    class AActor* StatueActor;                                                        // 0x04D8 (size: 0x8)
    int32 State;                                                                      // 0x04E0 (size: 0x4)
    class USplineComponent* StatueSpline;                                             // 0x04E8 (size: 0x8)
    class UParticleSystemComponent* MoveParticle;                                     // 0x04F0 (size: 0x8)
    float OrbitValue;                                                                 // 0x04F8 (size: 0x4)
    bool Orbit;                                                                       // 0x04FC (size: 0x1)
    class AActor* Professor;                                                          // 0x0500 (size: 0x8)
    float SinMultiplier;                                                              // 0x0508 (size: 0x4)
    class AActor* Path;                                                               // 0x0510 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0518 (size: 0x8)
    class AActor* TriggerVolume;                                                      // 0x0520 (size: 0x8)
    bool Respawn;                                                                     // 0x0528 (size: 0x1)
    class ATargetPoint* SplineMover;                                                  // 0x0530 (size: 0x8)
    FRotator RotBuffer;                                                               // 0x0538 (size: 0xC)
    FVector LocBuffer;                                                                // 0x0544 (size: 0xC)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void RunAlongspline__FinishedFunc();
    void RunAlongspline__UpdateFunc();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_OrbitProfessor_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__State_IGCLeave_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void VolumeCheck(class AActor* OverlappedActor, class AActor* OtherActor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CNS2016_EvilSpirit(int32 EntryPoint);
}; // Size: 0x550

#endif
