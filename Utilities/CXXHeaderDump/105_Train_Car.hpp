#ifndef UE4SS_SDK_105_Train_Car_HPP
#define UE4SS_SDK_105_Train_Car_HPP

class A105_Train_Car_C : public APhasmidAbilityBaseActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0368 (size: 0x8)
    class UAbilitySystemComponent* AbilitySystem;                                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Wheel04;                                              // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Wheel03;                                              // 0x0380 (size: 0x8)
    class UStaticMeshComponent* Wheel02;                                              // 0x0388 (size: 0x8)
    class UStaticMeshComponent* Wheel01;                                              // 0x0390 (size: 0x8)
    class UStaticMeshComponent* BarrelAttach;                                         // 0x0398 (size: 0x8)
    class UStaticMeshComponent* TrainCarModel;                                        // 0x03A0 (size: 0x8)
    class USceneComponent* TrainCarRoot;                                              // 0x03A8 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> SplineTimeLine__Direction_C8AC60AF45318542202EFEA38DCE1896; // 0x03B0 (size: 0x1)
    class UTimelineComponent* SplineTimeLine;                                         // 0x03B8 (size: 0x8)
    class AActor* AttachSplineActor;                                                  // 0x03C0 (size: 0x8)
    F105_Train_Car_CNewEventDispatcher_0 NewEventDispatcher_0;                        // 0x03C8 (size: 0x10)
    class A105_Barrel_C* barrel;                                                      // 0x03D8 (size: 0x8)
    class AActor* SplineActor;                                                        // 0x03E0 (size: 0x8)
    class USplineComponent* LocalSplineReference;                                     // 0x03E8 (size: 0x8)
    float splineTime;                                                                 // 0x03F0 (size: 0x4)
    float StartDistance;                                                              // 0x03F4 (size: 0x4)
    float StartTime;                                                                  // 0x03F8 (size: 0x4)
    float RotationValue;                                                              // 0x03FC (size: 0x4)
    bool Active;                                                                      // 0x0400 (size: 0x1)
    bool ReverseDirection;                                                            // 0x0401 (size: 0x1)

    void UserConstructionScript();
    void SplineTimeLine__FinishedFunc();
    void SplineTimeLine__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Death(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void SetUpSplineMovement();
    void Start();
    void ExecuteUbergraph_105_Train_Car(int32 EntryPoint);
    void NewEventDispatcher_0__DelegateSignature();
}; // Size: 0x402

#endif
